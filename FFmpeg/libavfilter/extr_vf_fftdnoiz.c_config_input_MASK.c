
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* priv; } ;
struct TYPE_14__ {int w; int h; int format; TYPE_6__* dst; } ;
struct TYPE_13__ {int log2_chroma_h; int log2_chroma_w; TYPE_1__* comp; } ;
struct TYPE_12__ {int depth; int sigma; int nb_prev; int nb_next; int nb_planes; int block_bits; int overlap; TYPE_2__* planes; int export_row; int import_row; } ;
struct TYPE_11__ {int planewidth; int planeheight; int b; float n; int o; int nox; int noy; int buffer_linesize; int data_linesize; void* vdata; void* hdata; void** buffer; } ;
struct TYPE_10__ {int depth; } ;
typedef TYPE_2__ PlaneContext ;
typedef TYPE_3__ FFTdnoizContext ;
typedef int FFTComplex ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_6__*,int ,char*,int,int,int) ;
 int FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_9)
{
    AVFilterContext *VAR_10 = VAR_9->dst;
    const AVPixFmtDescriptor *VAR_11;
    FFTdnoizContext *VAR_12 = VAR_10->priv;
    int VAR_13;

    VAR_11 = FUNC_5(VAR_9->format);
    VAR_12->depth = VAR_11->comp[0].depth;

    if (VAR_12->depth <= 8) {
        VAR_12->import_row = VAR_8;
        VAR_12->export_row = VAR_6;
    } else {
        VAR_12->import_row = VAR_7;
        VAR_12->export_row = VAR_5;
        VAR_12->sigma *= 1 << (VAR_12->depth - 8) * (1 + VAR_12->nb_prev + VAR_12->nb_next);
    }

    VAR_12->planes[1].planewidth = VAR_12->planes[2].planewidth = FUNC_1(VAR_9->w, VAR_11->log2_chroma_w);
    VAR_12->planes[0].planewidth = VAR_12->planes[3].planewidth = VAR_9->w;
    VAR_12->planes[1].planeheight = VAR_12->planes[2].planeheight = FUNC_1(VAR_9->h, VAR_11->log2_chroma_h);
    VAR_12->planes[0].planeheight = VAR_12->planes[3].planeheight = VAR_9->h;

    VAR_12->nb_planes = FUNC_4(VAR_9->format);

    for (VAR_13 = 0; VAR_13 < VAR_12->nb_planes; VAR_13++) {
        PlaneContext *VAR_14 = &VAR_12->planes[VAR_13];
        int VAR_15;

        VAR_14->b = 1 << VAR_12->block_bits;
        VAR_14->n = 1.f / (VAR_14->b * VAR_14->b);
        VAR_14->o = VAR_14->b * VAR_12->overlap;
        VAR_15 = VAR_14->b - VAR_14->o;
        VAR_14->nox = (VAR_14->planewidth + (VAR_15 - 1)) / VAR_15;
        VAR_14->noy = (VAR_14->planeheight + (VAR_15 - 1)) / VAR_15;

        FUNC_3(VAR_10, VAR_0, "nox:%d noy:%d size:%d\n", VAR_14->nox, VAR_14->noy, VAR_15);

        VAR_14->buffer_linesize = VAR_14->b * VAR_14->nox * sizeof(FFTComplex);
        VAR_14->buffer[VAR_1] = FUNC_2(VAR_14->b * VAR_14->noy, VAR_14->buffer_linesize);
        if (!VAR_14->buffer[VAR_1])
            return FUNC_0(VAR_2);
        if (VAR_12->nb_prev > 0) {
            VAR_14->buffer[VAR_4] = FUNC_2(VAR_14->b * VAR_14->noy, VAR_14->buffer_linesize);
            if (!VAR_14->buffer[VAR_4])
                return FUNC_0(VAR_2);
        }
        if (VAR_12->nb_next > 0) {
            VAR_14->buffer[VAR_3] = FUNC_2(VAR_14->b * VAR_14->noy, VAR_14->buffer_linesize);
            if (!VAR_14->buffer[VAR_3])
                return FUNC_0(VAR_2);
        }
        VAR_14->data_linesize = 2 * VAR_14->b * sizeof(float);
        VAR_14->hdata = FUNC_2(VAR_14->b, VAR_14->data_linesize);
        VAR_14->vdata = FUNC_2(VAR_14->b, VAR_14->data_linesize);
        if (!VAR_14->hdata || !VAR_14->vdata)
            return FUNC_0(VAR_2);
    }

    return 0;
}

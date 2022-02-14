
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


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_15__ {int* linesize; int ** data; } ;
struct TYPE_14__ {TYPE_2__* priv; } ;
struct TYPE_13__ {int w; int h; int format; TYPE_5__* dst; } ;
struct TYPE_12__ {int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_11__ {int nb_planes; int* height; int* width; int depth; int max; int planes; scalar_t__ sum; scalar_t__ max_sum; TYPE_6__* empty; int fill; int getsum; int maskfun; int linesize; } ;
struct TYPE_10__ {int depth; } ;
typedef TYPE_2__ MaskFunContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int ) ;
 TYPE_6__* FUNC_6 (TYPE_4__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->dst;
    MaskFunContext *VAR_7 = VAR_6->priv;
    const AVPixFmtDescriptor *VAR_8 = FUNC_5(VAR_5->format);
    int VAR_9, VAR_10, VAR_11;

    VAR_7->nb_planes = FUNC_4(VAR_5->format);

    if ((VAR_11 = FUNC_3(VAR_7->linesize, VAR_5->format, VAR_5->w)) < 0)
        return VAR_11;

    VAR_10 = VAR_8->log2_chroma_w;
    VAR_9 = VAR_8->log2_chroma_h;
    VAR_7->height[1] = VAR_7->height[2] = FUNC_1(VAR_5->h, VAR_9);
    VAR_7->height[0] = VAR_7->height[3] = VAR_5->h;
    VAR_7->width[1] = VAR_7->width[2] = FUNC_1(VAR_5->w, VAR_10);
    VAR_7->width[0] = VAR_7->width[3] = VAR_5->w;

    VAR_7->depth = VAR_8->comp[0].depth;
    VAR_7->max = (1 << VAR_7->depth) - 1;
    VAR_7->fill = FUNC_2(VAR_7->fill, VAR_7->max);

    if (VAR_7->depth == 8) {
        VAR_7->maskfun = VAR_4;
        VAR_7->getsum = VAR_2;
    } else {
        VAR_7->maskfun = VAR_3;
        VAR_7->getsum = VAR_1;
    }

    VAR_7->empty = FUNC_6(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_7->empty)
        return FUNC_0(VAR_0);

    if (VAR_7->depth == 8) {
        for (int VAR_12 = 0; VAR_12 < VAR_7->nb_planes; VAR_12++) {
            uint8_t *VAR_13 = VAR_7->empty->data[VAR_12];

            for (int VAR_14 = 0; VAR_14 < VAR_7->height[VAR_12]; VAR_14++) {
                FUNC_7(VAR_13, VAR_7->fill, VAR_7->width[VAR_12]);
                VAR_13 += VAR_7->empty->linesize[VAR_12];
            }
        }
    } else {
        for (int VAR_15 = 0; VAR_15 < VAR_7->nb_planes; VAR_15++) {
            uint16_t *VAR_16 = (uint16_t *)VAR_7->empty->data[VAR_15];

            for (int VAR_17 = 0; VAR_17 < VAR_7->height[VAR_15]; VAR_17++) {
                for (int VAR_18 = 0; VAR_18 < VAR_7->width[VAR_15]; VAR_18++)
                    VAR_16[VAR_18] = VAR_7->fill;
                VAR_16 += VAR_7->empty->linesize[VAR_15] / 2;
            }
        }
    }

    VAR_7->max_sum = 0;
    for (int VAR_19 = 0; VAR_19 < VAR_7->nb_planes; VAR_19++) {
        if (!((1 << VAR_19) & VAR_7->planes))
            continue;
        VAR_7->max_sum += (uint64_t)VAR_7->sum * VAR_7->width[VAR_19] * VAR_7->height[VAR_19];
    }

    return 0;
}

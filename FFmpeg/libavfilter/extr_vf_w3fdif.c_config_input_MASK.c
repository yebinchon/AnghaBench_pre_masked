
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int filter_scale; int filter_complex_high; int filter_simple_high; int filter_complex_low; int filter_simple_low; } ;
struct TYPE_12__ {int* planeheight; int nb_threads; int max; TYPE_6__ dsp; void** work_line; int * linesize; int nb_planes; } ;
typedef TYPE_2__ W3FDIFContext ;
struct TYPE_15__ {TYPE_2__* priv; } ;
struct TYPE_14__ {int h; int format; int w; TYPE_5__* dst; } ;
struct TYPE_13__ {TYPE_1__* comp; int log2_chroma_h; } ;
struct TYPE_11__ {int depth; } ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_5__*,int ,char*) ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_6__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_14)
{
    AVFilterContext *VAR_15 = VAR_14->dst;
    W3FDIFContext *VAR_16 = VAR_15->priv;
    const AVPixFmtDescriptor *VAR_17 = FUNC_7(VAR_14->format);
    int VAR_18, VAR_19, VAR_20;

    if ((VAR_18 = FUNC_4(VAR_16->linesize, VAR_14->format, VAR_14->w)) < 0)
        return VAR_18;

    VAR_16->planeheight[1] = VAR_16->planeheight[2] = FUNC_1(VAR_14->h, VAR_17->log2_chroma_h);
    VAR_16->planeheight[0] = VAR_16->planeheight[3] = VAR_14->h;

    if (VAR_14->h < 3) {
        FUNC_5(VAR_15, VAR_1, "Video of less than 3 lines is not supported\n");
        return FUNC_0(VAR_2);
    }

    VAR_16->nb_planes = FUNC_6(VAR_14->format);
    VAR_16->nb_threads = FUNC_8(VAR_15);
    VAR_16->work_line = FUNC_3(VAR_16->nb_threads, sizeof(*VAR_16->work_line));
    if (!VAR_16->work_line)
        return FUNC_0(VAR_3);

    for (VAR_19 = 0; VAR_19 < VAR_16->nb_threads; VAR_19++) {
        VAR_16->work_line[VAR_19] = FUNC_3(FUNC_2(VAR_16->linesize[0], 32), sizeof(*VAR_16->work_line[0]));
        if (!VAR_16->work_line[VAR_19])
            return FUNC_0(VAR_3);
    }

    VAR_20 = VAR_17->comp[0].depth;
    VAR_16->max = ((1 << VAR_20) - 1) * 256 * 128;
    if (VAR_20 <= 8) {
        VAR_16->dsp.filter_simple_low = VAR_13;
        VAR_16->dsp.filter_complex_low = VAR_10;
        VAR_16->dsp.filter_simple_high = VAR_12;
        VAR_16->dsp.filter_complex_high = VAR_9;
        VAR_16->dsp.filter_scale = VAR_11;
    } else {
        VAR_16->dsp.filter_simple_low = VAR_8;
        VAR_16->dsp.filter_complex_low = VAR_5;
        VAR_16->dsp.filter_simple_high = VAR_7;
        VAR_16->dsp.filter_complex_high = VAR_4;
        VAR_16->dsp.filter_scale = VAR_6;
    }

    if (VAR_0)
        FUNC_9(&VAR_16->dsp, VAR_20);

    return 0;
}

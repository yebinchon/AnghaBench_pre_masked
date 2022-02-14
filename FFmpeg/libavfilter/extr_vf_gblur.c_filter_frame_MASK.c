
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef float uint8_t ;
typedef float uint16_t ;
struct TYPE_19__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_18__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_17__ {float** data; int* linesize; } ;
struct TYPE_16__ {int nb_planes; int* planeheight; int* planewidth; float* buffer; int planes; int depth; int sigma; int nuV; int boundaryscaleV; int postscaleV; int steps; int sigmaV; int nu; int boundaryscale; int postscale; } ;
typedef TYPE_1__ GBlurContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (float*,int,float*,int,int const,int const) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (int ,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    GBlurContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6;
    int VAR_7;

    FUNC_8(VAR_4->sigma, VAR_4->steps, &VAR_4->postscale, &VAR_4->boundaryscale, &VAR_4->nu);
    FUNC_8(VAR_4->sigmaV, VAR_4->steps, &VAR_4->postscaleV, &VAR_4->boundaryscaleV, &VAR_4->nuV);

    if (FUNC_3(VAR_2)) {
        VAR_6 = VAR_2;
    } else {
        VAR_6 = FUNC_6(VAR_5, VAR_5->w, VAR_5->h);
        if (!VAR_6) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_6, VAR_2);
    }

    for (VAR_7 = 0; VAR_7 < VAR_4->nb_planes; VAR_7++) {
        const int VAR_8 = VAR_4->planeheight[VAR_7];
        const int VAR_9 = VAR_4->planewidth[VAR_7];
        float *VAR_10 = VAR_4->buffer;
        const uint8_t *VAR_11 = VAR_2->data[VAR_7];
        const uint16_t *VAR_12 = (const uint16_t *)VAR_2->data[VAR_7];
        uint8_t *VAR_13 = VAR_6->data[VAR_7];
        uint16_t *VAR_14 = (uint16_t *)VAR_6->data[VAR_7];
        int VAR_15, VAR_16;

        if (!VAR_4->sigma || !(VAR_4->planes & (1 << VAR_7))) {
            if (VAR_6 != VAR_2)
                FUNC_4(VAR_6->data[VAR_7], VAR_6->linesize[VAR_7],
                                    VAR_2->data[VAR_7], VAR_2->linesize[VAR_7],
                                    VAR_9 * ((VAR_4->depth + 7) / 8), VAR_8);
            continue;
        }

        if (VAR_4->depth == 8) {
            for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
                for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
                    VAR_10[VAR_16] = VAR_11[VAR_16];
                }
                VAR_10 += VAR_9;
                VAR_11 += VAR_2->linesize[VAR_7];
            }
        } else {
            for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
                for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
                    VAR_10[VAR_16] = VAR_12[VAR_16];
                }
                VAR_10 += VAR_9;
                VAR_12 += VAR_2->linesize[VAR_7] / 2;
            }
        }

        FUNC_7(VAR_3, VAR_7);

        VAR_10 = VAR_4->buffer;
        if (VAR_4->depth == 8) {
            for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
                for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
                    VAR_13[VAR_16] = VAR_10[VAR_16];
                }
                VAR_10 += VAR_9;
                VAR_13 += VAR_6->linesize[VAR_7];
            }
        } else {
            for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
                for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
                    VAR_14[VAR_16] = VAR_10[VAR_16];
                }
                VAR_10 += VAR_9;
                VAR_14 += VAR_6->linesize[VAR_7] / 2;
            }
        }
    }

    if (VAR_6 != VAR_2)
        FUNC_2(&VAR_2);
    return FUNC_5(VAR_5, VAR_6);
}

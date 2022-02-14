
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int nb_components; int* thr; int* planeheight; int* planewidth; int* x_pos; int* y_pos; scalar_t__ blur; } ;
typedef TYPE_2__ DebandContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int const FUNC_0 (int const) ;
 int const FUNC_1 (int,int ,int const) ;
 int const FUNC_2 (int const,int const,int const,int const) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    DebandContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in;
    AVFrame *VAR_7 = VAR_5->out;
    int VAR_8, VAR_9, VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_4->nb_components; VAR_10++) {
        const uint16_t *VAR_11 = (const uint16_t *)VAR_6->data[VAR_10];
        uint16_t *VAR_12 = (uint16_t *)VAR_7->data[VAR_10];
        const int VAR_13 = VAR_7->linesize[VAR_10] / 2;
        const int VAR_14 = VAR_6->linesize[VAR_10] / 2;
        const int VAR_15 = VAR_4->thr[VAR_10];
        const int VAR_16 = (VAR_4->planeheight[VAR_10] * VAR_2 ) / VAR_3;
        const int VAR_17 = (VAR_4->planeheight[VAR_10] * (VAR_2+1)) / VAR_3;
        const int VAR_18 = VAR_4->planewidth[VAR_10] - 1;
        const int VAR_19 = VAR_4->planeheight[VAR_10] - 1;

        for (VAR_9 = VAR_16; VAR_9 < VAR_17; VAR_9++) {
            const int VAR_20 = VAR_9 * VAR_4->planewidth[0];

            for (VAR_8 = 0; VAR_8 < VAR_4->planewidth[VAR_10]; VAR_8++) {
                const int VAR_21 = VAR_4->x_pos[VAR_20 + VAR_8];
                const int VAR_22 = VAR_4->y_pos[VAR_20 + VAR_8];
                const int VAR_23 = VAR_11[FUNC_1(VAR_9 + VAR_22, 0, VAR_19) * VAR_14 + FUNC_1(VAR_8 + VAR_21, 0, VAR_18)];
                const int VAR_24 = VAR_11[FUNC_1(VAR_9 + -VAR_22, 0, VAR_19) * VAR_14 + FUNC_1(VAR_8 + VAR_21, 0, VAR_18)];
                const int VAR_25 = VAR_11[FUNC_1(VAR_9 + -VAR_22, 0, VAR_19) * VAR_14 + FUNC_1(VAR_8 + -VAR_21, 0, VAR_18)];
                const int VAR_26 = VAR_11[FUNC_1(VAR_9 + VAR_22, 0, VAR_19) * VAR_14 + FUNC_1(VAR_8 + -VAR_21, 0, VAR_18)];
                const int VAR_27 = VAR_11[VAR_9 * VAR_14 + VAR_8];

                if (VAR_4->blur) {
                    const int VAR_28 = FUNC_2(VAR_23, VAR_24, VAR_25, VAR_26);
                    const int VAR_29 = FUNC_0(VAR_27 - VAR_28);

                    VAR_12[VAR_9 * VAR_13 + VAR_8] = VAR_29 < VAR_15 ? VAR_28 : VAR_27;
                } else {
                    VAR_12[VAR_9 * VAR_13 + VAR_8] = (FUNC_0(VAR_27 - VAR_23) < VAR_15) &&
                                                    (FUNC_0(VAR_27 - VAR_24) < VAR_15) &&
                                                    (FUNC_0(VAR_27 - VAR_25) < VAR_15) &&
                                                    (FUNC_0(VAR_27 - VAR_26) < VAR_15) ? FUNC_2(VAR_23, VAR_24, VAR_25, VAR_26) : VAR_27;
                }
            }
        }
    }

    return 0;
}

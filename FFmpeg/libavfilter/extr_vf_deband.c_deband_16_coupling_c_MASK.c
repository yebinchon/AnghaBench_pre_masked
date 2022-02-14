
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
struct TYPE_7__ {int* planeheight; int* planewidth; int* x_pos; int* y_pos; int nb_components; int* thr; scalar_t__ blur; } ;
typedef TYPE_2__ DebandContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int const FUNC_0 (int const) ;
 int const FUNC_1 (int,int ,int const) ;
 int FUNC_2 (int const,int const,int const,int const) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    DebandContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in;
    AVFrame *VAR_7 = VAR_5->out;
    const int VAR_8 = (VAR_4->planeheight[0] * VAR_2 ) / VAR_3;
    const int VAR_9 = (VAR_4->planeheight[0] * (VAR_2+1)) / VAR_3;
    int VAR_10, VAR_11, VAR_12, VAR_13;

    for (VAR_11 = VAR_8; VAR_11 < VAR_9; VAR_11++) {
        const int VAR_14 = VAR_11 * VAR_4->planewidth[0];

        for (VAR_10 = 0; VAR_10 < VAR_4->planewidth[0]; VAR_10++) {
            const int VAR_15 = VAR_4->x_pos[VAR_14 + VAR_10];
            const int VAR_16 = VAR_4->y_pos[VAR_14 + VAR_10];
            int VAR_17[4], VAR_18[4] = { 0 }, VAR_19[4];

            for (VAR_12 = 0; VAR_12 < VAR_4->nb_components; VAR_12++) {
                const uint16_t *VAR_20 = (const uint16_t *)VAR_6->data[VAR_12];
                const int VAR_21 = VAR_6->linesize[VAR_12] / 2;
                const int VAR_22 = VAR_4->thr[VAR_12];
                const int VAR_23 = VAR_4->planewidth[VAR_12] - 1;
                const int VAR_24 = VAR_4->planeheight[VAR_12] - 1;
                const int VAR_25 = VAR_20[FUNC_1(VAR_11 + VAR_16, 0, VAR_24) * VAR_21 + FUNC_1(VAR_10 + VAR_15, 0, VAR_23)];
                const int VAR_26 = VAR_20[FUNC_1(VAR_11 + -VAR_16, 0, VAR_24) * VAR_21 + FUNC_1(VAR_10 + VAR_15, 0, VAR_23)];
                const int VAR_27 = VAR_20[FUNC_1(VAR_11 + -VAR_16, 0, VAR_24) * VAR_21 + FUNC_1(VAR_10 + -VAR_15, 0, VAR_23)];
                const int VAR_28 = VAR_20[FUNC_1(VAR_11 + VAR_16, 0, VAR_24) * VAR_21 + FUNC_1(VAR_10 + -VAR_15, 0, VAR_23)];
                const int VAR_29 = VAR_20[VAR_11 * VAR_21 + VAR_10];

                VAR_19[VAR_12] = VAR_29;
                VAR_17[VAR_12] = FUNC_2(VAR_25, VAR_26, VAR_27, VAR_28);

                if (VAR_4->blur) {
                    VAR_18[VAR_12] = FUNC_0(VAR_29 - VAR_17[VAR_12]) < VAR_22;
                } else {
                    VAR_18[VAR_12] = (FUNC_0(VAR_29 - VAR_25) < VAR_22) &&
                             (FUNC_0(VAR_29 - VAR_26) < VAR_22) &&
                             (FUNC_0(VAR_29 - VAR_27) < VAR_22) &&
                             (FUNC_0(VAR_29 - VAR_28) < VAR_22);
                }
            }

            for (VAR_13 = 0; VAR_13 < VAR_4->nb_components; VAR_13++)
                if (!VAR_18[VAR_13])
                    break;
            if (VAR_13 == VAR_4->nb_components) {
                for (VAR_12 = 0; VAR_12 < VAR_4->nb_components; VAR_12++) {
                    const int VAR_30 = VAR_7->linesize[VAR_12] / 2;
                    uint16_t *VAR_31 = (uint16_t *)VAR_7->data[VAR_12] + VAR_11 * VAR_30 + VAR_10;

                    VAR_31[0] = VAR_17[VAR_12];
                }
            } else {
                for (VAR_12 = 0; VAR_12 < VAR_4->nb_components; VAR_12++) {
                    const int VAR_32 = VAR_7->linesize[VAR_12] / 2;
                    uint16_t *VAR_33 = (uint16_t *)VAR_7->data[VAR_12] + VAR_11 * VAR_32 + VAR_10;

                    VAR_33[0] = VAR_19[VAR_12];
                }
            }
        }
    }

    return 0;
}

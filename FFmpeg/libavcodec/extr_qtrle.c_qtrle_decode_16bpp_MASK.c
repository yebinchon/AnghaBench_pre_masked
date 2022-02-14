
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int8_t ;
struct TYPE_7__ {int g; TYPE_2__* avctx; TYPE_1__* frame; } ;
struct TYPE_6__ {int height; } ;
struct TYPE_5__ {int* linesize; int ** data; } ;
typedef TYPE_3__ QtrleContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(QtrleContext *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;
    int VAR_4;
    int VAR_5 = VAR_0->frame->linesize[0];
    uint16_t VAR_6;
    uint8_t *VAR_7 = VAR_0->frame->data[0];
    int VAR_8 = VAR_0->frame->linesize[0] * VAR_0->avctx->height;

    while (VAR_2--) {
        VAR_4 = VAR_1 + (FUNC_2(&VAR_0->g) - 1) * 2;
        FUNC_0(0);

        while ((VAR_3 = (int8_t)FUNC_2(&VAR_0->g)) != -1) {
            if (FUNC_3(&VAR_0->g) < 1)
                return;
            if (VAR_3 == 0) {

                VAR_4 += (FUNC_2(&VAR_0->g) - 1) * 2;
                FUNC_0(0);
            } else if (VAR_3 < 0) {

                VAR_3 = -VAR_3;
                VAR_6 = FUNC_1(&VAR_0->g);

                FUNC_0(VAR_3 * 2);

                while (VAR_3--) {
                    *(uint16_t *)(&VAR_7[VAR_4]) = VAR_6;
                    VAR_4 += 2;
                }
            } else {
                FUNC_0(VAR_3 * 2);


                while (VAR_3--) {
                    VAR_6 = FUNC_1(&VAR_0->g);
                    *(uint16_t *)(&VAR_7[VAR_4]) = VAR_6;
                    VAR_4 += 2;
                }
            }
        }
        VAR_1 += VAR_5;
    }
}

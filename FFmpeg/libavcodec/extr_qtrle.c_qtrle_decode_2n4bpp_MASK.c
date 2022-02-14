
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_7__ {int g; TYPE_2__* avctx; TYPE_1__* frame; } ;
struct TYPE_6__ {int height; } ;
struct TYPE_5__ {int* linesize; int** data; } ;
typedef TYPE_3__ QtrleContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int*,int**,int) ;

__attribute__((used)) static inline void FUNC_6(QtrleContext *VAR_0, int VAR_1,
                                       int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6;
    int VAR_7 = VAR_0->frame->linesize[0];
    uint8_t VAR_8[16];
    uint8_t *VAR_9 = VAR_0->frame->data[0];
    int VAR_10 = VAR_0->frame->linesize[0] * VAR_0->avctx->height;
    int VAR_11 = (VAR_3 == 4) ? 8 : 16;

    while (VAR_2--) {
        VAR_6 = VAR_1 + (VAR_11 * (FUNC_1(&VAR_0->g) - 1));
        FUNC_0(0);

        while ((VAR_4 = (int8_t)FUNC_1(&VAR_0->g)) != -1) {
            if (FUNC_2(&VAR_0->g) < 1)
                return;
            if (VAR_4 == 0) {

                VAR_6 += (VAR_11 * (FUNC_1(&VAR_0->g) - 1));
                FUNC_0(0);
            } else if (VAR_4 < 0) {

                VAR_4 = -VAR_4;


                for (VAR_5 = VAR_11-1; VAR_5 >= 0; VAR_5--) {
                    VAR_8[VAR_11-1-VAR_5] = (FUNC_3(&VAR_0->g) >> ((VAR_5*VAR_3) & 0x07)) & ((1<<VAR_3)-1);
                    FUNC_4(&VAR_0->g, ((VAR_5 & ((VAR_11>>2)-1)) == 0));
                }
                FUNC_0(VAR_4 * VAR_11);
                while (VAR_4--) {
                    FUNC_5(&VAR_9[VAR_6], &VAR_8, VAR_11);
                    VAR_6 += VAR_11;
                }
            } else {

                VAR_4 *= 4;
                FUNC_0(VAR_4*(VAR_11>>2));
                while (VAR_4--) {
                    if(VAR_3 == 4) {
                        int VAR_12 = FUNC_1(&VAR_0->g);
                        VAR_9[VAR_6++] = (VAR_12 >> 4) & 0x0f;
                        VAR_9[VAR_6++] = VAR_12 & 0x0f;
                    } else {
                        int VAR_13 = FUNC_1(&VAR_0->g);
                        VAR_9[VAR_6++] = (VAR_13 >> 6) & 0x03;
                        VAR_9[VAR_6++] = (VAR_13 >> 4) & 0x03;
                        VAR_9[VAR_6++] = (VAR_13 >> 2) & 0x03;
                        VAR_9[VAR_6++] = VAR_13 & 0x03;
                    }
                }
            }
        }
        VAR_1 += VAR_7;
    }
}

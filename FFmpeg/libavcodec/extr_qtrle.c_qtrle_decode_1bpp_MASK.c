
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

__attribute__((used)) static void FUNC_2(QtrleContext *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;
    int VAR_4;
    int VAR_5 = VAR_0->frame->linesize[0];
    uint8_t VAR_6, VAR_7;
    uint8_t *VAR_8 = VAR_0->frame->data[0];
    int VAR_9 = VAR_0->frame->linesize[0] * VAR_0->avctx->height;
    int VAR_10;
    VAR_1 -= VAR_5;
    VAR_4 = VAR_1;
    VAR_2++;
    while (VAR_2) {
        VAR_10 = FUNC_1(&VAR_0->g);
        VAR_3 = (int8_t)FUNC_1(&VAR_0->g);
        if (VAR_3 == 0)
            break;
        if(VAR_10 & 0x80) {
            VAR_2--;
            VAR_1 += VAR_5;
            VAR_4 = VAR_1 + 2 * 8 * (VAR_10 & 0x7f);
        } else
            VAR_4 += 2 * 8 * VAR_10;
        FUNC_0(0);

        if(VAR_3 == -1)
            continue;

        if (VAR_3 < 0) {

            VAR_3 = -VAR_3;



            VAR_6 = FUNC_1(&VAR_0->g);
            VAR_7 = FUNC_1(&VAR_0->g);
            FUNC_0(VAR_3 * 2 * 8);

            while (VAR_3--) {
                VAR_8[VAR_4++] = (VAR_6 >> 7) & 0x01;
                VAR_8[VAR_4++] = (VAR_6 >> 6) & 0x01;
                VAR_8[VAR_4++] = (VAR_6 >> 5) & 0x01;
                VAR_8[VAR_4++] = (VAR_6 >> 4) & 0x01;
                VAR_8[VAR_4++] = (VAR_6 >> 3) & 0x01;
                VAR_8[VAR_4++] = (VAR_6 >> 2) & 0x01;
                VAR_8[VAR_4++] = (VAR_6 >> 1) & 0x01;
                VAR_8[VAR_4++] = VAR_6 & 0x01;
                VAR_8[VAR_4++] = (VAR_7 >> 7) & 0x01;
                VAR_8[VAR_4++] = (VAR_7 >> 6) & 0x01;
                VAR_8[VAR_4++] = (VAR_7 >> 5) & 0x01;
                VAR_8[VAR_4++] = (VAR_7 >> 4) & 0x01;
                VAR_8[VAR_4++] = (VAR_7 >> 3) & 0x01;
                VAR_8[VAR_4++] = (VAR_7 >> 2) & 0x01;
                VAR_8[VAR_4++] = (VAR_7 >> 1) & 0x01;
                VAR_8[VAR_4++] = VAR_7 & 0x01;
            }
        } else {

            VAR_3 *= 2;
            FUNC_0(VAR_3 * 8);

            while (VAR_3--) {
                int VAR_11 = FUNC_1(&VAR_0->g);
                VAR_8[VAR_4++] = (VAR_11 >> 7) & 0x01;
                VAR_8[VAR_4++] = (VAR_11 >> 6) & 0x01;
                VAR_8[VAR_4++] = (VAR_11 >> 5) & 0x01;
                VAR_8[VAR_4++] = (VAR_11 >> 4) & 0x01;
                VAR_8[VAR_4++] = (VAR_11 >> 3) & 0x01;
                VAR_8[VAR_4++] = (VAR_11 >> 2) & 0x01;
                VAR_8[VAR_4++] = (VAR_11 >> 1) & 0x01;
                VAR_8[VAR_4++] = VAR_11 & 0x01;
            }
        }
    }
}

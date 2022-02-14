
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef float uint16_t ;
struct TYPE_3__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(AVFrame *VAR_1, int VAR_2, int VAR_3, float VAR_4, float VAR_5, const char *VAR_6, const uint16_t VAR_7[4])
{
    const uint8_t *VAR_8;
    int VAR_9;
    int VAR_10, VAR_11;

    VAR_8 = VAR_0, VAR_9 = 8;

    for (VAR_11 = 0; VAR_11 < 4 && VAR_1->data[VAR_11]; VAR_11++) {
        for (VAR_10 = 0; VAR_6[VAR_10]; VAR_10++) {
            int VAR_12, VAR_13;
            int VAR_14 = VAR_7[VAR_11];

            uint16_t *VAR_15 = (uint16_t *)(VAR_1->data[VAR_11] + VAR_3 * VAR_1->linesize[VAR_11]) + (VAR_2 + VAR_10 * 8);
            for (VAR_12 = VAR_9 - 1; VAR_12 >= 0; VAR_12--) {
                for (VAR_13 = 0x80; VAR_13; VAR_13 >>= 1) {
                    if (VAR_8[VAR_6[VAR_10] * VAR_9 + VAR_12] & VAR_13)
                        VAR_15[0] = VAR_15[0] * VAR_5 + VAR_14 * VAR_4;
                    VAR_15++;
                }
                VAR_15 += VAR_1->linesize[VAR_11] / 2 - 8;
            }
        }
    }
}

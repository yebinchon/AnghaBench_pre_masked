
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int** data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(AVFrame *VAR_1, int VAR_2, int VAR_3, int VAR_4, float VAR_5, float VAR_6, const char *VAR_7, const uint8_t VAR_8[4])
{
    const uint8_t *VAR_9;
    int VAR_10;
    int VAR_11, VAR_12;

    VAR_9 = VAR_0, VAR_10 = 8;

    for (VAR_12 = 0; VAR_12 < 4 && VAR_1->data[VAR_12]; VAR_12++) {
        for (VAR_11 = 0; VAR_7[VAR_11]; VAR_11++) {
            int VAR_13, VAR_14;
            int VAR_15 = VAR_8[VAR_12];

            uint8_t *VAR_16 = VAR_1->data[VAR_12] + VAR_3 * VAR_1->linesize[VAR_12] + (VAR_2 + VAR_11 * 8);
            for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
                for (VAR_14 = 0x80; VAR_14; VAR_14 >>= 1) {
                    if (VAR_9[VAR_7[VAR_11] * VAR_10 + VAR_13] & VAR_14)
                        VAR_16[0] = VAR_16[0] * VAR_6 + VAR_15 * VAR_5;
                    VAR_16++;
                }
                VAR_16 += VAR_1->linesize[VAR_12] - 8;
            }
        }
    }
}

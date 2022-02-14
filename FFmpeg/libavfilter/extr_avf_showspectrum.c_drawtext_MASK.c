
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int** data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(AVFrame *VAR_1, int VAR_2, int VAR_3, const char *VAR_4, int VAR_5)
{
    const uint8_t *VAR_6;
    int VAR_7;
    int VAR_8;

    VAR_6 = VAR_0, VAR_7 = 8;

    for (VAR_8 = 0; VAR_4[VAR_8]; VAR_8++) {
        int VAR_9, VAR_10;

        if (VAR_5) {
            for (VAR_9 = VAR_7 - 1; VAR_9 >= 0; VAR_9--) {
                uint8_t *VAR_11 = VAR_1->data[0] + (VAR_3 + VAR_8 * 10) * VAR_1->linesize[0] + VAR_2;
                for (VAR_10 = 0x80; VAR_10; VAR_10 >>= 1) {
                    if (VAR_6[VAR_4[VAR_8] * VAR_7 + VAR_7 - 1 - VAR_9] & VAR_10)
                        VAR_11[VAR_9] = ~VAR_11[VAR_9];
                    VAR_11 += VAR_1->linesize[0];
                }
            }
        } else {
            uint8_t *VAR_12 = VAR_1->data[0] + VAR_3*VAR_1->linesize[0] + (VAR_2 + VAR_8*8);
            for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
                for (VAR_10 = 0x80; VAR_10; VAR_10 >>= 1) {
                    if (VAR_6[VAR_4[VAR_8] * VAR_7 + VAR_9] & VAR_10)
                        *VAR_12 = ~(*VAR_12);
                    VAR_12++;
                }
                VAR_12 += VAR_1->linesize[0] - 8;
            }
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int** data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;


 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(AVFrame *VAR_1)
{
    const char *VAR_2 = "EF G A BC D ";
    int VAR_3, VAR_4, VAR_5, VAR_6;
    uint8_t *VAR_7 = VAR_1->data[0];
    int VAR_8 = VAR_1->linesize[0];
    int VAR_9 = 1920/2, VAR_10 = 16;

    for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3 += VAR_9/10) {
        uint8_t *VAR_11 = VAR_7 + 4 * VAR_3;
        for (VAR_4 = 0; VAR_4 < 12; VAR_4++) {
            for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++) {
                uint8_t *VAR_12 = VAR_11 + VAR_5 * VAR_8 + VAR_10/2 * 4 * VAR_4;
                for (VAR_6 = 0x80; VAR_6; VAR_6 >>= 1, VAR_12 += 4) {
                    if (VAR_6 & VAR_0[VAR_2[VAR_4] * 16 + VAR_5])
                        VAR_12[3] = 255;
                    else
                        VAR_12[3] = 0;
                }
            }
        }
    }

    return 0;
}

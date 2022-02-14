
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int height; int width; int** data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;


 int* VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1(AVFrame *VAR_1, int VAR_2, int VAR_3, const char *VAR_4, uint8_t *VAR_5)
{
    const uint8_t *VAR_6;
    int VAR_7;
    int VAR_8;

    VAR_6 = VAR_0, VAR_7 = 8;

    if (VAR_3 + 8 >= VAR_1->height ||
        VAR_2 + FUNC_0(VAR_4) * 8 >= VAR_1->width)
        return;

    for (VAR_8 = 0; VAR_4[VAR_8]; VAR_8++) {
        int VAR_9, VAR_10;

        uint8_t *VAR_11 = VAR_1->data[0] + VAR_3*VAR_1->linesize[0] + (VAR_2 + VAR_8*8)*4;
        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
            for (VAR_10 = 0x80; VAR_10; VAR_10 >>= 1) {
                if (VAR_6[VAR_4[VAR_8] * VAR_7 + VAR_9] & VAR_10) {
                    VAR_11[0] = VAR_5[0];
                    VAR_11[1] = VAR_5[1];
                    VAR_11[2] = VAR_5[2];
                }
                VAR_11 += 4;
            }
            VAR_11 += VAR_1->linesize[0] - 8 * 4;
        }
    }
}

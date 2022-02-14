
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int width; int height; int* linesize; int** data; } ;
typedef TYPE_1__ AVFrame ;



__attribute__((used)) static void FUNC_0(AVFrame *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
        int VAR_5 = VAR_2 > 0;
        int VAR_6 = VAR_0->width >> VAR_5;
        int VAR_7 = VAR_0->height >> VAR_5;
        int VAR_8 = VAR_2 == 0 ? VAR_1 : VAR_1 >> 1;
        int VAR_9 = VAR_0->linesize[VAR_2];
        uint8_t *VAR_10 = VAR_0->data[VAR_2];

        int VAR_11 = VAR_8 - (VAR_6 & (VAR_8 - 1));
        int VAR_12 = VAR_8 - (VAR_7 & (VAR_8 - 1));

        if ((VAR_11 == VAR_8) && (VAR_12 == VAR_8)) {
            return;
        }
        if (VAR_11 != VAR_8) {
            int VAR_13 = VAR_6;
            for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
                for (VAR_3 = 0; VAR_3 < VAR_11; VAR_3++) {
                    VAR_10[VAR_13 + VAR_3] = 0x80;
                }
                VAR_13 += VAR_9;
            }
        }
        if (VAR_12 != VAR_8) {
            int VAR_14 = VAR_7 * VAR_9;
            for (VAR_4 = 0; VAR_4 < VAR_12; VAR_4++) {
                for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3++) {
                    VAR_10[VAR_14 + VAR_3] = 0x80;
                }
                VAR_14 += VAR_9;
            }
        }
    }
}

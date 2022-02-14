
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int format; int width; int height; int* linesize; int ** data; } ;
typedef int ColorFloat ;
typedef TYPE_1__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int const) ;

__attribute__((used)) static void FUNC_4(AVFrame *VAR_3, AVFrame *VAR_4, const ColorFloat *VAR_5, int VAR_6)
{
    int VAR_7 = VAR_3->format, VAR_8, VAR_9, VAR_10, VAR_11 = VAR_4->width, VAR_12 = VAR_4->height;
    int VAR_13 = (VAR_7 == VAR_0) ? VAR_6 / 2 : VAR_6;
    uint8_t *VAR_14 = VAR_3->data[0], *VAR_15 = VAR_3->data[1], *VAR_16 = VAR_3->data[2];
    uint8_t *VAR_17 = VAR_4->data[0], *VAR_18 = VAR_4->data[1], *VAR_19 = VAR_4->data[2], *VAR_20 = VAR_4->data[3];
    int VAR_21 = VAR_3->linesize[0], VAR_22 = VAR_3->linesize[1], VAR_23 = VAR_3->linesize[2];
    int VAR_24 = VAR_4->linesize[0], VAR_25 = VAR_4->linesize[1], VAR_26 = VAR_4->linesize[2], VAR_27 = VAR_4->linesize[3];
    uint8_t *VAR_28, *VAR_29, *VAR_30, *VAR_31, *VAR_32, *VAR_33, *VAR_34;

    for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9 += 2) {
        VAR_10 = (VAR_7 == VAR_0) ? VAR_9 / 2 : VAR_9;
        VAR_28 = VAR_14 + (VAR_6 + VAR_9) * VAR_21;
        VAR_29 = VAR_15 + (VAR_13 + VAR_10) * VAR_22;
        VAR_30 = VAR_16 + (VAR_13 + VAR_10) * VAR_23;
        VAR_31 = VAR_17 + VAR_9 * VAR_24;
        VAR_32 = VAR_18 + VAR_9 * VAR_25;
        VAR_33 = VAR_19 + VAR_9 * VAR_26;
        VAR_34 = VAR_20 + VAR_9 * VAR_27;
        if (VAR_7 == VAR_2) {
            for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8 += 2) {
                FUNC_3(VAR_5[VAR_8]);
                FUNC_3(VAR_5[VAR_8+1]);
            }
        } else if (VAR_7 == VAR_1) {
            for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8 += 2) {
                FUNC_2(VAR_5[VAR_8], 0);
                FUNC_0(VAR_5[VAR_8]);
                FUNC_2(VAR_5[VAR_8+1], 1);
            }
        } else {
            for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8 += 2) {
                FUNC_2(VAR_5[VAR_8], 0);
                FUNC_1(VAR_5[VAR_8]);
                FUNC_2(VAR_5[VAR_8+1], 1);
            }
        }

        VAR_28 = VAR_14 + (VAR_6 + VAR_9 + 1) * VAR_21;
        VAR_29 = VAR_15 + (VAR_6 + VAR_9 + 1) * VAR_22;
        VAR_30 = VAR_16 + (VAR_6 + VAR_9 + 1) * VAR_23;
        VAR_31 = VAR_17 + (VAR_9 + 1) * VAR_24;
        VAR_32 = VAR_18 + (VAR_9 + 1) * VAR_25;
        VAR_33 = VAR_19 + (VAR_9 + 1) * VAR_26;
        VAR_34 = VAR_20 + (VAR_9 + 1) * VAR_27;
        if (VAR_7 == VAR_2) {
            for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8 += 2) {
                FUNC_3(VAR_5[VAR_8]);
                FUNC_3(VAR_5[VAR_8+1]);
            }
        } else if (VAR_7 == VAR_1) {
            for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8 += 2) {
                FUNC_2(VAR_5[VAR_8], 0);
                FUNC_0(VAR_5[VAR_8]);
                FUNC_2(VAR_5[VAR_8+1], 1);
            }
        } else {
            for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8 += 2) {
                FUNC_2(VAR_5[VAR_8], 1);
                FUNC_2(VAR_5[VAR_8+1], 1);
            }
        }
    }
}

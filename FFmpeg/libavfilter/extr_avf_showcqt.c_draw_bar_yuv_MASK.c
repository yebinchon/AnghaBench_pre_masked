
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int width; int* linesize; int format; int ** data; } ;
typedef int ColorFloat ;
typedef TYPE_1__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(AVFrame *VAR_3, const float *VAR_4, const float *VAR_5,
                         const ColorFloat *VAR_6, int VAR_7, float VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12 = VAR_3->width;
    float VAR_13, VAR_14, VAR_15 = 1.0f / VAR_7, VAR_16 = 1.0f / VAR_8;
    uint8_t *VAR_17 = VAR_3->data[0], *VAR_18 = VAR_3->data[1], *VAR_19 = VAR_3->data[2];
    uint8_t *VAR_20, *VAR_21, *VAR_22;
    int VAR_23 = VAR_3->linesize[0], VAR_24 = VAR_3->linesize[1], VAR_25 = VAR_3->linesize[2];
    int VAR_26 = VAR_3->format;

    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10 += 2) {
        VAR_11 = (VAR_26 == VAR_0) ? VAR_10 / 2 : VAR_10;
        VAR_14 = (VAR_7 - VAR_10) * VAR_15;
        VAR_20 = VAR_17 + VAR_10 * VAR_23;
        VAR_21 = VAR_18 + VAR_11 * VAR_24;
        VAR_22 = VAR_19 + VAR_11 * VAR_25;
        if (VAR_26 == VAR_2) {
            for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9 += 2) {
                FUNC_1(VAR_9);
                FUNC_1(VAR_9+1);
            }
        } else {
            for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9 += 2) {
                FUNC_1(VAR_9);
                FUNC_0(VAR_9+1);
            }
        }

        VAR_14 = (VAR_7 - (VAR_10+1)) * VAR_15;
        VAR_20 = VAR_17 + (VAR_10+1) * VAR_23;
        VAR_21 = VAR_18 + (VAR_10+1) * VAR_24;
        VAR_22 = VAR_19 + (VAR_10+1) * VAR_25;
        if (VAR_26 == VAR_2) {
            for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9 += 2) {
                FUNC_1(VAR_9);
                FUNC_1(VAR_9+1);
            }
        } else if (VAR_26 == VAR_1) {
            for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9 += 2) {
                FUNC_1(VAR_9);
                FUNC_0(VAR_9+1);
            }
        } else {
            for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9 += 2) {
                FUNC_0(VAR_9);
                FUNC_0(VAR_9+1);
            }
        }
    }
}

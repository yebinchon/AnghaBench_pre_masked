
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int width; int* linesize; int ** data; } ;
struct TYPE_6__ {float r; float g; float b; } ;
struct TYPE_7__ {TYPE_1__ rgb; } ;
typedef TYPE_2__ ColorFloat ;
typedef TYPE_3__ AVFrame ;


 void* FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(AVFrame *VAR_0, const float *VAR_1, const float *VAR_2,
                         const ColorFloat *VAR_3, int VAR_4, float VAR_5)
{
    int VAR_6, VAR_7, VAR_8 = VAR_0->width;
    float VAR_9, VAR_10, VAR_11 = 1.0f / VAR_4, VAR_12 = 1.0f / VAR_5;
    uint8_t *VAR_13 = VAR_0->data[0], *VAR_14;
    int VAR_15 = VAR_0->linesize[0];

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        VAR_10 = (VAR_4 - VAR_7) * VAR_11;
        VAR_14 = VAR_13 + VAR_7 * VAR_15;
        for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
            if (VAR_1[VAR_6] <= VAR_10) {
                *VAR_14++ = 0;
                *VAR_14++ = 0;
                *VAR_14++ = 0;
            } else {
                VAR_9 = (VAR_1[VAR_6] - VAR_10) * VAR_2[VAR_6];
                VAR_9 = (VAR_9 < VAR_5) ? (VAR_9 * VAR_12) : 1.0f;
                *VAR_14++ = FUNC_0(VAR_9 * VAR_3[VAR_6].rgb.r);
                *VAR_14++ = FUNC_0(VAR_9 * VAR_3[VAR_6].rgb.g);
                *VAR_14++ = FUNC_0(VAR_9 * VAR_3[VAR_6].rgb.b);
            }
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int width; int height; int** data; int* linesize; } ;
struct TYPE_7__ {float r; float g; float b; } ;
struct TYPE_8__ {TYPE_1__ rgb; } ;
typedef TYPE_2__ ColorFloat ;
typedef TYPE_3__ AVFrame ;


 void* FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(AVFrame *VAR_0, AVFrame *VAR_1, const ColorFloat *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6 = VAR_1->width, VAR_7 = VAR_1->height;
    float VAR_8, VAR_9 = 1.0f / 255.0f;
    uint8_t *VAR_10, *VAR_11;

    for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
        VAR_10 = VAR_0->data[0] + (VAR_3 + VAR_5) * VAR_0->linesize[0];
        VAR_11 = VAR_1->data[0] + VAR_5 * VAR_1->linesize[0];
        for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
            if (!VAR_11[3]) {
                *VAR_10++ = FUNC_0(VAR_2[VAR_4].rgb.r);
                *VAR_10++ = FUNC_0(VAR_2[VAR_4].rgb.g);
                *VAR_10++ = FUNC_0(VAR_2[VAR_4].rgb.b);
            } else if (VAR_11[3] == 255) {
                *VAR_10++ = VAR_11[0];
                *VAR_10++ = VAR_11[1];
                *VAR_10++ = VAR_11[2];
            } else {
                VAR_8 = VAR_9 * VAR_11[3];
                *VAR_10++ = FUNC_0(VAR_8 * VAR_11[0] + (1.0f - VAR_8) * VAR_2[VAR_4].rgb.r);
                *VAR_10++ = FUNC_0(VAR_8 * VAR_11[1] + (1.0f - VAR_8) * VAR_2[VAR_4].rgb.g);
                *VAR_10++ = FUNC_0(VAR_8 * VAR_11[2] + (1.0f - VAR_8) * VAR_2[VAR_4].rgb.b);
            }
            VAR_11 += 4;
        }
    }
}

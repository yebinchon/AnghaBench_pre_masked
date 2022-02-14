
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_4__ {int height; int width; int** data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;


 float FUNC_0 (float) ;
 int FUNC_1 (int) ;

__attribute__((used)) static float FUNC_2(const AVFrame *VAR_0, const AVFrame *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4,VAR_5;
    int VAR_6 = 0;
    int VAR_7 = 0;
    int64_t VAR_8 = 0;
    int64_t VAR_9 = 0;
    int64_t VAR_10 = 0;
    float VAR_11;
    int VAR_12 = VAR_1->height * VAR_1->width;
    const uint8_t *VAR_13 = VAR_1 ->data[0];
    const uint8_t *VAR_14 = VAR_0->data[0] + VAR_2 + VAR_3 * VAR_0->linesize[0];
    int64_t VAR_15, VAR_16;

    for(VAR_5 = 0; VAR_5 < VAR_1->height; VAR_5++) {
        for(VAR_4 = 0; VAR_4 < VAR_1->width; VAR_4++) {
            int VAR_17 = VAR_13[VAR_4];
            int VAR_18 = VAR_14[VAR_4];
            VAR_6 += VAR_17;
            VAR_7 += VAR_18;
            VAR_8 += VAR_17 * VAR_17;
            VAR_9 += VAR_18 * VAR_18;
            VAR_10 += VAR_17 * VAR_18;
        }
        VAR_13 += VAR_1->linesize[0];
        VAR_14 += VAR_0->linesize[0];
    }
    VAR_15 = VAR_12*VAR_8 - VAR_6*(int64_t)VAR_6;
    VAR_16 = VAR_12*VAR_9 - VAR_7*(int64_t)VAR_7;

    if (VAR_15 == 0 || VAR_16 == 0)
        return 1.0;

    VAR_11 = (VAR_12*VAR_10 - VAR_6*(int64_t)VAR_7) / (FUNC_1(VAR_15)*FUNC_1(VAR_16));

    return 1 - FUNC_0(VAR_11);
}

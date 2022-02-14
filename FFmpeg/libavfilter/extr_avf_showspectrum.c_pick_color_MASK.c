
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float a; float y; float u; float v; } ;
struct TYPE_5__ {int color_mode; } ;
typedef TYPE_1__ ShowSpectrumContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__** VAR_1 ;

__attribute__((used)) static void FUNC_1(ShowSpectrumContext *VAR_2,
                       float VAR_3, float VAR_4, float VAR_5,
                       float VAR_6, float *VAR_7)
{
    if (VAR_2->color_mode > VAR_0) {
        const int VAR_8 = VAR_2->color_mode;
        float VAR_9, VAR_10, VAR_11;
        int VAR_12;

        for (VAR_12 = 1; VAR_12 < FUNC_0(VAR_1[VAR_8]) - 1; VAR_12++)
            if (VAR_1[VAR_8][VAR_12].a >= VAR_6)
                break;


        if (VAR_6 <= VAR_1[VAR_8][VAR_12 - 1].a) {
            VAR_9 = VAR_1[VAR_8][VAR_12 - 1].y;
            VAR_10 = VAR_1[VAR_8][VAR_12 - 1].u;
            VAR_11 = VAR_1[VAR_8][VAR_12 - 1].v;
        } else if (VAR_6 >= VAR_1[VAR_8][VAR_12].a) {
            VAR_9 = VAR_1[VAR_8][VAR_12].y;
            VAR_10 = VAR_1[VAR_8][VAR_12].u;
            VAR_11 = VAR_1[VAR_8][VAR_12].v;
        } else {
            float VAR_13 = VAR_1[VAR_8][VAR_12 - 1].a;
            float VAR_14 = VAR_1[VAR_8][VAR_12].a;
            float VAR_15 = (VAR_6 - VAR_13) / (VAR_14 - VAR_13);
            VAR_9 = VAR_1[VAR_8][VAR_12 - 1].y * (1.0f - VAR_15)
              + VAR_1[VAR_8][VAR_12].y * VAR_15;
            VAR_10 = VAR_1[VAR_8][VAR_12 - 1].u * (1.0f - VAR_15)
              + VAR_1[VAR_8][VAR_12].u * VAR_15;
            VAR_11 = VAR_1[VAR_8][VAR_12 - 1].v * (1.0f - VAR_15)
              + VAR_1[VAR_8][VAR_12].v * VAR_15;
        }

        VAR_7[0] = VAR_9 * VAR_3;
        VAR_7[1] = VAR_10 * VAR_4;
        VAR_7[2] = VAR_11 * VAR_5;
    } else {
        VAR_7[0] = VAR_6 * VAR_3;
        VAR_7[1] = VAR_6 * VAR_4;
        VAR_7[2] = VAR_6 * VAR_5;
    }
}

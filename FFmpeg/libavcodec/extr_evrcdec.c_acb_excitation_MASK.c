
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVRCContext ;


 int FUNC_0 (int *,float*,float) ;

__attribute__((used)) static void FUNC_1(EVRCContext *VAR_0, float *VAR_1, float VAR_2,
                           const float VAR_3[3], int VAR_4)
{
    float VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9;

    VAR_8 = 1.0 / ((float) VAR_4);
    VAR_7 = VAR_4;


    VAR_5 = (VAR_3[1] - VAR_3[0]) * VAR_8;
    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
        VAR_6 = VAR_3[0] + VAR_9 * VAR_5;
        FUNC_0(VAR_0, VAR_1 + VAR_9, VAR_6);
    }

    VAR_5 = (VAR_3[2] - VAR_3[1]) * VAR_8;

    for (VAR_9 = VAR_7; VAR_9 < VAR_7 + 10; VAR_9++) {
        VAR_6 = VAR_3[1] + (VAR_9 - VAR_7) * VAR_5;
        FUNC_0(VAR_0, VAR_1 + VAR_9, VAR_6);
    }

    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
        VAR_1[VAR_9] *= VAR_2;
}

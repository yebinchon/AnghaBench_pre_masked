
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (int,float) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, float VAR_1, float VAR_2)
{
    float VAR_3 = 0;
    int VAR_4 = VAR_1 / 2;

    for (int VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
        float VAR_6 = FUNC_0(VAR_5 - VAR_4, VAR_2);

        VAR_3 += VAR_6;
        VAR_0[VAR_5] = VAR_6;
    }


    for (int VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
        VAR_0[VAR_7] /= VAR_3;
    }
}

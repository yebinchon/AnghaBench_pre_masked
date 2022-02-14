
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (double*,float*,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_1, const float *VAR_2, float *VAR_3,
                           int VAR_4)
{
    double VAR_5[VAR_0];
    int VAR_6,VAR_7;
    float VAR_8, VAR_9 = 1.0 / VAR_4;

    VAR_8 = VAR_9 * 0.5;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
            VAR_5[VAR_7] = VAR_2[VAR_7] * (1 - VAR_8) + VAR_8 * VAR_1[VAR_7];

        FUNC_0(VAR_5, VAR_3, VAR_0);
        VAR_3 += VAR_0;
        VAR_8 += VAR_9;
    }
}

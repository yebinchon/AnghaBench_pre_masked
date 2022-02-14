
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*,float const*,float*,float const*,float const*,float*,float*,float*) ;

__attribute__((used)) static void FUNC_1(float *VAR_2, const float *VAR_3,
                           const int8_t VAR_4[][VAR_0], const float *VAR_5,
                           const float *VAR_6, float *VAR_7, int *VAR_8,
                           float *VAR_9)
{
    int VAR_10, VAR_11;
    float VAR_12, VAR_13, VAR_14;
    float VAR_15[VAR_0];

    *VAR_8 = *VAR_9 = VAR_14 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
        for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
            VAR_15[VAR_11] = VAR_4[VAR_10][VAR_11];
        FUNC_0(VAR_2, VAR_3, VAR_15, VAR_5, VAR_6, VAR_7, &VAR_13, &VAR_12);
        if (VAR_13 > VAR_14) {
            VAR_14 = VAR_13;
            *VAR_8 = VAR_10;
            *VAR_9 = VAR_12;
        }
    }
}

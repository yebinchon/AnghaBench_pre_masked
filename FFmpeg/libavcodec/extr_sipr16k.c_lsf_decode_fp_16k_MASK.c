
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (float*,int const*,int ) ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (float*,float*,int) ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_2(float* VAR_4, float* VAR_5,
                              const int* VAR_6, int VAR_7)
{
    int VAR_8;
    float VAR_9[VAR_0];

    FUNC_0(VAR_9, VAR_6, VAR_1);

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        VAR_5[VAR_8] = (1 - VAR_3[VAR_7]) * VAR_9[VAR_8]
                    + VAR_3[VAR_7] * VAR_4[VAR_8]
                    + VAR_2[VAR_8];
    }

    FUNC_1(VAR_4, VAR_9, VAR_0 * sizeof(float));
}

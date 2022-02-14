
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int* VAR_0 ;
 int FUNC_0 (float*,float*,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_1, float *VAR_2, int VAR_3,
                                     int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8 = VAR_3*VAR_4;
    const uint8_t *VAR_9 = &VAR_0[VAR_5 ? VAR_4 - 2 : 30];

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
            VAR_1[VAR_7*VAR_4+VAR_6] = VAR_2[VAR_9[VAR_6]*VAR_3+VAR_7];

    FUNC_0(VAR_2, VAR_1, VAR_8*sizeof(float));
}

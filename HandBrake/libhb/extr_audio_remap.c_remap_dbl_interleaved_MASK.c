
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (double*,double*,int) ;

__attribute__((used)) static void FUNC_1(uint8_t **VAR_1, int VAR_2,
                                  int VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6;
    double *VAR_7 = (double*)(*VAR_1);
    double VAR_8[VAR_0];
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
        FUNC_0(VAR_8, VAR_7, VAR_3 * sizeof(double));
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        {
            VAR_7[VAR_6] = VAR_8[VAR_4[VAR_6]];
        }
        VAR_7 += VAR_3;
    }
}

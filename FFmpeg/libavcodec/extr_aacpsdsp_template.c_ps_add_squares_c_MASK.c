
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINTFLOAT ;
typedef int INTFLOAT ;


 scalar_t__ FUNC_0 (int const,int const,int const,int const) ;

__attribute__((used)) static void FUNC_1(INTFLOAT *VAR_0, const INTFLOAT (*VAR_1)[2], int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        VAR_0[VAR_3] += (UINTFLOAT)FUNC_0(VAR_1[VAR_3][0], VAR_1[VAR_3][0], VAR_1[VAR_3][1], VAR_1[VAR_3][1]);
}

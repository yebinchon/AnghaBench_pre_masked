
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_2, const int16_t *VAR_3, int VAR_4)
{
    int VAR_5;

    VAR_3 += VAR_1 - VAR_4;
    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0, VAR_4); VAR_5++)
        VAR_2[VAR_5] = VAR_3[VAR_5];
    if (VAR_4 < VAR_0)
        for (VAR_5 = 0; VAR_5 < VAR_0 - VAR_4; VAR_5++)
            VAR_2[VAR_4 + VAR_5] = VAR_3[VAR_5];
}

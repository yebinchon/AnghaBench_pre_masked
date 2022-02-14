
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDWTELEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(IDWTELEM *VAR_3, IDWTELEM *VAR_4, IDWTELEM *VAR_5,
                                  int VAR_6)
{
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
        VAR_4[VAR_7] += (VAR_0 * (VAR_3[VAR_7] + VAR_5[VAR_7]) + VAR_1) >> VAR_2;
}

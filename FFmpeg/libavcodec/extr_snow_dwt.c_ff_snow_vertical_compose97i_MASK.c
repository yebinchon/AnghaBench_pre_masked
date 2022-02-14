
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDWTELEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_0(IDWTELEM *VAR_12, IDWTELEM *VAR_13, IDWTELEM *VAR_14,
                                 IDWTELEM *VAR_15, IDWTELEM *VAR_16, IDWTELEM *VAR_17,
                                 int VAR_18)
{
    int VAR_19;

    for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
        VAR_16[VAR_19] -= (VAR_9 * (VAR_15[VAR_19] + VAR_17[VAR_19]) + VAR_10) >> VAR_11;
        VAR_15[VAR_19] -= (VAR_6 * (VAR_14[VAR_19] + VAR_16[VAR_19]) + VAR_7) >> VAR_8;
        VAR_14[VAR_19] += (VAR_3 * (VAR_13[VAR_19] + VAR_15[VAR_19]) + 4 * VAR_14[VAR_19] + VAR_4) >> VAR_5;
        VAR_13[VAR_19] += (VAR_0 * (VAR_12[VAR_19] + VAR_14[VAR_19]) + VAR_1) >> VAR_2;
    }
}

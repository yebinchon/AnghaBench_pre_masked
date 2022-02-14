
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int const*,int) ;

void FUNC_1(int16_t* VAR_1, int16_t* VAR_2, const int16_t* VAR_3, const int16_t* VAR_4, int VAR_5)
{
    int16_t VAR_6[VAR_0];
    int VAR_7;


    for(VAR_7=0; VAR_7<VAR_5; VAR_7++)



        VAR_6[VAR_7] = (VAR_3[VAR_7] + VAR_4[VAR_7]) >> 1;


    FUNC_0(VAR_1, VAR_6, VAR_5 >> 1);


    FUNC_0(VAR_2, VAR_3, VAR_5 >> 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (double) ;

int FUNC_2(uint32_t VAR_0, uint32_t VAR_1,
      uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    uint32_t VAR_5, VAR_6, VAR_7;
    uint32_t VAR_8, VAR_9, VAR_10;






   VAR_7 = FUNC_0((int)(((VAR_0 & VAR_4 )>>16) - ((VAR_1 & VAR_4 )>> 16)));
   VAR_6 = FUNC_0((int)(((VAR_0 & VAR_3)>>8 ) - ((VAR_1 & VAR_3 )>> 8)));
   VAR_5 = FUNC_0((int)(((VAR_0 & VAR_2 ) - (VAR_1 & VAR_2 ))));


    VAR_8 = FUNC_1(0.299*VAR_5 + 0.587*VAR_6 + 0.114*VAR_7);
    VAR_9 = FUNC_1(-0.169*VAR_5 - 0.331*VAR_6 + 0.500*VAR_7);
    VAR_10 = FUNC_1(0.500*VAR_5 - 0.419*VAR_6 - 0.081*VAR_7);

    return ((48 >= VAR_8) && (7 >= VAR_9) && (6 >= VAR_10)) ? 1 : 0;
}

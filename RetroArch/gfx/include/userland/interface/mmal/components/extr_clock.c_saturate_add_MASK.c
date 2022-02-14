
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TIME_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline TIME_T FUNC_0(TIME_T VAR_2, TIME_T VAR_3)
{
   TIME_T VAR_4 = VAR_2 + VAR_3;
   if (VAR_2 > 0 && VAR_3 > 0 && VAR_4 < 0)
      VAR_4 = VAR_0;
   else if (VAR_2 < 0 && VAR_3 < 0 && VAR_4 > 0)
      VAR_4 = VAR_1;
   return VAR_4;
}

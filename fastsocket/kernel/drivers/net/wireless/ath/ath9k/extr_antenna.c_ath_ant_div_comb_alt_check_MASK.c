
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(u8 VAR_3, int VAR_4,
           int VAR_5, int VAR_6,
           int VAR_7, int VAR_8)
{
 bool VAR_9 = 0;
 switch (VAR_3) {
 case 0:
  if (VAR_4 > VAR_0)
   VAR_9 = 1;
  break;
 case 1:
 case 2:
  if ((((VAR_5 == VAR_2) &&
        (VAR_6 == VAR_1) &&
        (VAR_7 >= (VAR_8 - 5))) ||
       ((VAR_5 == VAR_1) &&
        (VAR_6 == VAR_2) &&
        (VAR_7 >= (VAR_8 - 2)))) &&
      (VAR_7 >= 4))
   VAR_9 = 1;
  else
   VAR_9 = 0;
  break;
 }

 return VAR_9;
}

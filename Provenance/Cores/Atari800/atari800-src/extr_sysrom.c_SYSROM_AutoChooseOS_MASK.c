
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;

int FUNC_1(int VAR_11, int VAR_12, int VAR_13)
{
 int const *VAR_14;

 switch (VAR_11) {
 case 129:
  if (VAR_13 == VAR_0)
   VAR_14 = VAR_6;
  else
   VAR_14 = VAR_7;
  break;
 case 128:
  if (VAR_2)
   VAR_14 = VAR_10;
  else if (!VAR_1)
   VAR_14 = VAR_3;
  else {
   switch (VAR_12) {
   case 16:
    VAR_14 = VAR_5;
    break;
   case 64:
    VAR_14 = VAR_8;
    break;
   default:
    VAR_14 = VAR_9;
    break;
   }
  }
  break;
 default:
  VAR_14 = VAR_4;
  break;
 }

 return FUNC_0(VAR_14);
}

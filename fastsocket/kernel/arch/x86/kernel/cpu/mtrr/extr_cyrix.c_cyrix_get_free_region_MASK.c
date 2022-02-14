
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mtrr_type ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long*,unsigned long*,int *) ;

__attribute__((used)) static int
FUNC_1(unsigned long VAR_1, unsigned long VAR_2, int VAR_3)
{
 unsigned long VAR_4, VAR_5;
 mtrr_type VAR_6;
 int VAR_7;

 switch (VAR_3) {
 case 7:
  if (VAR_2 < 0x40)
   break;
 case 6:
 case 5:
 case 4:
  return VAR_3;
 case 3:
 case 2:
 case 1:
 case 0:
  return VAR_3;
 }

 if (VAR_2 > 0x2000) {
  FUNC_0(7, &VAR_4, &VAR_5, &VAR_6);
  if (VAR_5 == 0)
   return 7;

 } else {
  for (VAR_7 = 0; VAR_7 < 7; VAR_7++) {
   FUNC_0(VAR_7, &VAR_4, &VAR_5, &VAR_6);
   if (VAR_5 == 0)
    return VAR_7;
  }




  FUNC_0(VAR_7, &VAR_4, &VAR_5, &VAR_6);
  if ((VAR_5 == 0) && (VAR_2 >= 0x40))
   return VAR_7;
 }
 return -VAR_0;
}

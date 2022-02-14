
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 if (VAR_0 != 2 && VAR_0 != 3 && VAR_0 != 4)
  return -1;

 if (VAR_1 != 1 && VAR_1 != 2 && VAR_1 != 4)
  return -1;

 switch (VAR_0) {
 case 2 :
 case 3 :
  if (VAR_3 < 2)
   return -1;
  break;
 case 4 :
  if (VAR_3 < 4)
   return -1;
  break;
 }
 if (VAR_2 < 2)
  return -1;


 return 0;
}

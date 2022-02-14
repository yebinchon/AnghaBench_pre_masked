
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adt7462_data {int* pin_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct adt7462_data *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 0:
 case 2:
  return 1;
 case 1:
  if (VAR_2->pin_cfg[0] & VAR_0)
   return 1;
  break;
 case 3:
  if (VAR_2->pin_cfg[0] & VAR_1)
   return 1;
  break;
 }
 return 0;
}

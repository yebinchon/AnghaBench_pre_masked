
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adt7462_data {int* pin_cfg; } ;


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
 int VAR_12 ;

__attribute__((used)) static int FUNC_0(struct adt7462_data *VAR_13, int VAR_14)
{
 switch (VAR_14) {
 case 0:
  if (!(VAR_13->pin_cfg[0] & VAR_9))
   return 0xA3;
  break;
 case 1:
  return 0x90;
 case 2:
  if (!(VAR_13->pin_cfg[1] & VAR_4))
   return 0xA9;
  break;
 case 3:
  if (!(VAR_13->pin_cfg[1] & VAR_3))
   return 0xA7;
  break;
 case 4:
  if (!(VAR_13->pin_cfg[0] & VAR_1))
   return 0x8F;
  break;
 case 5:
  if (!(VAR_13->pin_cfg[0] & VAR_0))
   return 0x8B;
  break;
 case 6:
  if (!(VAR_13->pin_cfg[1] & VAR_2))
   return 0x96;
  break;
 case 7:
  if (!(VAR_13->pin_cfg[1] & VAR_10))
   return 0xA5;
  break;
 case 8:
  if (!(VAR_13->pin_cfg[2] & VAR_6))
   return 0x93;
  break;
 case 9:
  if (!(VAR_13->pin_cfg[2] & VAR_5))
   return 0x92;
  break;
 case 10:
  return 0x91;
 case 11:
  if (VAR_13->pin_cfg[3] >> VAR_7 ==
     VAR_8 &&
      !(VAR_13->pin_cfg[0] & VAR_11))
   return 0x94;
  break;
 case 12:
  if (VAR_13->pin_cfg[3] >> VAR_7 ==
     VAR_8 &&
      !(VAR_13->pin_cfg[0] & VAR_11))
   return 0x95;
  break;
 }
 return -VAR_12;
}

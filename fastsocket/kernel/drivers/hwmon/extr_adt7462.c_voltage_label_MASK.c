
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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static const char *FUNC_1(struct adt7462_data *VAR_15, int VAR_16)
{
 switch (VAR_16) {
 case 0:
  if (!(VAR_15->pin_cfg[0] & VAR_12))
   return "+12V1";
  break;
 case 1:
  switch (FUNC_0(VAR_15->pin_cfg[1], VAR_6)) {
  case 0:
   return "Vccp1";
  case 1:
   return "+2.5V";
  case 2:
   return "+1.8V";
  case 3:
   return "+1.5V";
  }
 case 2:
  if (!(VAR_15->pin_cfg[1] & VAR_5))
   return "+12V3";
  break;
 case 3:
  if (!(VAR_15->pin_cfg[1] & VAR_4))
   return "+5V";
  break;
 case 4:
  if (!(VAR_15->pin_cfg[0] & VAR_1)) {
   if (VAR_15->pin_cfg[1] & VAR_3)
    return "+0.9V";
   return "+1.25V";
  }
  break;
 case 5:
  if (!(VAR_15->pin_cfg[0] & VAR_0)) {
   if (VAR_15->pin_cfg[1] & VAR_3)
    return "+1.8V";
   return "+2.5V";
  }
  break;
 case 6:
  if (!(VAR_15->pin_cfg[1] & VAR_2))
   return "+3.3V";
  break;
 case 7:
  if (!(VAR_15->pin_cfg[1] & VAR_13))
   return "+12V2";
  break;
 case 8:
  switch (FUNC_0(VAR_15->pin_cfg[2], VAR_9)) {
  case 0:
   return "Vbatt";
  case 1:
   return "FSB_Vtt";
  }
  break;
 case 9:
  switch (FUNC_0(VAR_15->pin_cfg[2], VAR_8)) {
  case 0:
   return "+3.3V";
  case 1:
   return "+1.2V1";
  }
  break;
 case 10:
  switch (FUNC_0(VAR_15->pin_cfg[2], VAR_7)) {
  case 0:
   return "Vccp2";
  case 1:
   return "+2.5V";
  case 2:
   return "+1.8V";
  case 3:
   return "+1.5";
  }
 case 11:
  if (VAR_15->pin_cfg[3] >> VAR_10 ==
     VAR_11 &&
      !(VAR_15->pin_cfg[0] & VAR_14))
   return "+1.5V ICH";
  break;
 case 12:
  if (VAR_15->pin_cfg[3] >> VAR_10 ==
     VAR_11 &&
      !(VAR_15->pin_cfg[0] & VAR_14))
   return "+1.5V 3GPIO";
  break;
 }
 return "N/A";
}

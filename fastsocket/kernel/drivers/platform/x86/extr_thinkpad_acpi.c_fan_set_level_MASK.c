
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fan_ctrl_status_undef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,int *,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_12)
{
 if (!VAR_8)
  return -VAR_3;

 switch (VAR_7) {
 case 129:
  if (VAR_12 >= 0 && VAR_12 <= 7) {
   if (!FUNC_1(VAR_10, ((void*)0), ((void*)0), "vd", VAR_12))
    return -VAR_1;
  } else
   return -VAR_0;
  break;

 case 130:
 case 128:
  if (!(VAR_12 & VAR_5) &&
      !(VAR_12 & VAR_6) &&
      ((VAR_12 < 0) || (VAR_12 > 7)))
   return -VAR_0;



  if (VAR_12 & VAR_6)
   VAR_12 |= 7;
  else if (VAR_12 & VAR_5)
   VAR_12 |= 4;

  if (!FUNC_0(VAR_9, VAR_12))
   return -VAR_1;
  else
   VAR_11.fan_ctrl_status_undef = 0;
  break;

 default:
  return -VAR_2;
 }

 FUNC_2(VAR_4,
  "fan control: set fan control register to 0x%02x\n", VAR_12);
 return 0;
}

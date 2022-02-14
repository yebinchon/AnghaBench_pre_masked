
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int led_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_1 (int ) ;

void FUNC_2(led_event_t VAR_6)
{
 switch (VAR_6)
 {
 case 130:
         VAR_4 = VAR_1;
  VAR_5 = VAR_3;
  break;

 case 129:
  VAR_5 &= ~VAR_3;
  break;

 case 139:
  VAR_5 |= VAR_2;
  VAR_4 = VAR_1;
  break;

 case 131:
  VAR_5 &= ~VAR_2;
  VAR_4 = VAR_1;
  break;
 case 136:
  break;

 case 137:
  if (VAR_5 & VAR_2)
   VAR_4 |= VAR_1;
  break;

 case 138:
  if (VAR_5 & VAR_2)
   VAR_4 &= ~VAR_1;
  break;

 case 140:
  break;

 case 141:
  break;

 case 132:
  break;

 case 133:
  break;

 default:
  break;
 }

 if (VAR_5 & VAR_3)
  FUNC_1(VAR_0);
 else
         FUNC_0(VAR_0);
}

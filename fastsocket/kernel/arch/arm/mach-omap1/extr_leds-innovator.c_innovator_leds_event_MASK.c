
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int led_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

void FUNC_2(led_event_t VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(VAR_5);

 switch (VAR_4) {
 case 130:
  VAR_2 = 0;
  VAR_3 = VAR_1;
  break;

 case 129:
  VAR_3 &= ~VAR_1;
  VAR_2 = 0;
  break;

 case 139:
  VAR_3 |= VAR_0;
  VAR_2 = 0;
  break;

 case 131:
  VAR_3 &= ~VAR_0;
  VAR_2 = 0;
  break;
 case 136:
  break;

 case 137:
  if (VAR_3 & VAR_0)
   VAR_2 &= ~0;
  break;

 case 138:
  if (VAR_3 & VAR_0)
   VAR_2 |= 0;
  break;

 case 140:
  break;

 case 141:
  break;

 case 132:
  if (VAR_3 & VAR_0)
   VAR_2 &= ~0;
  break;

 case 133:
  if (VAR_3 & VAR_0)
   VAR_2 |= 0;
  break;

 default:
  break;
 }

 FUNC_0(VAR_5);
}

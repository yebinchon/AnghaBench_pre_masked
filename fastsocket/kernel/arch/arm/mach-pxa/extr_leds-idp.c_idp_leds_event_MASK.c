
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int led_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

void FUNC_2(led_event_t VAR_8)
{
 unsigned long VAR_9;

 FUNC_1(VAR_9);

 switch (VAR_8) {
 case 130:
  VAR_6 = VAR_2 | VAR_0;
  VAR_7 = VAR_5;
  break;

 case 129:
  VAR_7 &= ~VAR_5;
  break;

 case 139:
  VAR_7 |= VAR_4;
  VAR_6 = VAR_2 | VAR_0;
  break;

 case 131:
  VAR_7 &= ~VAR_4;
  VAR_6 = VAR_2 | VAR_0;
  break;
 case 136:
  break;

 case 137:
  if (VAR_7 & VAR_4)
   VAR_6 |= VAR_2;
  break;

 case 138:
  if (VAR_7 & VAR_4)
   VAR_6 &= ~VAR_2;
  break;

 case 140:
  break;

 case 141:
  break;

 case 132:
  if (VAR_7 & VAR_4)
   VAR_6 |= VAR_0;
  break;

 case 133:
  if (VAR_7 & VAR_4)
   VAR_6 &= ~VAR_0;
  break;

 default:
  break;
 }

 if (VAR_7 & VAR_5)
  VAR_1 = ( (VAR_1 | VAR_3) & ~VAR_6);
 else
  VAR_1 |= VAR_3;

 FUNC_0(VAR_9);
}

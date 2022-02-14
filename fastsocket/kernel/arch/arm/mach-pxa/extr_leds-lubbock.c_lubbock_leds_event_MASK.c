
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
 int VAR_8 ;
 int VAR_9 ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

void FUNC_2(led_event_t VAR_10)
{
 unsigned long VAR_11;

 FUNC_1(VAR_11);

 switch (VAR_10) {
 case 130:
  VAR_8 = 0;
  VAR_9 = VAR_6;
  break;

 case 129:
  VAR_9 &= ~VAR_6;
  break;

 case 139:
  VAR_9 |= VAR_5;
  VAR_8 = 0;
  break;

 case 131:
  VAR_9 &= ~VAR_5;
  VAR_8 = 0;
  break;
 case 136:
  break;

 case 137:
  VAR_8 |= VAR_0;
  break;

 case 138:
  VAR_8 &= ~VAR_0;
  break;

 case 140:
  VAR_8 |= VAR_1;
  break;

 case 141:
  VAR_8 &= ~VAR_1;
  break;

 case 132:
  VAR_8 |= VAR_2;
  break;

 case 133:
  VAR_8 &= ~VAR_2;
  break;

 default:
  break;
 }

 if (VAR_9 & VAR_6)
  VAR_7 = (VAR_7 | 0xff) & ~VAR_8;
 else
  VAR_7 |= 0xff;

 FUNC_0(VAR_11);
}

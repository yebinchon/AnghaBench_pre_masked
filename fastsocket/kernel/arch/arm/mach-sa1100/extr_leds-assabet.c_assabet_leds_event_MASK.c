
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int led_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(led_event_t VAR_7)
{
 unsigned long VAR_8;

 FUNC_2(VAR_8);

 switch (VAR_7) {
 case 130:
  VAR_5 = VAR_2 | VAR_0;
  VAR_6 = VAR_4;
  break;

 case 129:
  VAR_6 &= ~VAR_4;
  VAR_5 = VAR_2 | VAR_0;
  FUNC_0(VAR_1, VAR_5);
  break;

 case 139:
  VAR_6 |= VAR_3;
  VAR_5 = VAR_2 | VAR_0;
  break;

 case 131:
  VAR_6 &= ~VAR_3;
  VAR_5 = VAR_2 | VAR_0;
  break;
 case 136:
  break;

 case 137:
  if (VAR_6 & VAR_3)
   VAR_5 &= ~VAR_0;
  break;

 case 138:
  if (VAR_6 & VAR_3)
   VAR_5 |= VAR_0;
  break;

 case 140:
  break;

 case 141:
  break;

 case 132:
  if (VAR_6 & VAR_3)
   VAR_5 &= ~VAR_2;
  break;

 case 133:
  if (VAR_6 & VAR_3)
   VAR_5 |= VAR_2;
  break;

 default:
  break;
 }

 if (VAR_6 & VAR_4)
  FUNC_0(VAR_1, VAR_5);

 FUNC_1(VAR_8);
}

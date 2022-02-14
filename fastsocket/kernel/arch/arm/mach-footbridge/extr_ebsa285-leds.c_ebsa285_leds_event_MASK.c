
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int led_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(led_event_t VAR_9)
{
 unsigned long VAR_10;

 FUNC_0(&VAR_8, VAR_10);

 switch (VAR_9) {
 case 130:
  VAR_6 = VAR_5 | VAR_4;

  VAR_6 |= VAR_3;

  VAR_7 |= VAR_1;
  break;

 case 129:
  VAR_7 &= ~VAR_1;
  break;

 case 139:
  VAR_7 |= VAR_0;
  VAR_6 = VAR_5 | VAR_4 | VAR_3;
  break;

 case 131:
  VAR_7 &= ~VAR_0;
  VAR_6 = VAR_5 | VAR_4 | VAR_3;
  break;
 case 136:
  if (!(VAR_7 & VAR_0))
   VAR_6 &= ~VAR_5;
  break;

 case 137:
  if (VAR_7 & VAR_0)
   VAR_6 &= ~VAR_4;
  break;

 case 138:
  if (VAR_7 & VAR_0)
   VAR_6 |= VAR_4;
  break;

 case 140:
  if (VAR_7 & VAR_0)
   VAR_6 &= ~VAR_3;
  break;

 case 141:
  if (VAR_7 & VAR_0)
   VAR_6 |= VAR_3;
  break;

 case 132:
  if (VAR_7 & VAR_0)
   VAR_6 &= ~VAR_5;
  break;

 case 133:
  if (VAR_7 & VAR_0)
   VAR_6 |= VAR_5;
  break;

 default:
  break;
 }

 if (VAR_7 & VAR_1)
  *VAR_2 = VAR_6;

 FUNC_1(&VAR_8, VAR_10);
}

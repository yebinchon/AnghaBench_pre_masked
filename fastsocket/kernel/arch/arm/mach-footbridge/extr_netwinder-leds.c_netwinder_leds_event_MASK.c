
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
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(led_event_t VAR_8)
{
 unsigned long VAR_9;

 FUNC_1(&VAR_6, VAR_9);

 switch (VAR_8) {
 case 130:
  VAR_5 |= VAR_3;
  VAR_4 = VAR_0;
  break;

 case 129:
  VAR_5 &= ~VAR_3;
  break;

 case 139:
  VAR_5 |= VAR_2;
  VAR_4 = 0;
  break;

 case 131:
  VAR_5 &= ~VAR_2;
  VAR_4 = 0;
  break;
 case 136:
  if (!(VAR_5 & VAR_2))
   VAR_4 |= VAR_1;
  break;

 case 137:
  if (VAR_5 & VAR_2)
   VAR_4 |= VAR_0;
  break;

 case 138:
  if (VAR_5 & VAR_2)
   VAR_4 &= ~VAR_0;
  break;

 case 140:
  if (VAR_5 & VAR_2)
   VAR_4 |= VAR_0 | VAR_1;
  break;

 case 141:
  if (VAR_5 & VAR_2)
   VAR_4 &= ~(VAR_0 | VAR_1);
  break;

 case 132:
  if (VAR_5 & VAR_2)
   VAR_4 |= VAR_1;
  break;

 case 133:
  if (VAR_5 & VAR_2)
   VAR_4 &= ~VAR_1;
  break;

 default:
  break;
 }

 FUNC_2(&VAR_6, VAR_9);

 if (VAR_5 & VAR_3) {
  FUNC_1(&VAR_7, VAR_9);
  FUNC_0(VAR_1 | VAR_0, VAR_4);
  FUNC_2(&VAR_7, VAR_9);
 }
}

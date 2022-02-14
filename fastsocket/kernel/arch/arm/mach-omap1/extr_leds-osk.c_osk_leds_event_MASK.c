
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int led_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;

void FUNC_3(led_event_t VAR_6)
{
 unsigned long VAR_7;
 u16 VAR_8;

 FUNC_1(VAR_7);

 if (!(VAR_5 & VAR_2) && VAR_6 != 130)
  goto done;

 VAR_8 = VAR_4;
 switch (VAR_6) {
 case 130:
  VAR_5 |= VAR_2;
  VAR_4 = 0;
  VAR_8 = ~0;
  break;

 case 134:
 case 129:
  VAR_5 &= ~VAR_2;
  VAR_4 = 0;
  break;

 case 135:
  VAR_5 |= VAR_1;
  VAR_4 = 0;
  VAR_8 = ~0;
  break;

 case 131:
  VAR_5 &= ~VAR_1;
  VAR_4 = 0;
  break;
 default:
  break;
 }

 VAR_8 ^= VAR_4;

done:
 FUNC_0(VAR_7);
}

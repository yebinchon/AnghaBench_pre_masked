
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int led_event_t ;
struct TYPE_2__ {int leds; } ;


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
 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_11 ;
 int FUNC_1 (int ,int) ;
 int VAR_12 ;
 int VAR_13 ;


 int VAR_14 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(led_event_t VAR_15)
{
 unsigned long VAR_16;

 FUNC_4(&VAR_14, VAR_16);

 if (!(VAR_13 & VAR_9) && VAR_15 != 130)
  goto done;

 switch (VAR_15) {
 case 130:
  if (VAR_11)
   VAR_13 |= VAR_9;
  break;

 case 129:
 case 136:


  if (!(FUNC_3() || FUNC_2())) {
   FUNC_1(VAR_1, 0);
   FUNC_1(VAR_0, 0);
  }

  FUNC_0(~0, &VAR_11->leds);
  VAR_13 &= ~VAR_9;
  goto done;

 case 139:
  VAR_13 |= VAR_8;
  VAR_12 = 0;
  break;

 case 131:
  VAR_13 &= ~VAR_8;
  break;
 case 137:
  VAR_12 |= VAR_4;
  break;
 case 138:
  VAR_12 &= ~VAR_4;
  break;

 case 142:
  VAR_12 |= VAR_2;
  break;
 case 143:
  VAR_12 &= ~VAR_2;
  break;

 case 132:
  VAR_12 |= VAR_5;
  break;
 case 133:
  VAR_12 &= ~VAR_5;
  break;

 case 140:
  VAR_12 |= VAR_3;
  break;
 case 141:
  VAR_12 &= ~VAR_3;
  break;

 default:
  break;
 }





 if (VAR_13 & VAR_9)
  FUNC_0(~VAR_12, &VAR_11->leds);

done:
 FUNC_5(&VAR_14, VAR_16);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;






 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_1(enum clock_event_mode VAR_9,
      struct clock_event_device *VAR_10)
{
 unsigned long VAR_11;

 switch(VAR_9) {
 case 130:
  FUNC_0(VAR_7, VAR_8 + VAR_6);

  VAR_11 = VAR_5;
  VAR_11 |= VAR_1 | VAR_3 | VAR_2;
  break;
 case 131:

  VAR_11 = VAR_4;
  VAR_11 |= VAR_1 | VAR_3;
  break;
 case 128:
 case 129:
 default:
  VAR_11 = 0;
 }

 FUNC_0(VAR_11, VAR_8 + VAR_0);
}

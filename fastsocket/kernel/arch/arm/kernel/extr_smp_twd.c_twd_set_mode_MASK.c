
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
 int FUNC_0 (unsigned long,scalar_t__) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_1(enum clock_event_mode VAR_6,
   struct clock_event_device *VAR_7)
{
 unsigned long VAR_8;

 switch (VAR_6) {
 case 130:

  VAR_8 = VAR_1 | VAR_2
   | VAR_4;
  break;
 case 131:

  VAR_8 = VAR_2 | VAR_3;
  break;
 case 128:
 case 129:
 default:
  VAR_8 = 0;
 }

 FUNC_0(VAR_8, VAR_5 + VAR_0);
}

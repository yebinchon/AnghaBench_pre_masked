
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void
FUNC_2(enum clock_event_mode VAR_4, struct clock_event_device *VAR_5)
{
 unsigned long VAR_6;

 switch (VAR_4) {
 case 132:
 case 128:
 case 129:
  FUNC_1(VAR_6);
  VAR_0 &= ~VAR_1;
  VAR_2 = VAR_3;
  FUNC_0(VAR_6);
  break;

 case 130:
 case 131:
  break;
 }
}

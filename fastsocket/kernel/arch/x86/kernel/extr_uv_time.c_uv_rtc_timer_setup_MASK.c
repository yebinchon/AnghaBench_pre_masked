
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int cpumask; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(enum clock_event_mode VAR_0,
          struct clock_event_device *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->cpumask);

 switch (VAR_0) {
 case 131:
 case 132:
 case 130:

  break;
 case 128:
 case 129:
  FUNC_1(VAR_2, 1);
  break;
 }
}

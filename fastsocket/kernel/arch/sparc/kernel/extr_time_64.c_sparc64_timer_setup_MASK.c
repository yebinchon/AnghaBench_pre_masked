
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;
struct TYPE_2__ {int (* disable_irq ) () ;} ;







 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(enum clock_event_mode VAR_1,
    struct clock_event_device *VAR_2)
{
 switch (VAR_1) {
 case 132:
 case 130:
  break;

 case 129:
  VAR_0->disable_irq();
  break;

 case 131:
 case 128:
  FUNC_0(1);
  break;
 };
}

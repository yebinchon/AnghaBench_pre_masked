
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct HvLpEvent {int dummy; } ;
struct TYPE_2__ {scalar_t__ hq_overflow_pending; scalar_t__ hq_current_event; } ;


 scalar_t__ FUNC_0 (struct HvLpEvent*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;

int FUNC_2(void)
{
 struct HvLpEvent *VAR_2;

 if (FUNC_1() >= VAR_1)
  return 0;

 VAR_2 = (struct HvLpEvent *)VAR_0.hq_current_event;

 return FUNC_0(VAR_2) ||
  VAR_0.hq_overflow_pending;
}

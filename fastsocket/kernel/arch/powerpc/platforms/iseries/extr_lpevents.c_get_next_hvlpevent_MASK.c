
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct HvLpEvent {int xSizeMinus1; } ;
struct TYPE_2__ {scalar_t__ hq_current_event; scalar_t__ hq_last_event; scalar_t__ hq_event_stack; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct HvLpEvent*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static struct HvLpEvent * FUNC_2(void)
{
 struct HvLpEvent * VAR_2;
 VAR_2 = (struct HvLpEvent *)VAR_1.hq_current_event;

 if (FUNC_0(VAR_2)) {

  FUNC_1();

  VAR_1.hq_current_event += ((VAR_2->xSizeMinus1 +
    VAR_0) / VAR_0) *
     VAR_0;


  if (VAR_1.hq_current_event >
    VAR_1.hq_last_event) {
   VAR_1.hq_current_event =
    VAR_1.hq_event_stack;
  }
 } else {
  VAR_2 = ((void*)0);
 }

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_event_struct {TYPE_1__* hostdata; int free; } ;
struct event_pool {int events; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,struct srp_event_struct*,...) ;
 int FUNC_2 (struct event_pool*,struct srp_event_struct*) ;

__attribute__((used)) static void FUNC_3(struct event_pool *VAR_0,
           struct srp_event_struct *VAR_1)
{
 if (!FUNC_2(VAR_0, VAR_1)) {
  FUNC_1(VAR_1->hostdata->dev, "Freeing invalid event_struct %p "
   "(not in pool %p)\n", VAR_1, VAR_0->events);
  return;
 }
 if (FUNC_0(&VAR_1->free) != 1) {
  FUNC_1(VAR_1->hostdata->dev, "Freeing event_struct %p "
   "which is not in use!\n", VAR_1);
  return;
 }
}

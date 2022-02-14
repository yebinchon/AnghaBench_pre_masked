
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pid; int event_list_lock; int wq; int event_list; } ;
struct uwb_rc {TYPE_2__ uwbd; } ;
struct TYPE_3__ {struct uwb_event* rceb; } ;
struct uwb_event {scalar_t__ type; TYPE_1__ notif; struct uwb_rc* rc; int list_node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uwb_rc*) ;
 int FUNC_1 (struct uwb_event*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct uwb_event *VAR_1)
{
 struct uwb_rc *VAR_2 = VAR_1->rc;
 unsigned long VAR_3;

 FUNC_3(&VAR_2->uwbd.event_list_lock, VAR_3);
 if (VAR_2->uwbd.pid != 0) {
  FUNC_2(&VAR_1->list_node, &VAR_2->uwbd.event_list);
  FUNC_5(&VAR_2->uwbd.wq);
 } else {
  FUNC_0(VAR_1->rc);
  if (VAR_1->type == VAR_0)
   FUNC_1(VAR_1->notif.rceb);
  FUNC_1(VAR_1);
 }
 FUNC_4(&VAR_2->uwbd.event_list_lock, VAR_3);
 return;
}

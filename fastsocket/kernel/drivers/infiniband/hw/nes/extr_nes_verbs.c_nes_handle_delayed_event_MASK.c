
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * function; } ;
struct nes_vnic {scalar_t__ delayed_event; scalar_t__ last_dispatched_event; TYPE_2__ event_timer; scalar_t__ logical_port; TYPE_3__* nesibdev; } ;
struct TYPE_4__ {scalar_t__ port_num; } ;
struct ib_event {scalar_t__ event; TYPE_1__ element; int * device; } ;
struct TYPE_6__ {int ibdev; } ;


 int FUNC_0 (struct ib_event*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct nes_vnic *VAR_1 = (void *) VAR_0;

 if (VAR_1->delayed_event != VAR_1->last_dispatched_event) {
  struct ib_event VAR_2;

  VAR_2.device = &VAR_1->nesibdev->ibdev;
  if (!VAR_2.device)
   goto stop_timer;
  VAR_2.event = VAR_1->delayed_event;
  VAR_2.element.port_num = VAR_1->logical_port + 1;
  FUNC_0(&VAR_2);
 }

stop_timer:
 VAR_1->event_timer.function = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long data; scalar_t__ expires; scalar_t__ function; } ;
struct nes_vnic {int delayed_event; TYPE_2__ event_timer; int last_dispatched_event; scalar_t__ logical_port; struct nes_device* nesdev; struct nes_ib_device* nesibdev; } ;
struct nes_ib_device {int ibdev; } ;
struct nes_device {scalar_t__ iw_status; } ;
struct TYPE_4__ {scalar_t__ port_num; } ;
struct ib_event {int event; TYPE_1__ element; int * device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct ib_event*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_4 ;

void FUNC_3(struct nes_vnic *VAR_5)
{
 struct nes_ib_device *VAR_6 = VAR_5->nesibdev;
 struct nes_device *VAR_7 = VAR_5->nesdev;
 struct ib_event VAR_8;
 VAR_8.device = &VAR_6->ibdev;
 VAR_8.element.port_num = VAR_5->logical_port + 1;
 VAR_8.event = VAR_7->iw_status ? VAR_0 : VAR_1;

 if (!VAR_5->event_timer.function) {
  FUNC_1(&VAR_8);
  VAR_5->last_dispatched_event = VAR_8.event;
  VAR_5->event_timer.function = VAR_4;
  VAR_5->event_timer.data = (unsigned long) VAR_5;
  VAR_5->event_timer.expires = VAR_3 + VAR_2;
  FUNC_0(&VAR_5->event_timer);
 } else {
  FUNC_2(&VAR_5->event_timer, VAR_3 + VAR_2);
 }
 VAR_5->delayed_event = VAR_8.event;
}

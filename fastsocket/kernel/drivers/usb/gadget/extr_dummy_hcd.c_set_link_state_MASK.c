
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dummy {int active; int port_status; int old_status; scalar_t__ rh_state; int old_active; int lock; int gadget; TYPE_1__* driver; scalar_t__ resuming; scalar_t__ udc_suspended; int pullup; } ;
struct TYPE_2__ {int (* resume ) (int *) ;int (* suspend ) (int *) ;int (* disconnect ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dummy*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (struct dummy *VAR_9)
{
 VAR_9->active = 0;
 if ((VAR_9->port_status & VAR_6) == 0)
  VAR_9->port_status = 0;


 else if (!VAR_9->pullup || VAR_9->udc_suspended) {
  VAR_9->port_status &= ~(VAR_1 |
     VAR_3 |
     VAR_5 |
     VAR_4 |
     VAR_8);
  if ((VAR_9->old_status & VAR_1) != 0)
   VAR_9->port_status |= (VAR_2 << 16);
 } else {
  VAR_9->port_status |= VAR_1;
  if ((VAR_9->old_status & VAR_1) == 0)
   VAR_9->port_status |= (VAR_2 << 16);
  if ((VAR_9->port_status & VAR_3) == 0)
   VAR_9->port_status &= ~VAR_8;
  else if ((VAR_9->port_status & VAR_8) == 0 &&
    VAR_9->rh_state != VAR_0)
   VAR_9->active = 1;
 }

 if ((VAR_9->port_status & VAR_3) == 0 || VAR_9->active)
  VAR_9->resuming = 0;

 if ((VAR_9->port_status & VAR_1) == 0 ||
   (VAR_9->port_status & VAR_7) != 0) {
  if ((VAR_9->old_status & VAR_1) != 0 &&
    (VAR_9->old_status & VAR_7) == 0 &&
    VAR_9->driver) {
   FUNC_2 (VAR_9);
   FUNC_1 (&VAR_9->lock);
   VAR_9->driver->disconnect (&VAR_9->gadget);
   FUNC_0 (&VAR_9->lock);
  }
 } else if (VAR_9->active != VAR_9->old_active) {
  if (VAR_9->old_active && VAR_9->driver->suspend) {
   FUNC_1 (&VAR_9->lock);
   VAR_9->driver->suspend (&VAR_9->gadget);
   FUNC_0 (&VAR_9->lock);
  } else if (!VAR_9->old_active && VAR_9->driver->resume) {
   FUNC_1 (&VAR_9->lock);
   VAR_9->driver->resume (&VAR_9->gadget);
   FUNC_0 (&VAR_9->lock);
  }
 }

 VAR_9->old_status = VAR_9->port_status;
 VAR_9->old_active = VAR_9->active;
}

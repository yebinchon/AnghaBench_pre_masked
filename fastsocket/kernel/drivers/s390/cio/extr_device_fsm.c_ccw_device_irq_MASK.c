
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int cons; } ;
struct TYPE_11__ {TYPE_2__ erw; } ;
struct TYPE_12__ {TYPE_3__ esw0; } ;
struct TYPE_9__ {int dstat; } ;
struct TYPE_15__ {TYPE_1__ cmd; } ;
struct irb {TYPE_4__ esw; TYPE_7__ scsw; } ;
struct ccw_device {TYPE_6__* private; int (* handler ) (struct ccw_device*,int ,struct irb*) ;} ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
struct TYPE_13__ {scalar_t__ doverify; scalar_t__ dosense; } ;
struct TYPE_14__ {TYPE_5__ flags; void* state; scalar_t__ intparm; int irb; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ccw_device*,struct irb*) ;
 scalar_t__ FUNC_1 (struct ccw_device*) ;
 scalar_t__ FUNC_2 (struct ccw_device*,struct irb*) ;
 int FUNC_3 (struct ccw_device*,int ) ;
 int FUNC_4 (int *,struct irb*,int) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (struct ccw_device*,int ,struct irb*) ;

__attribute__((used)) static void
FUNC_8(struct ccw_device *VAR_3, enum dev_event VAR_4)
{
 struct irb *VAR_5;
 int VAR_6;

 VAR_5 = (struct irb *) VAR_2;
 VAR_6 = !FUNC_6(&VAR_5->scsw);

 if (!FUNC_5(&VAR_5->scsw)) {
  if (VAR_6 && (VAR_5->scsw.cmd.dstat & VAR_1) &&
      !VAR_5->esw.esw0.erw.cons) {

   if (FUNC_2(VAR_3, VAR_5) != 0)
    goto call_handler_unsol;
   FUNC_4(&VAR_3->private->irb, VAR_5, sizeof(struct irb));
   VAR_3->private->state = VAR_0;
   VAR_3->private->intparm = 0;
   return;
  }
call_handler_unsol:
  if (VAR_3->handler)
   VAR_3->handler (VAR_3, 0, VAR_5);
  if (VAR_3->private->flags.doverify)
   FUNC_3(VAR_3, 0);
  return;
 }

 FUNC_0(VAR_3, VAR_5);
 if (VAR_6 && VAR_3->private->flags.dosense) {
  if (FUNC_2(VAR_3, VAR_5) == 0) {
   VAR_3->private->state = VAR_0;
  }
  return;
 }

 if (FUNC_1(VAR_3) && VAR_3->private->flags.doverify)

  FUNC_3(VAR_3, 0);
}

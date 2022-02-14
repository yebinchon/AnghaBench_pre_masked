
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_21__ {scalar_t__ pvrf; } ;
struct TYPE_22__ {TYPE_6__ erw; } ;
struct TYPE_23__ {TYPE_7__ esw0; } ;
struct TYPE_16__ {int dstat; } ;
struct TYPE_15__ {TYPE_1__ cmd; } ;
struct irb {TYPE_8__ esw; TYPE_11__ scsw; } ;
struct ccw_device {TYPE_10__* private; } ;
struct TYPE_24__ {int doverify; scalar_t__ dosense; } ;
struct TYPE_17__ {int cons; } ;
struct TYPE_18__ {TYPE_2__ erw; } ;
struct TYPE_19__ {TYPE_3__ esw0; } ;
struct TYPE_20__ {TYPE_4__ esw; } ;
struct TYPE_14__ {TYPE_9__ flags; TYPE_5__ irb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct irb*) ;
 int FUNC_1 (struct ccw_device*,struct irb*) ;
 int FUNC_2 (struct ccw_device*) ;
 scalar_t__ FUNC_3 (TYPE_11__*) ;
 scalar_t__ FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (TYPE_11__*) ;

void
FUNC_6(struct ccw_device *VAR_3, struct irb *VAR_4)
{





 if (!(FUNC_5(&VAR_4->scsw) & VAR_2))
  return;


 FUNC_1(VAR_3, VAR_4);


 if (FUNC_3(&VAR_4->scsw) && FUNC_4(&VAR_4->scsw))
  FUNC_2(VAR_3);

 if (!(VAR_4->scsw.cmd.dstat & VAR_1) &&
     (VAR_4->scsw.cmd.dstat & VAR_0)) {
  VAR_3->private->irb.esw.esw0.erw.cons = 1;
  VAR_3->private->flags.dosense = 0;
 }

 if (FUNC_0(VAR_4) &&
     VAR_4->esw.esw0.erw.pvrf)
  VAR_3->private->flags.doverify = 1;
}

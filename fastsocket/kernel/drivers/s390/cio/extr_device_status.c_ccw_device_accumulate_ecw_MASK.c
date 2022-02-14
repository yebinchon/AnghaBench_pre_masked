
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int stctl; scalar_t__ ectl; } ;
struct TYPE_8__ {TYPE_1__ cmd; } ;
struct irb {int ecw; TYPE_2__ scsw; } ;
struct ccw_device {TYPE_6__* private; } ;
struct TYPE_9__ {scalar_t__ ectl; } ;
struct TYPE_10__ {TYPE_3__ cmd; } ;
struct TYPE_11__ {int ecw; TYPE_4__ scsw; } ;
struct TYPE_12__ {TYPE_5__ irb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ccw_device *VAR_2, struct irb *VAR_3)
{





 VAR_2->private->irb.scsw.cmd.ectl = 0;
 if ((VAR_3->scsw.cmd.stctl & VAR_0) &&
     !(VAR_3->scsw.cmd.stctl & VAR_1))
  VAR_2->private->irb.scsw.cmd.ectl = VAR_3->scsw.cmd.ectl;

 if (!VAR_2->private->irb.scsw.cmd.ectl)
  return;

 FUNC_0 (&VAR_2->private->irb.ecw, VAR_3->ecw, sizeof (VAR_3->ecw));
}

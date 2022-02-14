
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ invoke_id; int proc; int ll_id; } ;
struct TYPE_14__ {TYPE_4__ dss1; } ;
struct l3_process {TYPE_5__ prot; TYPE_9__* st; int timer; } ;
struct TYPE_15__ {int (* statcallb ) (TYPE_7__*) ;} ;
struct IsdnCardState {TYPE_6__ iif; int myid; } ;
struct TYPE_11__ {int timeout; int * data; scalar_t__ datalen; int proc; int ll_id; scalar_t__ hl_id; } ;
struct TYPE_12__ {TYPE_2__ dss1_io; } ;
struct TYPE_16__ {TYPE_3__ parm; int arg; int command; int driver; } ;
typedef TYPE_7__ isdn_ctrl ;
struct TYPE_10__ {struct IsdnCardState* hardware; } ;
struct TYPE_17__ {TYPE_1__ l1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct l3_process*) ;
 int FUNC_2 (TYPE_9__*,scalar_t__) ;
 int FUNC_3 (TYPE_7__*) ;

__attribute__((used)) static void
FUNC_4(struct l3_process *VAR_2)
{ isdn_ctrl VAR_3;
  struct IsdnCardState *VAR_4 = VAR_2->st->l1.hardware;

  FUNC_0(&VAR_2->timer);

  VAR_3.driver = VAR_4->myid;
  VAR_3.command = VAR_1;
  VAR_3.arg = VAR_0;
  VAR_3.parm.dss1_io.hl_id = VAR_2->prot.dss1.invoke_id;
  VAR_3.parm.dss1_io.ll_id = VAR_2->prot.dss1.ll_id;
  VAR_3.parm.dss1_io.proc = VAR_2->prot.dss1.proc;
  VAR_3.parm.dss1_io.timeout= -1;
  VAR_3.parm.dss1_io.datalen = 0;
  VAR_3.parm.dss1_io.data = ((void*)0);
  FUNC_2(VAR_2->st, VAR_2->prot.dss1.invoke_id);
  VAR_2->prot.dss1.invoke_id = 0;

  VAR_4->iif.statcallb(&VAR_3);

  FUNC_1(VAR_2);
}


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


typedef int u_char ;
struct TYPE_13__ {scalar_t__ invoke_id; int proc; int ll_id; } ;
struct TYPE_14__ {TYPE_4__ ni1; } ;
struct l3_process {TYPE_5__ prot; TYPE_9__* st; int timer; } ;
struct PStack {int dummy; } ;
struct TYPE_15__ {int (* statcallb ) (TYPE_7__*) ;} ;
struct IsdnCardState {TYPE_6__ iif; int myid; } ;
struct TYPE_11__ {int * data; int datalen; scalar_t__ timeout; int proc; int ll_id; scalar_t__ hl_id; } ;
struct TYPE_12__ {TYPE_2__ ni1_io; } ;
struct TYPE_16__ {TYPE_3__ parm; int arg; int command; int driver; } ;
typedef TYPE_7__ isdn_ctrl ;
struct TYPE_10__ {struct IsdnCardState* hardware; } ;
struct TYPE_17__ {TYPE_1__ l1; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_9__*,scalar_t__) ;
 int FUNC_2 (struct PStack*,char*,int,int ) ;
 struct l3_process* FUNC_3 (struct PStack*,int) ;
 int FUNC_4 (struct l3_process*) ;
 int FUNC_5 (TYPE_7__*) ;

__attribute__((used)) static void
FUNC_6(struct PStack *VAR_2, int VAR_3, u_char *VAR_4, u_char VAR_5)
{ isdn_ctrl VAR_6;
  struct IsdnCardState *VAR_7;
  struct l3_process *VAR_8 = ((void*)0);

  if ((VAR_8 = FUNC_3(VAR_2, VAR_3)))
   { FUNC_0(&VAR_8->timer);

     VAR_7 = VAR_8->st->l1.hardware;
     VAR_6.driver = VAR_7->myid;
     VAR_6.command = VAR_0;
     VAR_6.arg = VAR_1;
     VAR_6.parm.ni1_io.hl_id = VAR_8->prot.ni1.invoke_id;
     VAR_6.parm.ni1_io.ll_id = VAR_8->prot.ni1.ll_id;
     VAR_6.parm.ni1_io.proc = VAR_8->prot.ni1.proc;
     VAR_6.parm.ni1_io.timeout= 0;
     VAR_6.parm.ni1_io.datalen = VAR_5;
     VAR_6.parm.ni1_io.data = VAR_4;
     FUNC_1(VAR_8->st, VAR_8->prot.ni1.invoke_id);
     VAR_8->prot.ni1.invoke_id = 0;

     VAR_7->iif.statcallb(&VAR_6);
     FUNC_4(VAR_8);
   }
  else
   FUNC_2(VAR_2, "dummy return result id=0x%x result len=%d",VAR_3,VAR_5);
}

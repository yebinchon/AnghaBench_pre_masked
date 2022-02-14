
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int l4l3; } ;
struct TYPE_4__ {int debug; int printdebug; scalar_t__ userint; struct PStack* userdata; int state; int * fsm; } ;
struct TYPE_5__ {int debug_id; TYPE_1__ l3m; int squeue; int * global; int * proc; } ;
struct PStack {TYPE_3__ lli; TYPE_2__ l3; } ;
struct Channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(struct PStack *VAR_4, struct Channel *VAR_5)
{

 VAR_4->l3.proc = ((void*)0);
 VAR_4->l3.global = ((void*)0);
 FUNC_0(&VAR_4->l3.squeue);
 VAR_4->l3.l3m.fsm = &VAR_2;
 VAR_4->l3.l3m.state = VAR_0;
 VAR_4->l3.l3m.debug = 1;
 VAR_4->l3.l3m.userdata = VAR_4;
 VAR_4->l3.l3m.userint = 0;
 VAR_4->l3.l3m.printdebug = VAR_3;
 FUNC_1(VAR_4->l3.debug_id, "L3BC ");
 VAR_4->lli.l4l3 = VAR_1;
}

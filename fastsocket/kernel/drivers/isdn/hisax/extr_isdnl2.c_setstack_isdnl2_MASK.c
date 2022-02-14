
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int printdebug; scalar_t__ userint; struct PStack* userdata; scalar_t__ debug; int state; int * fsm; } ;
struct TYPE_7__ {int t203; TYPE_4__ l2m; int t200; int debug_id; int flag; scalar_t__ debug; int ui_queue; int i_queue; int lock; } ;
struct TYPE_6__ {int l3l2; } ;
struct TYPE_5__ {int l1l2; } ;
struct PStack {TYPE_3__ l2; TYPE_2__ l3; TYPE_1__ l1; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void
FUNC_6(struct PStack *VAR_7, char *VAR_8)
{
 FUNC_3(&VAR_7->l2.lock);
 VAR_7->l1.l1l2 = VAR_3;
 VAR_7->l3.l3l2 = VAR_4;

 FUNC_2(&VAR_7->l2.i_queue);
 FUNC_2(&VAR_7->l2.ui_queue);
 FUNC_1(&VAR_7->l2);
 VAR_7->l2.debug = 0;

 VAR_7->l2.l2m.fsm = &VAR_5;
 if (FUNC_5(VAR_0, &VAR_7->l2.flag))
  VAR_7->l2.l2m.state = VAR_2;
 else
 VAR_7->l2.l2m.state = VAR_1;
 VAR_7->l2.l2m.debug = 0;
 VAR_7->l2.l2m.userdata = VAR_7;
 VAR_7->l2.l2m.userint = 0;
 VAR_7->l2.l2m.printdebug = VAR_6;
 FUNC_4(VAR_7->l2.debug_id, VAR_8);

 FUNC_0(&VAR_7->l2.l2m, &VAR_7->l2.t200);
 FUNC_0(&VAR_7->l2.l2m, &VAR_7->l2.t203);
}

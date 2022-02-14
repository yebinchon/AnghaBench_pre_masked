
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int debug; int printdebug; scalar_t__ userint; struct PStack* userdata; int state; int * fsm; } ;
struct TYPE_7__ {int T202; int debug; int t202; TYPE_4__ tei_m; } ;
struct TYPE_6__ {int l1tei; } ;
struct TYPE_5__ {int l2tei; } ;
struct PStack {TYPE_3__ ma; TYPE_2__ l1; TYPE_1__ l2; } ;


 int FUNC_0 (TYPE_4__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_1(struct PStack *VAR_5)
{
 VAR_5->l2.l2tei = VAR_3;
 VAR_5->ma.T202 = 2000;
 VAR_5->l1.l1tei = VAR_2;
 VAR_5->ma.debug = 1;
 VAR_5->ma.tei_m.fsm = &VAR_4;
 VAR_5->ma.tei_m.state = VAR_0;
 VAR_5->ma.tei_m.debug = 1;
 VAR_5->ma.tei_m.userdata = VAR_5;
 VAR_5->ma.tei_m.userint = 0;
 VAR_5->ma.tei_m.printdebug = VAR_1;
 FUNC_0(&VAR_5->ma.tei_m, &VAR_5->ma.t202);
}

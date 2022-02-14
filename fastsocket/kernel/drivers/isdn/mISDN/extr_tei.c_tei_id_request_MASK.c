
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* printdebug ) (TYPE_2__*,char*,scalar_t__) ;} ;
struct teimgr {scalar_t__ ri; int nval; int tval; int timer; int mgr; TYPE_2__ tei_m; TYPE_1__* l2; } ;
struct FsmInst {struct teimgr* userdata; } ;
struct TYPE_4__ {scalar_t__ tei; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct teimgr *VAR_9 = VAR_6->userdata;

 if (VAR_9->l2->tei != VAR_2) {
  VAR_9->tei_m.printdebug(&VAR_9->tei_m,
   "assign request for allready assigned tei %d",
   VAR_9->l2->tei);
  return;
 }
 VAR_9->ri = FUNC_3();
 if (*VAR_5 & VAR_0)
  VAR_9->tei_m.printdebug(&VAR_9->tei_m,
   "assign request ri %d", VAR_9->ri);
 FUNC_2(VAR_9->mgr, VAR_3, VAR_9->ri, VAR_2);
 FUNC_1(VAR_6, VAR_4);
 FUNC_0(&VAR_9->timer, VAR_9->tval, VAR_1, ((void*)0), 1);
 VAR_9->nval = 3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* printdebug ) (struct FsmInst*,char*,int ) ;} ;
struct teimgr {int nval; int tval; int timer; TYPE_2__ tei_m; TYPE_1__* l2; int mgr; } ;
struct FsmInst {struct teimgr* userdata; } ;
struct TYPE_3__ {int tei; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct FsmInst*,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_5, int VAR_6, void *VAR_7)
{
 struct teimgr *VAR_8 = VAR_5->userdata;

 if (*VAR_4 & VAR_0)
  VAR_8->tei_m.printdebug(VAR_5, "id verify request for tei %d",
   VAR_8->l2->tei);
 FUNC_2(VAR_8->mgr, VAR_2, 0, VAR_8->l2->tei);
 FUNC_1(&VAR_8->tei_m, VAR_3);
 FUNC_0(&VAR_8->timer, VAR_8->tval, VAR_1, ((void*)0), 2);
 VAR_8->nval = 2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* printdebug ) (TYPE_3__*,char*,int ) ;} ;
struct TYPE_6__ {int N202; int T202; int t202; TYPE_3__ tei_m; scalar_t__ debug; } ;
struct TYPE_5__ {int tei; } ;
struct PStack {TYPE_2__ ma; TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct PStack*,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct PStack *VAR_6 = VAR_3->userdata;

 if (VAR_6->ma.debug)
  VAR_6->ma.tei_m.printdebug(&VAR_6->ma.tei_m,
   "id verify request for tei %d", VAR_6->l2.tei);
 FUNC_2(VAR_6, VAR_1, 0, VAR_6->l2.tei);
 FUNC_1(&VAR_6->ma.tei_m, VAR_2);
 FUNC_0(&VAR_6->ma.t202, VAR_6->ma.T202, VAR_0, ((void*)0), 2);
 VAR_6->ma.N202 = 2;
}

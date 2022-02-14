
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int* data; } ;
struct TYPE_6__ {int tei; } ;
struct TYPE_7__ {int (* printdebug ) (TYPE_3__*,char*,int) ;} ;
struct TYPE_5__ {TYPE_3__ tei_m; int t202; scalar_t__ debug; } ;
struct PStack {TYPE_2__ l2; TYPE_1__ ma; } ;
struct FsmInst {struct PStack* userdata; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct PStack*,int ,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct PStack *VAR_6 = VAR_3->userdata;
 struct sk_buff *VAR_7 = VAR_5;
 int VAR_8;

 VAR_8 = VAR_7->data[4] >> 1;
 if (VAR_6->ma.debug)
  VAR_6->ma.tei_m.printdebug(&VAR_6->ma.tei_m,
   "identity check req tei %d", VAR_8);
 if ((VAR_6->l2.tei != -1) && ((VAR_8 == VAR_0) || (VAR_8 == VAR_6->l2.tei))) {
  FUNC_1(&VAR_6->ma.t202, 4);
  FUNC_0(&VAR_6->ma.tei_m, VAR_2);
  FUNC_2(VAR_6, VAR_1, FUNC_3(), VAR_6->l2.tei);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int l3m; scalar_t__ debug; int proc; int (* l3l2 ) (struct PStack*,int,struct sk_buff*) ;int squeue; } ;
struct PStack {TYPE_1__ l3; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct PStack*,char*) ;
 int FUNC_3 (struct PStack*,int) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct PStack*,int,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_6(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct PStack *VAR_9 = VAR_6->userdata;
 struct sk_buff *VAR_10 = VAR_8;
 int VAR_11 = 0;

 FUNC_0(VAR_6, VAR_5);
 while ((VAR_10 = FUNC_4(&VAR_9->l3.squeue))) {
  VAR_9->l3.l3l2(VAR_9, VAR_0 | VAR_4, VAR_10);
  VAR_11++;
 }
 if ((!VAR_9->l3.proc) && VAR_11) {
  if (VAR_9->l3.debug)
   FUNC_2(VAR_9, "lc_connect: release link");
  FUNC_1(&VAR_9->l3.l3m, VAR_2, ((void*)0));
 } else
  FUNC_3(VAR_9, VAR_1 | VAR_3);
}

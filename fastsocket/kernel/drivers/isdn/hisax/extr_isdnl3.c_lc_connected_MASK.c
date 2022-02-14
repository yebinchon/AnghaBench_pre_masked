
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int l3m; scalar_t__ debug; int proc; int (* l3l2 ) (struct PStack*,int,struct sk_buff*) ;int squeue; int l3m_timer; } ;
struct PStack {TYPE_1__ l3; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct PStack*,char*) ;
 int FUNC_4 (struct PStack*,int) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (struct PStack*,int,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct PStack *VAR_9 = VAR_6->userdata;
 struct sk_buff *VAR_10 = VAR_8;
 int VAR_11 = 0;

 FUNC_1(&VAR_9->l3.l3m_timer, 51);
 FUNC_0(VAR_6, VAR_5);
 while ((VAR_10 = FUNC_5(&VAR_9->l3.squeue))) {
  VAR_9->l3.l3l2(VAR_9, VAR_1 | VAR_4, VAR_10);
  VAR_11++;
 }
 if ((!VAR_9->l3.proc) && VAR_11) {
  if (VAR_9->l3.debug)
   FUNC_3(VAR_9, "lc_connected: release link");
  FUNC_2(&VAR_9->l3.l3m, VAR_3, ((void*)0));
 } else
  FUNC_4(VAR_9, VAR_2 | VAR_0);
}

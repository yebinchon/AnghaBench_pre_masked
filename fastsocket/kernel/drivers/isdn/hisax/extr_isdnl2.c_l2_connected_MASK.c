
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ vs; scalar_t__ va; int (* l2l1 ) (struct PStack*,int,int *) ;int i_queue; int (* l2l3 ) (struct PStack*,int,int *) ;int T203; int t203; scalar_t__ sow; scalar_t__ vr; int flag; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct PStack*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct PStack*,struct sk_buff*) ;
 int FUNC_5 (struct FsmInst*,int,void*) ;
 int FUNC_6 (struct FsmInst*,int,void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct PStack*,int) ;
 int FUNC_10 (struct PStack*,int,int *) ;
 int FUNC_11 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static void
FUNC_13(struct FsmInst *VAR_9, int VAR_10, void *VAR_11)
{
 struct PStack *VAR_12 = VAR_9->userdata;
 struct sk_buff *VAR_13 = VAR_11;
 int VAR_14=-1;

 if (!FUNC_4(VAR_12, VAR_13)) {
  FUNC_6(VAR_9, VAR_10, VAR_11);
  return;
 }
 FUNC_3(VAR_13);

 if (FUNC_12(VAR_4, &VAR_12->l2.flag))
  FUNC_5(VAR_9, VAR_10, VAR_11);

 if (FUNC_12(VAR_3, &VAR_12->l2.flag)) {
  VAR_14 = VAR_1 | VAR_0;
 } else if (VAR_12->l2.vs != VAR_12->l2.va) {
  FUNC_8(&VAR_12->l2.i_queue);
  VAR_14 = VAR_1 | VAR_5;
 }

 FUNC_9(VAR_12, 5);

 VAR_12->l2.vr = 0;
 VAR_12->l2.vs = 0;
 VAR_12->l2.va = 0;
 VAR_12->l2.sow = 0;
 FUNC_1(VAR_9, VAR_8);
 FUNC_0(&VAR_12->l2.t203, VAR_12->l2.T203, VAR_2, ((void*)0), 4);

 if (VAR_14 != -1)
  VAR_12->l2.l2l3(VAR_12, VAR_14, ((void*)0));

 if (!FUNC_7(&VAR_12->l2.i_queue) && FUNC_2(VAR_12))
  VAR_12->l2.l2l1(VAR_12, VAR_6 | VAR_7, ((void*)0));
}

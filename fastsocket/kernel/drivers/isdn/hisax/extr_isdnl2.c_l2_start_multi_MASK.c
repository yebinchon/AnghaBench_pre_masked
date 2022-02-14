
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* l2l3 ) (struct PStack*,int,int *) ;int T203; int t203; scalar_t__ sow; scalar_t__ vr; scalar_t__ va; scalar_t__ vs; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct PStack*,struct sk_buff*) ;
 int FUNC_4 (struct PStack*,int,int ) ;
 int FUNC_5 (struct PStack*,int,int *) ;

__attribute__((used)) static void
FUNC_6(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct PStack *VAR_9 = VAR_6->userdata;
 struct sk_buff *VAR_10 = VAR_8;

 FUNC_4(VAR_9, VAR_5 | FUNC_3(VAR_9, VAR_10), VAR_3);

 FUNC_2(&VAR_9->l2);
 VAR_9->l2.vs = 0;
 VAR_9->l2.va = 0;
 VAR_9->l2.vr = 0;
 VAR_9->l2.sow = 0;
 FUNC_1(VAR_6, VAR_4);
 FUNC_0(&VAR_9->l2.t203, VAR_9->l2.T203, VAR_1, ((void*)0), 3);

 VAR_9->l2.l2l3(VAR_9, VAR_0 | VAR_2, ((void*)0));
}

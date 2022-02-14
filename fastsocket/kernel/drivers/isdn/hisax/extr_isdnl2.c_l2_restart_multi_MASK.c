
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ vs; scalar_t__ va; int (* l2l1 ) (struct PStack*,int,int *) ;int i_queue; int (* l2l3 ) (struct PStack*,int,int *) ;int T203; int t203; scalar_t__ sow; scalar_t__ vr; } ;
struct TYPE_3__ {int (* layer ) (struct PStack*,int,void*) ;} ;
struct PStack {TYPE_2__ l2; TYPE_1__ ma; } ;
struct FsmInst {int state; struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct FsmInst*,int) ;
 int FUNC_1 (int *,int ,int ,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct PStack*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct PStack*,struct sk_buff*) ;
 int FUNC_5 (struct PStack*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct PStack*,int) ;
 int FUNC_9 (struct PStack*,int,void*) ;
 int FUNC_10 (struct PStack*,int,int *) ;
 int FUNC_11 (struct PStack*,int,int *) ;

__attribute__((used)) static void
FUNC_12(struct FsmInst *VAR_10, int VAR_11, void *VAR_12)
{
 struct PStack *VAR_13 = VAR_10->userdata;
 struct sk_buff *VAR_14 = VAR_12;
 int VAR_15 = 0, VAR_16;

 VAR_16 = VAR_10->state;

 FUNC_5(VAR_13, VAR_9 | FUNC_4(VAR_13, VAR_14), VAR_6);

 VAR_13->ma.layer(VAR_13, VAR_3 | VAR_2, (void *) 'F');

 if (VAR_13->l2.vs != VAR_13->l2.va) {
  FUNC_7(&VAR_13->l2.i_queue);
  VAR_15 = 1;
 }

 FUNC_3(&VAR_13->l2);
 VAR_13->l2.vs = 0;
 VAR_13->l2.va = 0;
 VAR_13->l2.vr = 0;
 VAR_13->l2.sow = 0;
 FUNC_0(VAR_10, VAR_7);
 FUNC_8(VAR_13, 3);
 FUNC_1(&VAR_13->l2.t203, VAR_13->l2.T203, VAR_1, ((void*)0), 3);

 if (VAR_15)
  VAR_13->l2.l2l3(VAR_13, VAR_0 | VAR_2, ((void*)0));

 if ((VAR_7==VAR_16) || (VAR_8 == VAR_16))
  if (!FUNC_6(&VAR_13->l2.i_queue) && FUNC_2(VAR_13))
   VAR_13->l2.l2l1(VAR_13, VAR_4 | VAR_5, ((void*)0));
}

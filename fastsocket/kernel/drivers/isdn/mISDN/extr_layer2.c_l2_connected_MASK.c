
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {scalar_t__ vs; scalar_t__ va; scalar_t__ tm; int i_queue; int T203; int t203; scalar_t__ sow; scalar_t__ vr; int flag; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct layer2*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct layer2*,struct sk_buff*) ;
 int FUNC_3 (struct FsmInst*,int,int *) ;
 int FUNC_4 (struct FsmInst*,int,void*) ;
 int FUNC_5 (struct layer2*,int ,int ) ;
 int FUNC_6 (struct layer2*,int,int ,int *) ;
 int FUNC_7 (int *,int ,int ,int *,int) ;
 int FUNC_8 (struct FsmInst*,int ) ;
 int FUNC_9 (struct FsmInst*,int ,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct layer2*,int) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static void
FUNC_14(struct FsmInst *VAR_8, int VAR_9, void *VAR_10)
{
 struct layer2 *VAR_11 = VAR_8->userdata;
 struct sk_buff *VAR_12 = VAR_10;
 int VAR_13 = -1;

 if (!FUNC_2(VAR_11, VAR_12)) {
  FUNC_4(VAR_8, VAR_9, VAR_10);
  return;
 }
 FUNC_1(VAR_12);
 if (FUNC_13(VAR_5, &VAR_11->flag))
  FUNC_3(VAR_8, VAR_9, ((void*)0));
 if (FUNC_13(VAR_4, &VAR_11->flag)) {
  VAR_13 = VAR_0;
 } else if (VAR_11->vs != VAR_11->va) {
  FUNC_11(&VAR_11->i_queue);
  VAR_13 = VAR_1;
 }
 FUNC_12(VAR_11, 5);
 VAR_11->vr = 0;
 VAR_11->vs = 0;
 VAR_11->va = 0;
 VAR_11->sow = 0;
 FUNC_8(VAR_8, VAR_7);
 FUNC_7(&VAR_11->t203, VAR_11->T203, VAR_3, ((void*)0), 4);
 if (VAR_13 != -1)
  FUNC_6(VAR_11, VAR_13, 0, ((void*)0));

 if (FUNC_10(&VAR_11->i_queue) && FUNC_0(VAR_11))
  FUNC_9(VAR_8, VAR_2, ((void*)0));

 if (VAR_11->tm)
  FUNC_5(VAR_11, VAR_6, 0);
}

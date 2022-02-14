
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {scalar_t__ tm; int T203; int t203; scalar_t__ sow; scalar_t__ vr; scalar_t__ va; scalar_t__ vs; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct layer2*) ;
 int FUNC_1 (struct layer2*,struct sk_buff*) ;
 int FUNC_2 (struct layer2*,int ,int ) ;
 int FUNC_3 (struct layer2*,int ,struct sk_buff*) ;
 int FUNC_4 (int *,int ,int ,int *,int) ;
 int FUNC_5 (struct FsmInst*,int ) ;
 int FUNC_6 (struct layer2*,int *,int,int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static void
FUNC_8(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct layer2 *VAR_9 = VAR_6->userdata;
 struct sk_buff *VAR_10 = VAR_8;

 VAR_9->vs = 0;
 VAR_9->va = 0;
 VAR_9->vr = 0;
 VAR_9->sow = 0;
 FUNC_0(VAR_9);
 FUNC_6(VAR_9, ((void*)0), VAR_5 | FUNC_1(VAR_9, VAR_10), VAR_3);
 FUNC_5(VAR_6, VAR_4);
 FUNC_4(&VAR_9->t203, VAR_9->T203, VAR_1, ((void*)0), 3);
 FUNC_7(VAR_10, 0);
 FUNC_3(VAR_9, VAR_0, VAR_10);
 if (VAR_9->tm)
  FUNC_2(VAR_9, VAR_2, 0);
}

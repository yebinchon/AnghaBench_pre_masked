
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* l2l1 ) (struct PStack*,int,int *) ;int flag; int i_queue; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct PStack*,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct PStack*) ;
 int FUNC_4 (struct PStack*,int) ;
 int FUNC_5 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_5, int VAR_6, void *VAR_7)
{
 struct PStack *VAR_8 = VAR_5->userdata;
 struct sk_buff *VAR_9 = VAR_7;

 if (FUNC_1(VAR_8, VAR_9)) {
  FUNC_4(VAR_8, 7);
   if (!FUNC_6(VAR_0, &VAR_8->l2.flag))
   FUNC_2(&VAR_8->l2.i_queue);
  if (FUNC_6(VAR_1, &VAR_8->l2.flag))
   VAR_8->l2.l2l1(VAR_8, VAR_2 | VAR_3, ((void*)0));
  FUNC_3(VAR_8);
  FUNC_0(VAR_5, VAR_4);
 }
}

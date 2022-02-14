
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int flag; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*) ;
 int FUNC_1 (struct PStack*,struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_1, int VAR_2, void *VAR_3)
{
 struct PStack *VAR_4 = VAR_1->userdata;
 struct sk_buff *VAR_5 = VAR_3;

 if (!FUNC_1(VAR_4, VAR_5)) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_0, &VAR_4->l2.flag);
 }
}

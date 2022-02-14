
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int ui_queue; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int FUNC_0 (int *,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_1(struct FsmInst *VAR_0, int VAR_1, void *VAR_2)
{
 struct PStack *VAR_3 = VAR_0->userdata;
 struct sk_buff *VAR_4 = VAR_2;

 FUNC_0(&VAR_3->l2.ui_queue, VAR_4);
}

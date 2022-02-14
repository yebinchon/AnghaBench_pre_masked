
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ui_queue; int i_queue; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct PStack*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct PStack*) ;
 int FUNC_4 (struct PStack*,int) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_1, int VAR_2, void *VAR_3)
{
 struct PStack *VAR_4 = VAR_1->userdata;

 FUNC_2(&VAR_4->l2.i_queue);
 FUNC_2(&VAR_4->l2.ui_queue);
 FUNC_1(VAR_4);
 FUNC_4(VAR_4, 19);
 FUNC_3(VAR_4);
 FUNC_0(VAR_1, VAR_0);
}

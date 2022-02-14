
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tei; int ui_queue; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_1, int VAR_2, void *VAR_3)
{
 struct PStack *VAR_4 = VAR_1->userdata;

 FUNC_1(&VAR_4->l2.ui_queue);
 VAR_4->l2.tei = -1;
 FUNC_0(VAR_1, VAR_0);
}

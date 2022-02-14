
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long tei; int ui_queue; int flag; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {scalar_t__ state; struct PStack* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct FsmInst*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct PStack*) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct PStack *VAR_6 = VAR_3->userdata;

 VAR_6->l2.tei = (long) VAR_5;

 if (VAR_3->state == VAR_1) {
  FUNC_1(VAR_3);
  FUNC_3(VAR_0, &VAR_6->l2.flag);
 } else
  FUNC_0(VAR_3, VAR_2);
 if (!FUNC_2(&VAR_6->l2.ui_queue))
  FUNC_4(VAR_6);
}

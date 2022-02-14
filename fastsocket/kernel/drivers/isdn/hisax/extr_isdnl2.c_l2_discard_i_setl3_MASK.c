
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; int i_queue; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct PStack *VAR_5 = VAR_2->userdata;

 FUNC_0(&VAR_5->l2.i_queue);
 FUNC_2(VAR_0, &VAR_5->l2.flag);
 FUNC_1(VAR_1, &VAR_5->l2.flag);
}

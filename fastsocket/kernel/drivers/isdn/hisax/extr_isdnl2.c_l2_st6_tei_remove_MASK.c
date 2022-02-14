
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tei; int (* l2l3 ) (struct PStack*,int,int *) ;int ui_queue; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct PStack*,int) ;
 int FUNC_3 (struct PStack*,int,int *) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct PStack *VAR_6 = VAR_3->userdata;

 FUNC_1(&VAR_6->l2.ui_queue);
 VAR_6->l2.tei = -1;
 FUNC_2(VAR_6, 18);
 VAR_6->l2.l2l3(VAR_6, VAR_1 | VAR_0, ((void*)0));
 FUNC_0(VAR_3, VAR_2);
}

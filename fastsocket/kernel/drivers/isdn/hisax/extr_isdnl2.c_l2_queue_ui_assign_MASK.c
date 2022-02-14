
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* l2tei ) (struct PStack*,int,int *) ;int ui_queue; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct PStack*,int,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct PStack *VAR_6 = VAR_3->userdata;
 struct sk_buff *VAR_7 = VAR_5;

 FUNC_1(&VAR_6->l2.ui_queue, VAR_7);
 FUNC_0(VAR_3, VAR_2);
 VAR_6->l2.l2tei(VAR_6, VAR_1 | VAR_0, ((void*)0));
}

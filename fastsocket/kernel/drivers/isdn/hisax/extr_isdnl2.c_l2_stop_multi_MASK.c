
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int i_queue; int t203; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct PStack*) ;
 int FUNC_3 (struct PStack*,struct sk_buff*) ;
 int FUNC_4 (struct PStack*,int ) ;
 int FUNC_5 (struct PStack*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct PStack*,int) ;

__attribute__((used)) static void
FUNC_8(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct PStack *VAR_7 = VAR_4->userdata;
 struct sk_buff *VAR_8 = VAR_6;

 FUNC_0(VAR_4, VAR_2);
 FUNC_1(&VAR_7->l2.t203, 3);
 FUNC_7(VAR_7, 4);

 FUNC_5(VAR_7, VAR_3 | FUNC_3(VAR_7, VAR_8), VAR_1);

 FUNC_6(&VAR_7->l2.i_queue);
 FUNC_2(VAR_7);
 FUNC_4(VAR_7, VAR_0);
}

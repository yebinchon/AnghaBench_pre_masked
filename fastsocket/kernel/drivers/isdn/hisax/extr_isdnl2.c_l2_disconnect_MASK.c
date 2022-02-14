
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int t203; scalar_t__ rc; int i_queue; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (struct PStack*) ;
 int FUNC_3 (struct PStack*,int) ;
 int FUNC_4 (struct PStack*,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct PStack *VAR_6 = VAR_3->userdata;

 FUNC_5(&VAR_6->l2.i_queue);
 FUNC_2(VAR_6);
 FUNC_0(VAR_3, VAR_2);
 VAR_6->l2.rc = 0;
 FUNC_4(VAR_6, VAR_1 | 0x10, VAR_0);
 FUNC_1(&VAR_6->l2.t203, 1);
 FUNC_3(VAR_6, 2);
}

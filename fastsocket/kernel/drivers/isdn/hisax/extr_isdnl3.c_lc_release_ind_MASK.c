
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int squeue; int l3m_timer; } ;
struct PStack {TYPE_1__ l3; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct PStack*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct PStack *VAR_6 = VAR_3->userdata;

 FUNC_1(&VAR_6->l3.l3m_timer, 52);
 FUNC_0(VAR_3, VAR_2);
 FUNC_3(&VAR_6->l3.squeue);
 FUNC_2(VAR_6, VAR_0 | VAR_1);
}

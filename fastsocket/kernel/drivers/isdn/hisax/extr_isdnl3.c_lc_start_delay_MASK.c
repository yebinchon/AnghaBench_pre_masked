
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int l3m_timer; } ;
struct PStack {TYPE_1__ l3; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
       struct PStack *VAR_6 = VAR_3->userdata;

       FUNC_1(VAR_3, VAR_2);
       FUNC_0(&VAR_6->l3.l3m_timer, VAR_0, VAR_1, ((void*)0), 50);
}

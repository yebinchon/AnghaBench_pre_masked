
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int squeue; int l3m_timer; int * global; scalar_t__ proc; } ;
struct PStack {TYPE_1__ l3; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct PStack *VAR_0)
{
 while (VAR_0->l3.proc)
  FUNC_3(VAR_0->l3.proc);
 if (VAR_0->l3.global) {
  FUNC_1(VAR_0->l3.global);
  FUNC_2(VAR_0->l3.global);
  VAR_0->l3.global = ((void*)0);
 }
 FUNC_0(&VAR_0->l3.l3m_timer, 54);
 FUNC_4(&VAR_0->l3.squeue);
}

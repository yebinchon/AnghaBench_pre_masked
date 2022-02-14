
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {struct mptsub* t_mpsub; } ;
struct mptsub {int mpts_flags; } ;


 int VAR_0 ;

void
FUNC_0(struct tcpcb *VAR_1)
{
 struct mptsub *VAR_2 = VAR_1->t_mpsub;

 VAR_2->mpts_flags &= ~VAR_0;
}

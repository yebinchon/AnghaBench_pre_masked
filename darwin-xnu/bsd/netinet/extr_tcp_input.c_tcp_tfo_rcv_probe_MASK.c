
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int * t_timer; int t_tfo_probe_state; } ;


 int FUNC_0 (struct tcpcb*,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct tcpcb*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_2, int VAR_3)
{
 if (VAR_3 != 0)
  return;

 VAR_2->t_tfo_probe_state = VAR_1;





 VAR_2->t_timer[VAR_0] = FUNC_0(VAR_2, (FUNC_1(VAR_2)));
}

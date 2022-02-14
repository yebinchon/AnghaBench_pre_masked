
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_tfo_probe_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct tcpcb *VAR_2)
{

 if (VAR_2->t_tfo_probe_state >= VAR_1)
  VAR_2->t_tfo_probe_state = VAR_0;
}

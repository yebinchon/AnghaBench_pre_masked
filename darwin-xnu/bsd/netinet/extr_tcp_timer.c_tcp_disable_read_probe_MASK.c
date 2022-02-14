
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_adaptive_rtimo; int t_flagsext; scalar_t__ t_rtimo_probes; scalar_t__ t_mpsub; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (struct tcpcb*) ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_1)
{
 if (VAR_1->t_adaptive_rtimo == 0 &&
     ((VAR_1->t_flagsext & VAR_0) ||
     VAR_1->t_rtimo_probes > 0)) {
  FUNC_1(VAR_1);

  if (VAR_1->t_mpsub)
   FUNC_0(VAR_1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_long ;
struct TYPE_2__ {scalar_t__ t_start; scalar_t__ t_stop; scalar_t__ timer_activ; } ;
struct s_smc {TYPE_1__ hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct s_smc*) ;
 int FUNC_3 (struct s_smc*) ;
 int FUNC_4 (int ) ;

u_long FUNC_5(struct s_smc *VAR_2)
{
 u_short VAR_3 ;
 u_long VAR_4 ;

 if (VAR_2->hw.timer_activ) {
  FUNC_3(VAR_2) ;
  VAR_3 = (u_short)((FUNC_4(FUNC_0(VAR_0))/200) & 0xffff) ;

  VAR_4 = FUNC_1() ;

  if ((VAR_3 > VAR_2->hw.t_start) || (VAR_4 & VAR_1)) {
   FUNC_2(VAR_2) ;
   VAR_2->hw.t_stop = VAR_2->hw.t_start ;
  }
  else
   VAR_2->hw.t_stop = VAR_2->hw.t_start - VAR_3 ;
 }
 return (VAR_2->hw.t_stop) ;
}

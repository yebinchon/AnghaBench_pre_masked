
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef scalar_t__ u_long ;
struct TYPE_2__ {long t_stop; int timer_activ; scalar_t__ t_start; } ;
struct s_smc {TYPE_1__ hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct s_smc *VAR_5, u_long VAR_6)
{
 u_short VAR_7 ;

 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2 ;

 VAR_5->hw.t_start = VAR_6 ;
 VAR_5->hw.t_stop = 0L ;

 VAR_7 = (u_short)VAR_6 ;




 if (!VAR_7)
  VAR_7++ ;

 FUNC_1(FUNC_0(VAR_1), (u_long) VAR_7 * 200) ;
 FUNC_2(FUNC_0(VAR_0), VAR_3) ;

 VAR_5->hw.timer_activ = VAR_4 ;
}

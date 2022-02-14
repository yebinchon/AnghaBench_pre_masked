
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_5__ {int * rx; TYPE_1__* tx_q; int * tx; } ;
struct TYPE_6__ {scalar_t__ hw_state; TYPE_2__ fp; } ;
struct s_smc {TYPE_3__ hw; } ;
struct TYPE_4__ {scalar_t__ tx_used; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 (struct s_smc*,int ,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct s_smc*,int ) ;
 int FUNC_5 (struct s_smc*,int ) ;

void FUNC_6(struct s_smc *VAR_13)
{
 u_long VAR_14 ;

 if (VAR_13->hw.hw_state != VAR_12) {
  FUNC_1() ;
  FUNC_2(VAR_13,VAR_7,VAR_8) ;
  return ;
 }




 VAR_14 = FUNC_5(VAR_13,VAR_13->hw.fp.tx[VAR_9]) ;
 FUNC_3(FUNC_0(VAR_4),VAR_14) ;
 if (VAR_13->hw.fp.tx_q[VAR_9].tx_used) {
  FUNC_3(FUNC_0(VAR_1),VAR_6) ;
 }
 VAR_14 = FUNC_5(VAR_13,VAR_13->hw.fp.tx[VAR_11]) ;
 FUNC_3(FUNC_0(VAR_5),VAR_14) ;
 if (VAR_13->hw.fp.tx_q[VAR_11].tx_used) {
  FUNC_3(FUNC_0(VAR_2),VAR_6) ;
 }




 VAR_14 = FUNC_4(VAR_13,VAR_13->hw.fp.rx[VAR_10]) ;
 FUNC_3(FUNC_0(VAR_3),VAR_14) ;
 FUNC_3(FUNC_0(VAR_0),VAR_6) ;
}

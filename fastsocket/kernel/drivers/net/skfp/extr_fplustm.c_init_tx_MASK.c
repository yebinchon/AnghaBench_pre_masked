
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s_smt_tx_queue {void* tx_bmu_dsc; void* tx_bmu_ctl; } ;
struct TYPE_5__ {struct s_smt_tx_queue* tx_q; struct s_smt_tx_queue** tx; } ;
struct TYPE_6__ {TYPE_2__ fp; } ;
struct TYPE_4__ {int sync_bw; } ;
struct s_smc {TYPE_3__ hw; TYPE_1__ ess; } ;
typedef void* HW_PTR ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct s_smc*) ;
 int FUNC_2 (struct s_smc*,int ) ;

__attribute__((used)) static void FUNC_3(struct s_smc *VAR_6)
{
 struct s_smt_tx_queue *VAR_7 ;




 VAR_6->hw.fp.tx[VAR_5] = VAR_7 = &VAR_6->hw.fp.tx_q[VAR_5] ;
 VAR_7->tx_bmu_ctl = (HW_PTR) FUNC_0(VAR_1) ;
 VAR_7->tx_bmu_dsc = (HW_PTR) FUNC_0(VAR_3) ;
 VAR_6->hw.fp.tx[VAR_4] = VAR_7 = &VAR_6->hw.fp.tx_q[VAR_4] ;
 VAR_7->tx_bmu_ctl = (HW_PTR) FUNC_0(VAR_0) ;
 VAR_7->tx_bmu_dsc = (HW_PTR) FUNC_0(VAR_2) ;


 FUNC_1(VAR_6) ;
}

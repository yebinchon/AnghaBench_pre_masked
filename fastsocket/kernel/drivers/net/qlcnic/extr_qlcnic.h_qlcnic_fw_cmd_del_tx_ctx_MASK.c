
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_host_tx_ring {int dummy; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {void (* del_tx_ctx ) (struct qlcnic_adapter*,struct qlcnic_host_tx_ring*) ;} ;


 void FUNC_0 (struct qlcnic_adapter*,struct qlcnic_host_tx_ring*) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_0,
         struct qlcnic_host_tx_ring *VAR_1)
{
 return VAR_0->ahw->hw_ops->del_tx_ctx(VAR_0, VAR_1);
}

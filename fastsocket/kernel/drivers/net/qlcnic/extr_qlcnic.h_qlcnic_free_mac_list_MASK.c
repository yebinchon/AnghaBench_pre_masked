
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {void (* free_mac_list ) (struct qlcnic_adapter*) ;} ;


 void FUNC_0 (struct qlcnic_adapter*) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_0)
{
 return VAR_0->ahw->hw_ops->free_mac_list(VAR_0);
}

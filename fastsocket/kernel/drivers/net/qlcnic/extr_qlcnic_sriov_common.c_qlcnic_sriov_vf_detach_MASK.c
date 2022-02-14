
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct qlcnic_intrpt_config {size_t id; scalar_t__ src; scalar_t__ enabled; } ;
struct qlcnic_hardware_context {size_t num_msix; scalar_t__ reset_context; struct qlcnic_intrpt_config* intr_tbl; } ;
struct qlcnic_adapter {struct net_device* netdev; struct qlcnic_hardware_context* ahw; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_adapter *VAR_0)
{
 struct qlcnic_hardware_context *VAR_1 = VAR_0->ahw;
 struct qlcnic_intrpt_config *VAR_2 = VAR_1->intr_tbl;
 struct net_device *VAR_3 = VAR_0->netdev;
 u8 VAR_4, VAR_5 = VAR_1->num_msix - 1;

 FUNC_2(VAR_0);
 FUNC_0(VAR_3);
 if (FUNC_1(VAR_3))
  FUNC_3(VAR_0, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_2[VAR_4].id = VAR_4;
  VAR_2[VAR_4].enabled = 0;
  VAR_2[VAR_4].src = 0;
 }
 VAR_1->reset_context = 0;
}

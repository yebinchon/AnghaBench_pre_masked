
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_back_channel {int dummy; } ;
struct qlcnic_adapter {scalar_t__ need_fw_reset; TYPE_2__* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sriov; } ;
struct TYPE_3__ {struct qlcnic_back_channel bc; } ;


 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct qlcnic_back_channel*,int ,struct net_device*) ;

void FUNC_2(struct net_device *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_0(VAR_1);
 struct qlcnic_back_channel *VAR_3 = &VAR_2->ahw->sriov->bc;

 if (VAR_2->need_fw_reset)
  return;

 FUNC_1(VAR_3, VAR_0,
         VAR_1);
}

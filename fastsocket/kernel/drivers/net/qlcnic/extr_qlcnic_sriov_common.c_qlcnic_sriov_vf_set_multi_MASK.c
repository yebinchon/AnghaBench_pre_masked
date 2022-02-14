
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_adapter {TYPE_2__* ahw; int state; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sriov; } ;
struct TYPE_3__ {int vlan; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_1(VAR_1);
 u16 VAR_3;

 if (!FUNC_2(VAR_0, &VAR_2->state))
  return;

 VAR_3 = VAR_2->ahw->sriov->vlan;
 FUNC_0(VAR_1, VAR_3);
}

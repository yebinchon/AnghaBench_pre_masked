
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int pci_func; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

__attribute__((used)) static u32 FUNC_5(struct net_device *VAR_2)
{
 struct qlcnic_adapter *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 if (FUNC_3(VAR_3)) {
  VAR_4 = FUNC_4(VAR_3);
  return (VAR_4 & 1) ? 0 : 1;
 }
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 = FUNC_1(VAR_3->ahw->pci_func, VAR_4);
 return (VAR_4 == VAR_1) ? 0 : 1;
}

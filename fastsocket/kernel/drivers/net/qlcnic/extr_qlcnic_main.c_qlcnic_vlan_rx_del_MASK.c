
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qlcnic_adapter {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*,int ,int) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int ) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, u16 VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 if (FUNC_3(VAR_2)) {
  VAR_3 = FUNC_2(VAR_2, VAR_1, 0);
  if (VAR_3) {
   FUNC_0(VAR_0,
       "Cannot delete VLAN filter for VLAN id %d, err=%d",
       VAR_1, VAR_3);
   return;
  }
 }
}

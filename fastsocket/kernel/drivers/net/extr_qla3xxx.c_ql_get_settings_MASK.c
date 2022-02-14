
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int PHYAddr; int flags; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int duplex; int speed; int autoneg; void* advertising; int phy_address; int port; void* supported; int transceiver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ql3_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql3_adapter*) ;
 int FUNC_2 (struct ql3_adapter*) ;
 int FUNC_3 (struct ql3_adapter*) ;
 void* FUNC_4 (struct ql3_adapter*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, struct ethtool_cmd *VAR_5)
{
 struct ql3_adapter *VAR_6 = FUNC_0(VAR_4);

 VAR_5->transceiver = VAR_3;
 VAR_5->supported = FUNC_4(VAR_6);

 if (FUNC_5(VAR_2,&VAR_6->flags)) {
  VAR_5->port = VAR_0;
 } else {
  VAR_5->port = VAR_1;
  VAR_5->phy_address = VAR_6->PHYAddr;
 }
 VAR_5->advertising = FUNC_4(VAR_6);
 VAR_5->autoneg = FUNC_1(VAR_6);
 VAR_5->speed = FUNC_3(VAR_6);
 VAR_5->duplex = FUNC_2(VAR_6);
 return 0;
}

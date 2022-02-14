
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

 int FUNC_1 (struct bnx2x*,struct ethtool_rxnfc*) ;
 struct bnx2x* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ethtool_rxnfc *VAR_3)
{
 struct bnx2x *VAR_4 = FUNC_2(VAR_2);

 switch (VAR_3->cmd) {
 case 128:
  return FUNC_1(VAR_4, VAR_3);
 default:
  FUNC_0(VAR_0, "Command parameters not supported\n");
  return -VAR_1;
 }
}

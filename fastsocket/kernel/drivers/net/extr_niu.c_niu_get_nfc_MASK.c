
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct niu {int num_rx_rings; } ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int rule_cnt; int data; } ;


 int VAR_0 ;





 struct niu* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct niu*,struct ethtool_rxnfc*,int *) ;
 int FUNC_2 (struct niu*,struct ethtool_rxnfc*) ;
 int FUNC_3 (struct niu*,struct ethtool_rxnfc*) ;
 int FUNC_4 (struct niu*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2,
         void *VAR_3)
{
 struct niu *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;

 switch (VAR_2->cmd) {
 case 129:
  VAR_5 = FUNC_3(VAR_4, VAR_2);
  break;
 case 128:
  VAR_2->data = VAR_4->num_rx_rings;
  break;
 case 131:
  VAR_2->rule_cnt = FUNC_4(VAR_4);
  break;
 case 130:
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  break;
 case 132:
  VAR_5 = FUNC_1(VAR_4, VAR_2, (u32 *)VAR_3);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}

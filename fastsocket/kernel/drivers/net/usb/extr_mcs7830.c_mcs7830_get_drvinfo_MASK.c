
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int regdump_len; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct ethtool_drvinfo*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, struct ethtool_drvinfo *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 VAR_1->regdump_len = FUNC_0(VAR_0);
}

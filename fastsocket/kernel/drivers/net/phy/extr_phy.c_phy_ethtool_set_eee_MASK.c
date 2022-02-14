
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int addr; int bus; } ;
struct ethtool_eee {int advertised; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;

int FUNC_2(struct phy_device *VAR_2, struct ethtool_eee *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->advertised);
 FUNC_1(VAR_2->bus, VAR_0, VAR_1,
          VAR_2->addr, VAR_4);

 return 0;
}

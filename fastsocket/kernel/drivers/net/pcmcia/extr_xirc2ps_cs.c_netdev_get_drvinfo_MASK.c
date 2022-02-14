
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;
struct ethtool_drvinfo {int bus_info; int driver; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
          struct ethtool_drvinfo *VAR_1)
{
 FUNC_1(VAR_1->driver, "xirc2ps_cs");
 FUNC_0(VAR_1->bus_info, "PCMCIA 0x%lx", VAR_0->base_addr);
}

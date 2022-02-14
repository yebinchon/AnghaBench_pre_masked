
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {scalar_t__ wolenabled; int wolopts; struct mac_device_info* mac_type; scalar_t__ is_gmac; } ;
struct net_device {unsigned long base_addr; } ;
struct TYPE_2__ {scalar_t__ pmt; } ;
struct mac_device_info {TYPE_1__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct mac_device_info* FUNC_0 (unsigned long) ;
 struct mac_device_info* FUNC_1 (unsigned long) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3)
{
 struct stmmac_priv *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5 = VAR_3->base_addr;

 struct mac_device_info *VAR_6;

 if (VAR_4->is_gmac)
  VAR_6 = FUNC_0(VAR_5);
 else
  VAR_6 = FUNC_1(VAR_5);

 if (!VAR_6)
  return -VAR_0;

 VAR_4->mac_type = VAR_6;

 VAR_4->wolenabled = VAR_4->mac_type->hw.pmt;
 if (VAR_4->wolenabled == VAR_1)
  VAR_4->wolopts = VAR_2;

 return 0;
}

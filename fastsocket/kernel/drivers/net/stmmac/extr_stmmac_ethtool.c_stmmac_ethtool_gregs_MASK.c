
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmmac_priv {int is_gmac; } ;
struct net_device {scalar_t__ base_addr; } ;
struct ethtool_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct net_device *VAR_4,
     struct ethtool_regs *VAR_5, void *VAR_6)
{
 int VAR_7;
 u32 *VAR_8 = (u32 *) VAR_6;

 struct stmmac_priv *VAR_9 = FUNC_1(VAR_4);

 FUNC_0(VAR_8, 0x0, VAR_3);

 if (!VAR_9->is_gmac) {

  for (VAR_7 = 0; VAR_7 < 12; VAR_7++)
   VAR_8[VAR_7] = FUNC_2(VAR_4->base_addr + (VAR_7 * 4));

  for (VAR_7 = 0; VAR_7 < 9; VAR_7++)
   VAR_8[VAR_7 + 12] =
       FUNC_2(VAR_4->base_addr + (VAR_0 + (VAR_7 * 4)));
  VAR_8[22] = FUNC_2(VAR_4->base_addr + VAR_2);
  VAR_8[23] = FUNC_2(VAR_4->base_addr + VAR_1);
 } else {

  for (VAR_7 = 0; VAR_7 < 55; VAR_7++)
   VAR_8[VAR_7] = FUNC_2(VAR_4->base_addr + (VAR_7 * 4));

  for (VAR_7 = 0; VAR_7 < 22; VAR_7++)
   VAR_8[VAR_7 + 55] =
       FUNC_2(VAR_4->base_addr + (VAR_0 + (VAR_7 * 4)));
 }

 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct stmmac_priv {TYPE_3__* mac_type; } ;
struct net_device {unsigned long base_addr; } ;
struct mii_bus {struct net_device* priv; } ;
struct TYPE_4__ {unsigned int addr; unsigned int data; } ;
struct TYPE_5__ {TYPE_1__ mii; } ;
struct TYPE_6__ {TYPE_2__ hw; } ;


 int VAR_0 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = VAR_1->priv;
 struct stmmac_priv *VAR_5 = FUNC_0(VAR_4);
 unsigned long VAR_6 = VAR_4->base_addr;
 unsigned int VAR_7 = VAR_5->mac_type->hw.mii.addr;
 unsigned int VAR_8 = VAR_5->mac_type->hw.mii.data;

 int VAR_9;
 u16 VAR_10 = (((VAR_2 << 11) & (0x0000F800)) |
   ((VAR_3 << 6) & (0x000007C0)));
 VAR_10 |= VAR_0;

 do {} while (((FUNC_1(VAR_6 + VAR_7)) & VAR_0) == 1);
 FUNC_2(VAR_10, VAR_6 + VAR_7);
 do {} while (((FUNC_1(VAR_6 + VAR_7)) & VAR_0) == 1);


 VAR_9 = (int)FUNC_1(VAR_6 + VAR_8);

 return VAR_9;
}

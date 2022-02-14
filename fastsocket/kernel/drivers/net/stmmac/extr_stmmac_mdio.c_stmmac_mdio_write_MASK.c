
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
 int VAR_1 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_2, int VAR_3, int VAR_4,
        u16 VAR_5)
{
 struct net_device *VAR_6 = VAR_2->priv;
 struct stmmac_priv *VAR_7 = FUNC_0(VAR_6);
 unsigned long VAR_8 = VAR_6->base_addr;
 unsigned int VAR_9 = VAR_7->mac_type->hw.mii.addr;
 unsigned int VAR_10 = VAR_7->mac_type->hw.mii.data;

 u16 VAR_11 =
     (((VAR_3 << 11) & (0x0000F800)) | ((VAR_4 << 6) & (0x000007C0)))
     | VAR_1;

 VAR_11 |= VAR_0;


 do {} while (((FUNC_1(VAR_8 + VAR_9)) & VAR_0) == 1);


 FUNC_2(VAR_5, VAR_8 + VAR_10);
 FUNC_2(VAR_11, VAR_8 + VAR_9);


 do {} while (((FUNC_1(VAR_8 + VAR_9)) & VAR_0) == 1);

 return 0;
}

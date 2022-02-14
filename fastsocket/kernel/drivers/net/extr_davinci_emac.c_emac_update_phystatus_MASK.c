
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct emac_priv {int duplex; scalar_t__ speed; scalar_t__ version; scalar_t__ link; scalar_t__ rmii_en; TYPE_1__* phydev; scalar_t__ phy_mask; struct net_device* ndev; } ;
struct TYPE_2__ {int duplex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct emac_priv *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 struct net_device *VAR_14 = VAR_10->ndev;

 VAR_11 = FUNC_0(VAR_4);
 VAR_13 = (VAR_11 & VAR_5) ?
   VAR_0 : VAR_1;
 if (VAR_10->phy_mask)
  VAR_12 = VAR_10->phydev->duplex;
 else
  VAR_12 = VAR_0;


 if ((VAR_10->link) && (VAR_12 != VAR_13)) {
  VAR_10->duplex = VAR_12;
  if (VAR_0 == VAR_10->duplex)
   VAR_11 |= (VAR_5);
  else
   VAR_11 &= ~(VAR_5);
 }

 if (VAR_10->speed == VAR_9 && (VAR_10->version == VAR_7)) {
  VAR_11 = FUNC_0(VAR_4);
  VAR_11 |= (VAR_2 |
    VAR_3);
 } else {

  VAR_11 &= ~(VAR_3 |
     VAR_2);

  if (VAR_10->rmii_en && (VAR_10->speed == VAR_8))
   VAR_11 |= VAR_6;
  else
   VAR_11 &= ~VAR_6;
 }


 FUNC_1(VAR_4, VAR_11);

 if (VAR_10->link) {

  if (!FUNC_3(VAR_14))
   FUNC_4(VAR_14);

  if (FUNC_6(VAR_14) && FUNC_5(VAR_14))
   FUNC_8(VAR_14);
 } else {

  if (FUNC_3(VAR_14))
   FUNC_2(VAR_14);
  if (!FUNC_5(VAR_14))
   FUNC_7(VAR_14);
 }
}

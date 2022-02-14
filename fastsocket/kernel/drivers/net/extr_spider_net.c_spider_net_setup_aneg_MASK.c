
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mii_phy {TYPE_2__* def; int mii_id; } ;
struct spider_net_card {int netdev; struct mii_phy phy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* setup_aneg ) (struct mii_phy*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mii_phy*,int ) ;

__attribute__((used)) static void
FUNC_3(struct spider_net_card *VAR_15)
{
 struct mii_phy *VAR_16 = &VAR_15->phy;
 u32 VAR_17 = 0;
 u16 VAR_18, VAR_19;

 VAR_18 = FUNC_1(VAR_15->netdev, VAR_16->mii_id, VAR_11);
 VAR_19 = FUNC_1(VAR_15->netdev, VAR_16->mii_id, VAR_12);

 if (VAR_18 & VAR_7)
  VAR_17 |= VAR_3;
 if (VAR_18 & VAR_6)
  VAR_17 |= VAR_2;
 if (VAR_18 & VAR_5)
  VAR_17 |= VAR_1;
 if (VAR_18 & VAR_4)
  VAR_17 |= VAR_0;

 if ((VAR_18 & VAR_8) && (VAR_19 & VAR_9))
  VAR_17 |= VAR_13;
 if ((VAR_18 & VAR_8) && (VAR_19 & VAR_10))
  VAR_17 |= VAR_14;

 FUNC_0(VAR_16, VAR_16->mii_id);
 VAR_16->def->ops->setup_aneg(VAR_16, VAR_17);

}

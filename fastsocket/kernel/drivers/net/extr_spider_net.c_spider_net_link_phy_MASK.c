
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mii_phy {int speed; int duplex; int autoneg; TYPE_2__* def; } ;
struct spider_net_card {scalar_t__ aneg_count; int medium; TYPE_3__* netdev; int aneg_timer; struct mii_phy phy; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* read_link ) (struct mii_phy*) ;int (* poll_link ) (struct mii_phy*) ;int (* enable_fiber ) (struct mii_phy*,int) ;} ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int,char*,char*) ;
 int FUNC_3 (struct spider_net_card*,int ) ;
 int FUNC_4 (struct spider_net_card*) ;
 int FUNC_5 (struct spider_net_card*,int ,int) ;
 int FUNC_6 (struct mii_phy*,int) ;
 int FUNC_7 (struct mii_phy*,int) ;
 int FUNC_8 (struct mii_phy*) ;
 int FUNC_9 (struct mii_phy*) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_6)
{
 struct spider_net_card *VAR_7 = (struct spider_net_card *)VAR_6;
 struct mii_phy *VAR_8 = &VAR_7->phy;


 if (VAR_7->aneg_count > VAR_0) {

  FUNC_1("%s: link is down trying to bring it up\n",
    VAR_7->netdev->name);

  switch (VAR_7->medium) {
  case 130:

   if (VAR_8->def->ops->enable_fiber)
    VAR_8->def->ops->enable_fiber(VAR_8, 1);
   VAR_7->medium = 129;
   break;

  case 129:

   if (VAR_8->def->ops->enable_fiber)
    VAR_8->def->ops->enable_fiber(VAR_8, 0);
   VAR_7->medium = 128;
   break;

  case 128:


   FUNC_4(VAR_7);
   VAR_7->medium = 130;
   break;
  }

  VAR_7->aneg_count = 0;
  FUNC_0(&VAR_7->aneg_timer, VAR_5 + VAR_1);
  return;
 }


 if (!(VAR_8->def->ops->poll_link(VAR_8))) {
  VAR_7->aneg_count++;
  FUNC_0(&VAR_7->aneg_timer, VAR_5 + VAR_1);
  return;
 }


 VAR_8->def->ops->read_link(VAR_8);

 FUNC_5(VAR_7, VAR_4,
        FUNC_3(VAR_7, VAR_4));
 FUNC_5(VAR_7, VAR_2, 0x4);

 if (VAR_8->speed == 1000)
  FUNC_5(VAR_7, VAR_3, 0x00000001);
 else
  FUNC_5(VAR_7, VAR_3, 0);

 VAR_7->aneg_count = 0;

 FUNC_2("%s: link up, %i Mbps, %s-duplex %sautoneg.\n",
  VAR_7->netdev->name, VAR_8->speed,
  VAR_8->duplex == 1 ? "Full" : "Half",
  VAR_8->autoneg == 1 ? "" : "no ");

 return;
}

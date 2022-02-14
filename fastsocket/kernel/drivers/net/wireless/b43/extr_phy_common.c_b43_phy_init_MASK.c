
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int channel; struct b43_phy_operations* ops; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;
struct b43_phy_operations {int (* init ) (struct b43_wldev*) ;int (* software_rfkill ) (struct b43_wldev*,int) ;int (* exit ) (struct b43_wldev*) ;int (* get_default_chan ) (struct b43_wldev*) ;} ;


 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int) ;

int FUNC_8(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;
 const struct b43_phy_operations *VAR_2 = VAR_1->ops;
 int VAR_3;

 VAR_1->channel = VAR_2->get_default_chan(VAR_0);

 VAR_2->software_rfkill(VAR_0, 0);
 VAR_3 = VAR_2->init(VAR_0);
 if (VAR_3) {
  FUNC_1(VAR_0->wl, "PHY init failed\n");
  goto err_block_rf;
 }


 VAR_3 = FUNC_0(VAR_0, VAR_2->get_default_chan(VAR_0));
 if (VAR_3) {
  FUNC_1(VAR_0->wl, "PHY init: Channel switch to default failed\n");
  goto err_phy_exit;
 }

 return 0;

err_phy_exit:
 if (VAR_2->exit)
  VAR_2->exit(VAR_0);
err_block_rf:
 VAR_2->software_rfkill(VAR_0, 1);

 return VAR_3;
}

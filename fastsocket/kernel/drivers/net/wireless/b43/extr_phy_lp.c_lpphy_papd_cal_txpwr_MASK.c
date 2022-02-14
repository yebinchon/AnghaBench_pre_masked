
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpphy_tx_gains {int dummy; } ;
struct TYPE_3__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_2__* dev; TYPE_1__ phy; } ;
struct b43_phy_lp {int txpctl_mode; } ;
struct TYPE_4__ {int chip_id; scalar_t__ chip_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 struct lpphy_tx_gains FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,struct lpphy_tx_gains,int ,int,int) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*,struct lpphy_tx_gains) ;
 int FUNC_8 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_9(struct b43_wldev *VAR_3)
{
 struct b43_phy_lp *VAR_4 = VAR_3->phy.lp;
 struct lpphy_tx_gains VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_5(VAR_3);
 VAR_7 = VAR_4->txpctl_mode;
 VAR_8 = FUNC_1(VAR_3, VAR_0) & 0x40;
 if (VAR_8)
  VAR_6 = FUNC_3(VAR_3);
 VAR_9 = FUNC_1(VAR_3, VAR_1) & 0xFF;
 VAR_10 = FUNC_2(VAR_3);

 FUNC_8(VAR_3, VAR_2);

 if (VAR_3->dev->chip_id == 0x4325 && VAR_3->dev->chip_rev == 0)
  FUNC_4(VAR_3, VAR_5, 0, 1, 30);
 else
  FUNC_4(VAR_3, VAR_5, 0, 1, 65);

 if (VAR_8)
  FUNC_7(VAR_3, VAR_6);
 FUNC_6(VAR_3, VAR_10);
 FUNC_8(VAR_3, VAR_7);
 FUNC_0(VAR_3, VAR_1, 0xFF00, VAR_9);
}

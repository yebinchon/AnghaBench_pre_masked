
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {scalar_t__ full_calib_chan; scalar_t__ channel; int txpctl_mode; } ;
typedef enum b43_lpphy_txpctl_mode { ____Placeholder_b43_lpphy_txpctl_mode } b43_lpphy_txpctl_mode ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int,int,int,int,int *) ;
 int FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_10(struct b43_wldev *VAR_1)
{
 struct b43_phy_lp *VAR_2 = VAR_1->phy.lp;
 enum b43_lpphy_txpctl_mode VAR_3;
 bool VAR_4 = 0;

 if (VAR_2->full_calib_chan != VAR_2->channel) {
  VAR_4 = 1;
  VAR_2->full_calib_chan = VAR_2->channel;
 }

 FUNC_1(VAR_1);

 FUNC_2(VAR_1);
 if (VAR_1->phy.rev >= 2)
  FUNC_8(VAR_1);
 FUNC_5(VAR_1);
 VAR_3 = VAR_2->txpctl_mode;
 FUNC_9(VAR_1, VAR_0);

 if ((VAR_1->phy.rev == 0) && (VAR_3 != VAR_0))
  FUNC_4(VAR_1);
 if ((VAR_1->phy.rev >= 2) && VAR_4) {
  FUNC_3(VAR_1);
 }
 FUNC_9(VAR_1, VAR_3);
 if (VAR_1->phy.rev >= 2)
  FUNC_6(VAR_1);
 FUNC_7(VAR_1, 1, 1, 0, 0, ((void*)0));

 FUNC_0(VAR_1);
}

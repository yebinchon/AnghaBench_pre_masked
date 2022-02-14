
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; struct b43_phy_lp* lp; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct b43_phy_lp {int rc_cap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_1)
{
 struct b43_phy_lp *VAR_2 = VAR_1->phy.lp;

 if (VAR_1->phy.rev >= 2) {
  FUNC_2(VAR_1);
 } else if (!VAR_2->rc_cap) {
  if (FUNC_0(VAR_1->wl) == VAR_0)
   FUNC_1(VAR_1);
 } else {
  FUNC_3(VAR_1);
 }
}

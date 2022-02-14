
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rev; struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {scalar_t__ rc_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_2, int VAR_3)
{
 struct b43_phy_lp *VAR_4 = VAR_2->phy.lp;
 u16 VAR_5 = (VAR_3 == 14);

 if (VAR_2->phy.rev < 2) {
  FUNC_0(VAR_2, VAR_1, 0xFCFF, VAR_5 << 9);
  if ((VAR_2->phy.rev == 1) && (VAR_4->rc_cap))
   FUNC_2(VAR_2);
 } else {
  FUNC_1(VAR_2, VAR_0, 0x3F);
 }
}

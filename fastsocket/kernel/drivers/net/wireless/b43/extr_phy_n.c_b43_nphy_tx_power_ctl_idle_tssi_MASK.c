
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct b43_phy {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_n {TYPE_1__* pwr_ctl_info; } ;
typedef int s32 ;
struct TYPE_2__ {int idle_tssi_5g; int idle_tssi_2g; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int ,int *,int) ;
 int FUNC_3 (struct b43_wldev*,int,int ,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int ,int,int,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int ) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int,int ,int,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct b43_wldev *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_2->phy;
 struct b43_phy_n *VAR_4 = VAR_2->phy.n;

 u32 VAR_5;
 s32 VAR_6[4] = { };



 if (FUNC_0(VAR_2))
  FUNC_1(VAR_2);

 if (VAR_3->rev >= 7)
  FUNC_4(VAR_2, 0x2000, 0, 3, 0, 0);
 else if (VAR_3->rev >= 3)
  FUNC_3(VAR_2, 0x2000, 0, 3, 0);

 FUNC_6(VAR_2);
 FUNC_7(VAR_2, 0xFA0, 0, 0, 0);
 FUNC_8(20);
 VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_6, 1);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2, 0, VAR_1);

 if (VAR_3->rev >= 7)
  FUNC_4(VAR_2, 0x2000, 0, 3, 1, 0);
 else if (VAR_3->rev >= 3)
  FUNC_3(VAR_2, 0x2000, 0, 3, 1);

 if (VAR_3->rev >= 3) {
  VAR_4->pwr_ctl_info[0].idle_tssi_5g = (VAR_5 >> 24) & 0xFF;
  VAR_4->pwr_ctl_info[1].idle_tssi_5g = (VAR_5 >> 8) & 0xFF;
 } else {
  VAR_4->pwr_ctl_info[0].idle_tssi_5g = (VAR_5 >> 16) & 0xFF;
  VAR_4->pwr_ctl_info[1].idle_tssi_5g = VAR_5 & 0xFF;
 }
 VAR_4->pwr_ctl_info[0].idle_tssi_2g = (VAR_5 >> 24) & 0xFF;
 VAR_4->pwr_ctl_info[1].idle_tssi_2g = (VAR_5 >> 8) & 0xFF;
}

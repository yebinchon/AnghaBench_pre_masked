
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b43_phy {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_n {int phyrxchain; scalar_t__ hang_avoid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_5, u8 VAR_6)
{
 struct b43_phy *VAR_7 = &VAR_5->phy;
 struct b43_phy_n *VAR_8 = VAR_7->n;


 VAR_8->phyrxchain = VAR_6;

 if (0 )
  return;

 FUNC_1(VAR_5);

 if (VAR_8->hang_avoid)
  FUNC_3(VAR_5, 1);

 FUNC_4(VAR_5, VAR_1, ~VAR_2,
   (VAR_6 & 0x3) << VAR_3);

 if ((VAR_6 & 0x3) != 0x3) {
  FUNC_5(VAR_5, VAR_0, 1);
  if (VAR_5->phy.rev >= 3) {

  }
 } else {
  FUNC_5(VAR_5, VAR_0, 0x1E);
  if (VAR_5->phy.rev >= 3) {

  }
 }

 FUNC_2(VAR_5, VAR_4);

 if (VAR_8->hang_avoid)
  FUNC_3(VAR_5, 0);

 FUNC_0(VAR_5);
}

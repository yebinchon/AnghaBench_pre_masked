
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_n {int bb_mult_save; scalar_t__ hang_avoid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_4)
{
 struct b43_phy_n *VAR_5 = VAR_4->phy.n;
 u16 VAR_6;

 if (VAR_5->hang_avoid)
  FUNC_1(VAR_4, 1);

 VAR_6 = FUNC_4(VAR_4, VAR_3);
 if (VAR_6 & 0x1)
  FUNC_5(VAR_4, VAR_1, VAR_2);
 else if (VAR_6 & 0x2)
  FUNC_3(VAR_4, VAR_0, 0x7FFF);

 FUNC_3(VAR_4, VAR_1, ~0x0004);

 if (VAR_5->bb_mult_save & 0x80000000) {
  VAR_6 = VAR_5->bb_mult_save & 0xFFFF;
  FUNC_2(VAR_4, FUNC_0(15, 87), VAR_6);
  VAR_5->bb_mult_save = 0;
 }

 if (VAR_5->hang_avoid)
  FUNC_1(VAR_4, 0);
}

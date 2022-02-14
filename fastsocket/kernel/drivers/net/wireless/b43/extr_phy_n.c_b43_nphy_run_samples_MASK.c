
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int is_40mhz; struct b43_phy_n* n; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct b43_phy_n {int bb_mult_save; scalar_t__ hang_avoid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;
 int FUNC_7 (struct b43_wldev*,int ,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct b43_wldev *VAR_8, u16 VAR_9, u16 VAR_10,
     u16 VAR_11, bool VAR_12, bool VAR_13)
{
 struct b43_phy_n *VAR_14 = VAR_8->phy.n;
 int VAR_15;
 u16 VAR_16;
 u32 VAR_17;

 if (VAR_14->hang_avoid)
  FUNC_1(VAR_8, 1);

 if ((VAR_14->bb_mult_save & 0x80000000) == 0) {
  VAR_17 = FUNC_2(VAR_8, FUNC_0(15, 87));
  VAR_14->bb_mult_save = (VAR_17 & 0xFFFF) | 0x80000000;
 }

 if (!VAR_8->phy.is_40mhz)
  VAR_17 = 0x6464;
 else
  VAR_17 = 0x4747;
 FUNC_3(VAR_8, FUNC_0(15, 87), VAR_17);

 if (VAR_14->hang_avoid)
  FUNC_1(VAR_8, 0);

 FUNC_7(VAR_8, VAR_5, (VAR_9 - 1));

 if (VAR_10 != 0xFFFF)
  FUNC_7(VAR_8, VAR_6, (VAR_10 - 1));
 else
  FUNC_7(VAR_8, VAR_6, VAR_10);

 FUNC_7(VAR_8, VAR_7, VAR_11);

 VAR_16 = FUNC_5(VAR_8, VAR_1);

 FUNC_6(VAR_8, VAR_1, VAR_2);
 if (VAR_12) {
  FUNC_4(VAR_8, VAR_0, 0x7FFF);
  FUNC_6(VAR_8, VAR_0, 0x8000);
 } else {
  if (VAR_13)
   FUNC_7(VAR_8, VAR_4, 5);
  else
   FUNC_7(VAR_8, VAR_4, 1);
 }
 for (VAR_15 = 0; VAR_15 < 100; VAR_15++) {
  if (!(FUNC_5(VAR_8, VAR_3) & 1)) {
   VAR_15 = 0;
   break;
  }
  FUNC_9(10);
 }
 if (VAR_15)
  FUNC_8(VAR_8->wl, "run samples timeout\n");

 FUNC_7(VAR_8, VAR_1, VAR_16);
}

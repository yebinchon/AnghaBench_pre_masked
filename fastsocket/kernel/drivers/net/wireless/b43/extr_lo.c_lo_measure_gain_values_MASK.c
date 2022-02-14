
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {int trsw_rx_gain; int lna_lod_gain; int pga_gain; int lna_gain; } ;
typedef int s16 ;


 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (struct b43_phy*) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_0,
       s16 VAR_1, int VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_0->phy;
 struct b43_phy_g *VAR_4 = VAR_3->g;
 u16 VAR_5;

 if (VAR_1 < 0)
  VAR_1 = 0;

 if (FUNC_3(VAR_3)) {
  int VAR_6;

  if (VAR_2) {
   VAR_6 = VAR_4->trsw_rx_gain / 2;
   if (VAR_1 >= VAR_6) {
    VAR_6 = VAR_1 - VAR_6;
   }
  } else
   VAR_6 = VAR_1;
  if (VAR_6 < 9) {
   VAR_4->lna_lod_gain = 0;
  } else {
   VAR_4->lna_lod_gain = 1;
   VAR_6 -= 8;
  }
  VAR_6 = FUNC_2(VAR_6, 0, 0x2D);
  VAR_4->pga_gain = VAR_6 / 3;
  if (VAR_4->pga_gain >= 5) {
   VAR_4->pga_gain -= 5;
   VAR_4->lna_gain = 2;
  } else
   VAR_4->lna_gain = 0;
 } else {
  VAR_4->lna_gain = 0;
  VAR_4->trsw_rx_gain = 0x20;
  if (VAR_1 >= 0x14) {
   VAR_4->lna_lod_gain = 1;
   VAR_4->pga_gain = 2;
  } else if (VAR_1 >= 0x12) {
   VAR_4->lna_lod_gain = 1;
   VAR_4->pga_gain = 1;
  } else if (VAR_1 >= 0xF) {
   VAR_4->lna_lod_gain = 1;
   VAR_4->pga_gain = 0;
  } else {
   VAR_4->lna_lod_gain = 0;
   VAR_4->pga_gain = 0;
  }
 }

 VAR_5 = FUNC_0(VAR_0, 0x7A);
 if (VAR_4->lna_lod_gain == 0)
  VAR_5 &= ~0x0008;
 else
  VAR_5 |= 0x0008;
 FUNC_1(VAR_0, 0x7A, VAR_5);
}

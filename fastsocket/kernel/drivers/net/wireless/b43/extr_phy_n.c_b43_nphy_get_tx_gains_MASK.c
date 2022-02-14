
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nphy_txgains {int* ipa; int* pad; int* pga; int* txgm; } ;
struct TYPE_2__ {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_n {scalar_t__ hang_avoid; int txpwrctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int* FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int*) ;
 int FUNC_4 (struct b43_wldev*,int ) ;

__attribute__((used)) static struct nphy_txgains FUNC_5(struct b43_wldev *VAR_4)
{
 struct b43_phy_n *VAR_5 = VAR_4->phy.n;

 u16 VAR_6[2];
 struct nphy_txgains VAR_7;
 const u32 *VAR_8 = ((void*)0);

 if (!VAR_5->txpwrctrl) {
  int VAR_9;

  if (VAR_5->hang_avoid)
   FUNC_2(VAR_4, 1);
  FUNC_3(VAR_4, FUNC_0(7, 0x110), 2, VAR_6);
  if (VAR_5->hang_avoid)
   FUNC_2(VAR_4, 0);

  for (VAR_9 = 0; VAR_9 < 2; ++VAR_9) {
   if (VAR_4->phy.rev >= 3) {
    VAR_7.ipa[VAR_9] = VAR_6[VAR_9] & 0x000F;
    VAR_7.pad[VAR_9] = (VAR_6[VAR_9] & 0x00F0) >> 4;
    VAR_7.pga[VAR_9] = (VAR_6[VAR_9] & 0x0F00) >> 8;
    VAR_7.txgm[VAR_9] = (VAR_6[VAR_9] & 0x7000) >> 12;
   } else {
    VAR_7.ipa[VAR_9] = VAR_6[VAR_9] & 0x0003;
    VAR_7.pad[VAR_9] = (VAR_6[VAR_9] & 0x000C) >> 2;
    VAR_7.pga[VAR_9] = (VAR_6[VAR_9] & 0x0070) >> 4;
    VAR_7.txgm[VAR_9] = (VAR_6[VAR_9] & 0x0380) >> 7;
   }
  }
 } else {
  int VAR_10;
  u16 VAR_11[2];
  VAR_11[0] = (FUNC_4(VAR_4, VAR_0) &
   VAR_2) >>
   VAR_3;
  VAR_11[1] = (FUNC_4(VAR_4, VAR_1) &
   VAR_2) >>
   VAR_3;

  for (VAR_10 = 0; VAR_10 < 2; ++VAR_10) {
   VAR_8 = FUNC_1(VAR_4);
   if (VAR_4->phy.rev >= 3) {
    VAR_7.ipa[VAR_10] = (VAR_8[VAR_11[VAR_10]] >> 16) & 0xF;
    VAR_7.pad[VAR_10] = (VAR_8[VAR_11[VAR_10]] >> 20) & 0xF;
    VAR_7.pga[VAR_10] = (VAR_8[VAR_11[VAR_10]] >> 24) & 0xF;
    VAR_7.txgm[VAR_10] = (VAR_8[VAR_11[VAR_10]] >> 28) & 0xF;
   } else {
    VAR_7.ipa[VAR_10] = (VAR_8[VAR_11[VAR_10]] >> 16) & 0x3;
    VAR_7.pad[VAR_10] = (VAR_8[VAR_11[VAR_10]] >> 18) & 0x3;
    VAR_7.pga[VAR_10] = (VAR_8[VAR_11[VAR_10]] >> 20) & 0x7;
    VAR_7.txgm[VAR_10] = (VAR_8[VAR_11[VAR_10]] >> 23) & 0x7;
   }
  }
 }

 return VAR_7;
}

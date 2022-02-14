
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {size_t phy_corenum; int phy_rev; } ;
struct brcms_phy {int nphy_txpwrctrl; int* nphy_txpwr_idx; scalar_t__ bw; int* adj_pwr_tbl_nphy; scalar_t__ phyhang_avoid; TYPE_2__* sh; TYPE_1__ pubpi; int radio_chanspec; } ;
struct TYPE_4__ {int physhim; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct brcms_phy*) ;


 scalar_t__ VAR_6 ;
 int FUNC_6 (struct brcms_phy*,int,int) ;
 int FUNC_7 (struct brcms_phy*,int,int,int) ;
 int FUNC_8 (struct brcms_phy*,int,int) ;
 int FUNC_9 (int ,int ,int,int,int ) ;
 int FUNC_10 (struct brcms_phy*,int) ;
 int FUNC_11 (struct brcms_phy*,int,int,int,int,int*) ;
 int FUNC_12 (struct brcms_phy*,int) ;
 int FUNC_13 (struct brcms_phy*,int,int) ;
 scalar_t__ FUNC_14 (struct brcms_phy*) ;

void FUNC_15(struct brcms_phy *VAR_7, u8 VAR_8)
{
 u16 VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12;
 uint VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u16 VAR_16[84];

 if (VAR_7->phyhang_avoid)
  FUNC_10(VAR_7, 1);

 switch (VAR_8) {
 case 129:
 case 128:
  VAR_7->nphy_txpwrctrl = VAR_8;
  break;
 default:
  break;
 }

 if (VAR_8 == 129) {
  if (FUNC_1(VAR_7->pubpi.phy_rev, 3)) {

   if (FUNC_14(VAR_7)) {
    for (VAR_13 = 0; VAR_13 < VAR_7->pubpi.phy_corenum;
         VAR_13++)
     VAR_7->nphy_txpwr_idx[VAR_13] =
      FUNC_12(
       VAR_7,
       (u8) VAR_13);
   }

  }

  VAR_15 = 84;
  VAR_14 = 64;
  for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++)
   VAR_16[VAR_12] = 0;
  FUNC_11(VAR_7, 26, VAR_15, VAR_14, 16,
      VAR_16);
  FUNC_11(VAR_7, 27, VAR_15, VAR_14, 16,
      VAR_16);

  if (FUNC_1(VAR_7->pubpi.phy_rev, 3))
   FUNC_6(VAR_7, 0x1e7,
        (u16) (~((0x1 << 15) |
          (0x1 << 14) | (0x1 << 13))));
  else
   FUNC_6(VAR_7, 0x1e7,
        (u16) (~((0x1 << 14) | (0x1 << 13))));

  if (FUNC_1(VAR_7->pubpi.phy_rev, 3)) {
   FUNC_8(VAR_7, 0x8f, (0x1 << 8));
   FUNC_8(VAR_7, 0xa5, (0x1 << 8));
  } else {
   FUNC_8(VAR_7, 0xa5, (0x1 << 14));
  }

  if (FUNC_3(VAR_7->pubpi.phy_rev, 2))
   FUNC_7(VAR_7, 0xdc, 0x00ff, 0x53);
  else if (FUNC_4(VAR_7->pubpi.phy_rev, 2))
   FUNC_7(VAR_7, 0xdc, 0x00ff, 0x5a);

  if (FUNC_4(VAR_7->pubpi.phy_rev, 2) &&
      VAR_7->bw == VAR_6)
   FUNC_9(VAR_7->sh->physhim, VAR_1, VAR_2,
           VAR_2, VAR_0);

 } else {

  FUNC_11(VAR_7, VAR_3, 84, 64,
      8, VAR_7->adj_pwr_tbl_nphy);
  FUNC_11(VAR_7, VAR_4, 84, 64,
      8, VAR_7->adj_pwr_tbl_nphy);

  VAR_11 = (VAR_8 == 128) ? 0x1 : 0x0;
  VAR_9 = (0x1 << 14) | (0x1 << 13);
  VAR_10 = (VAR_11 << 14) | (VAR_11 << 13);

  if (FUNC_1(VAR_7->pubpi.phy_rev, 3)) {
   VAR_9 |= (0x1 << 15);
   VAR_10 |= (VAR_11 << 15);
  }

  FUNC_7(VAR_7, 0x1e7, VAR_9, VAR_10);

  if (FUNC_0(VAR_7->radio_chanspec)) {
   if (FUNC_1(VAR_7->pubpi.phy_rev, 7)) {
    FUNC_7(VAR_7, 0x1e7, (0x7f << 0), 0x32);
    FUNC_7(VAR_7, 0x222, (0xff << 0), 0x32);
   } else {
    FUNC_7(VAR_7, 0x1e7, (0x7f << 0), 0x64);
    if (FUNC_2(VAR_7->pubpi.phy_rev, 1))
     FUNC_7(VAR_7, 0x222,
          (0xff << 0), 0x64);
   }
  }

  if (FUNC_1(VAR_7->pubpi.phy_rev, 3)) {
   if ((VAR_7->nphy_txpwr_idx[0] != 128)
       && (VAR_7->nphy_txpwr_idx[1] != 128))
    FUNC_13(VAR_7,
              VAR_7->
              nphy_txpwr_idx
              [0],
              VAR_7->
              nphy_txpwr_idx
              [1]);
  }

  if (FUNC_1(VAR_7->pubpi.phy_rev, 3)) {
   FUNC_6(VAR_7, 0x8f, ~(0x1 << 8));
   FUNC_6(VAR_7, 0xa5, ~(0x1 << 8));
  } else {
   FUNC_6(VAR_7, 0xa5, ~(0x1 << 14));
  }

  if (FUNC_3(VAR_7->pubpi.phy_rev, 2))
   FUNC_7(VAR_7, 0xdc, 0x00ff, 0x3b);
  else if (FUNC_4(VAR_7->pubpi.phy_rev, 2))
   FUNC_7(VAR_7, 0xdc, 0x00ff, 0x40);

  if (FUNC_4(VAR_7->pubpi.phy_rev, 2) &&
      VAR_7->bw == VAR_6)
   FUNC_9(VAR_7->sh->physhim, VAR_1, VAR_2,
           0x0, VAR_0);

  if (FUNC_5(VAR_7)) {
   FUNC_7(VAR_7, (0 == VAR_5) ? 0x297 :
        0x29b, (0x1 << 2), (0) << 2);

   FUNC_7(VAR_7, (1 == VAR_5) ? 0x297 :
        0x29b, (0x1 << 2), (0) << 2);

  }

 }

 if (VAR_7->phyhang_avoid)
  FUNC_10(VAR_7, 0);
}

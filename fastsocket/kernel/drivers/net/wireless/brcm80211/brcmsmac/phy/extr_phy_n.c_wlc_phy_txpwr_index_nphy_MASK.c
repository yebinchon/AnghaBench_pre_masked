
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int phy_corenum; int phy_rev; } ;
struct brcms_phy {int nphy_txpwrctrl; scalar_t__ phyhang_avoid; TYPE_3__* nphy_txpwrindex; TYPE_1__* sh; TYPE_2__ pubpi; } ;
typedef int s8 ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_6__ {int index; int AfectrlOverride; int AfeCtrlDacGain; int rad_gain; int bbmult; int iqcomp_a; int locomp; int index_internal; int index_internal_save; } ;
struct TYPE_4__ {int physhim; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 int VAR_5 ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 void* FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct brcms_phy*,int) ;
 int FUNC_7 (struct brcms_phy*,int,int,int,int,int*) ;
 int FUNC_8 (struct brcms_phy*,int,int,int,int,int*) ;
 int FUNC_9 (struct brcms_phy*,int) ;
 int FUNC_10 (struct brcms_phy*,int,int) ;

void
FUNC_11(struct brcms_phy *VAR_6, u8 VAR_7, s8 VAR_8,
    bool VAR_9)
{
 u8 VAR_10, VAR_11;
 u16 VAR_12, VAR_13, VAR_14;
 u16 VAR_15;
 u32 VAR_16;
 u16 VAR_17, VAR_18;
 u8 VAR_19;
 u32 VAR_20;
 u16 VAR_21, VAR_22;
 u32 VAR_23;
 u16 VAR_24;
 u8 VAR_25;
 s32 VAR_26;
 u16 VAR_27[2];

 if (VAR_6->phyhang_avoid)
  FUNC_6(VAR_6, 1);

 VAR_12 = 192;
 VAR_13 = 320;
 VAR_14 = 448;

 for (VAR_10 = 0; VAR_10 < VAR_6->pubpi.phy_corenum; VAR_10++) {

  if ((VAR_7 & (1 << VAR_10)) == 0)
   continue;

  VAR_11 = (VAR_10 == VAR_4) ? 26 : 27;

  if (VAR_8 < 0) {
   if (VAR_6->nphy_txpwrindex[VAR_10].index < 0)
    continue;

   if (FUNC_0(VAR_6->pubpi.phy_rev, 3)) {
    FUNC_3(VAR_6, 0x8f,
         (0x1 << 8),
         VAR_6->nphy_txpwrindex[VAR_10].
         AfectrlOverride);
    FUNC_3(VAR_6, 0xa5, (0x1 << 8),
         VAR_6->nphy_txpwrindex[VAR_10].
         AfectrlOverride);
   } else {
    FUNC_3(VAR_6, 0xa5,
         (0x1 << 14),
         VAR_6->nphy_txpwrindex[VAR_10].
         AfectrlOverride);
   }

   FUNC_10(VAR_6, (VAR_10 == VAR_4) ?
          0xaa : 0xab,
          VAR_6->nphy_txpwrindex[VAR_10].AfeCtrlDacGain);

   FUNC_8(VAR_6, 7, 1, (0x110 + VAR_10), 16,
       &VAR_6->nphy_txpwrindex[VAR_10].
       rad_gain);

   FUNC_7(VAR_6, 15, 1, 87, 16, &VAR_15);
   VAR_15 &= ((VAR_10 == VAR_4) ? 0x00ff : 0xff00);
   VAR_15 |= ((VAR_10 == VAR_4) ?
     (VAR_6->nphy_txpwrindex[VAR_10].bbmult << 8) :
     (VAR_6->nphy_txpwrindex[VAR_10].bbmult << 0));
   FUNC_8(VAR_6, 15, 1, 87, 16, &VAR_15);

   if (VAR_9) {
    FUNC_8(
     VAR_6, 15, 2, (80 + 2 * VAR_10), 16,
     &VAR_6->nphy_txpwrindex[VAR_10].iqcomp_a);
    FUNC_8(
     VAR_6, 15, 1, (85 + VAR_10), 16,
     &VAR_6->nphy_txpwrindex[VAR_10].locomp);
    FUNC_8(
     VAR_6, 15, 1, (93 + VAR_10), 16,
     &VAR_6->nphy_txpwrindex[VAR_10].locomp);
   }

   FUNC_9(VAR_6, VAR_6->nphy_txpwrctrl);

   VAR_6->nphy_txpwrindex[VAR_10].index_internal =
    VAR_6->nphy_txpwrindex[VAR_10].index_internal_save;
  } else {

   if (VAR_6->nphy_txpwrindex[VAR_10].index < 0) {

    if (FUNC_0(VAR_6->pubpi.phy_rev, 3)) {
     FUNC_3(VAR_6, 0x8f,
          (0x1 << 8),
          VAR_6->nphy_txpwrindex[VAR_10].
          AfectrlOverride);
     FUNC_3(VAR_6, 0xa5, (0x1 << 8),
          VAR_6->nphy_txpwrindex[VAR_10].
          AfectrlOverride);
    } else {
     VAR_6->nphy_txpwrindex[VAR_10].
     AfectrlOverride =
      FUNC_4(VAR_6, 0xa5);
    }

    VAR_6->nphy_txpwrindex[VAR_10].AfeCtrlDacGain =
     FUNC_4(VAR_6, (VAR_10 == VAR_4) ?
        0xaa : 0xab);

    FUNC_7(VAR_6, 7, 1,
       (0x110 + VAR_10), 16,
       &VAR_6->
       nphy_txpwrindex[VAR_10].
       rad_gain);

    FUNC_7(VAR_6, 15, 1, 87, 16,
       &VAR_24);
    VAR_24 >>= ((VAR_10 == VAR_4) ? 8 : 0);
    VAR_24 &= 0xff;
    VAR_6->nphy_txpwrindex[VAR_10].bbmult = (u8) VAR_24;

    FUNC_7(VAR_6, 15, 2,
       (80 + 2 * VAR_10), 16,
       &VAR_6->
       nphy_txpwrindex[VAR_10].
       iqcomp_a);

    FUNC_7(VAR_6, 15, 1, (85 + VAR_10),
       16,
       &VAR_6->
       nphy_txpwrindex[VAR_10].
       locomp);

    VAR_6->nphy_txpwrindex[VAR_10].index_internal_save =
     VAR_6->nphy_txpwrindex[VAR_10].
     index_internal;
   }

   VAR_25 = VAR_6->nphy_txpwrctrl;
   FUNC_9(VAR_6, VAR_5);

   if (FUNC_1(VAR_6->pubpi.phy_rev, 1))
    FUNC_5(VAR_6->sh->physhim, VAR_3);

   FUNC_7(VAR_6, VAR_11, 1,
      (VAR_12 + VAR_8), 32,
      &VAR_16);

   if (FUNC_0(VAR_6->pubpi.phy_rev, 3))
    VAR_17 = (VAR_16 >> 16) &
        ((1 << (32 - 16 + 1)) - 1);
   else
    VAR_17 = (VAR_16 >> 16) &
        ((1 << (28 - 16 + 1)) - 1);

   VAR_18 = (VAR_16 >> 8) & ((1 << (13 - 8 + 1)) - 1);
   VAR_19 = (VAR_16 >> 0) & ((1 << (7 - 0 + 1)) - 1);

   if (FUNC_0(VAR_6->pubpi.phy_rev, 3))
    FUNC_3(VAR_6, ((VAR_10 == VAR_4) ? 0x8f :
       0xa5), (0x1 << 8), (0x1 << 8));
   else
    FUNC_3(VAR_6, 0xa5, (0x1 << 14), (0x1 << 14));

   FUNC_10(VAR_6, (VAR_10 == VAR_4) ?
          0xaa : 0xab, VAR_18);

   FUNC_8(VAR_6, 7, 1, (0x110 + VAR_10), 16,
       &VAR_17);

   FUNC_7(VAR_6, 15, 1, 87, 16, &VAR_15);
   VAR_15 &= ((VAR_10 == VAR_4) ? 0x00ff : 0xff00);
   VAR_15 |= ((VAR_10 == VAR_4) ?
    (VAR_19 << 8) : (VAR_19 << 0));

   FUNC_8(VAR_6, 15, 1, 87, 16, &VAR_15);

   FUNC_7(VAR_6, VAR_11, 1,
      (VAR_13 + VAR_8), 32,
      &VAR_20);
   VAR_21 = (VAR_20 >> 10) & ((1 << (19 - 10 + 1)) - 1);
   VAR_22 = (VAR_20 >> 0) & ((1 << (9 - 0 + 1)) - 1);

   if (VAR_9) {
    VAR_27[0] = (u16) VAR_21;
    VAR_27[1] = (u16) VAR_22;
    FUNC_8(VAR_6, 15, 2,
        (80 + 2 * VAR_10), 16,
        VAR_27);
   }

   FUNC_7(VAR_6, VAR_11, 1,
      (VAR_14 + VAR_8), 32,
      &VAR_23);
   if (VAR_9)
    FUNC_8(VAR_6, 15, 1, (85 + VAR_10),
        16, &VAR_23);

   if (FUNC_1(VAR_6->pubpi.phy_rev, 1))
    FUNC_5(VAR_6->sh->physhim, VAR_2);

   if (FUNC_2(VAR_6)) {
    FUNC_7(VAR_6,
      (VAR_10 == VAR_4 ?
       VAR_0 :
       VAR_1),
      1, 576 + VAR_8, 32,
      &VAR_26);

    FUNC_3(VAR_6, (VAR_10 == VAR_4) ? 0x297 :
         0x29b, (0x1ff << 4),
         ((s16) VAR_26) << 4);

    FUNC_3(VAR_6, (VAR_10 == VAR_4) ? 0x297 :
         0x29b, (0x1 << 2), (1) << 2);

   }

   FUNC_9(VAR_6, VAR_25);
  }

  VAR_6->nphy_txpwrindex[VAR_10].index = VAR_8;
 }

 if (VAR_6->phyhang_avoid)
  FUNC_6(VAR_6, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct nphy_papd_restore_state {int mm; int * afeoverride; int * afectrl; int * intpa_master; int * fbmix; int * vga_master; int * atten; } ;
struct TYPE_2__ {size_t phy_corenum; int radiorev; int phy_rev; } ;
struct brcms_phy {int radio_chanspec; TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct brcms_phy*,int ,int ,size_t,int ,int ) ;
 int FUNC_4 (struct brcms_phy*,int ,int ,size_t,int ,int ) ;
 int FUNC_5 (struct brcms_phy*,int,int) ;
 int FUNC_6 (struct brcms_phy*,int,int ,int,int) ;
 int FUNC_7 (struct brcms_phy*,int,int,int,int,int ) ;
 int FUNC_8 (struct brcms_phy*) ;
 int FUNC_9 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void
FUNC_10(struct brcms_phy *VAR_17,
         struct nphy_papd_restore_state *VAR_18)
{
 u8 VAR_19;

 FUNC_8(VAR_17);

 if (FUNC_1(VAR_17->pubpi.phy_rev, 7)) {

  for (VAR_19 = 0; VAR_19 < VAR_17->pubpi.phy_corenum; VAR_19++) {

   if (FUNC_0(VAR_17->radio_chanspec)) {
    FUNC_4(VAR_17, VAR_7, VAR_9, VAR_19,
       VAR_13, 0);
    FUNC_4(VAR_17, VAR_7, VAR_9, VAR_19,
       VAR_12,
       VAR_18->atten[VAR_19]);
   } else {
    FUNC_4(VAR_17, VAR_7, VAR_9, VAR_19,
       VAR_15, 0);
    FUNC_4(VAR_17, VAR_7, VAR_9, VAR_19,
       VAR_14,
       VAR_18->atten[VAR_19]);
   }
  }

  if ((VAR_17->pubpi.radiorev == 4) || (VAR_17->pubpi.radiorev == 6))
   FUNC_7(
    VAR_17, (0x1 << 2),
    1, 0x3, 0,
    VAR_2);
  else
   FUNC_7(
    VAR_17, (0x1 << 2),
    0, 0x3, 1,
    VAR_2);

  FUNC_7(VAR_17, (0x1 << 1),
        0, 0x3, 1,
        VAR_3);
  FUNC_7(VAR_17, (0x1 << 0), 0, 0x3, 1,
        VAR_4);
  FUNC_7(VAR_17, (0x1 << 2), 0, 0x3, 1,
        VAR_4);
  FUNC_7(VAR_17, (0x1 << 11), 1, 0x3, 1,
        VAR_3);
  FUNC_7(VAR_17, (0x1 << 3), 0, 0x3, 1,
        VAR_2);
  FUNC_7(VAR_17, (0x1 << 11), 0, 0x3, 1,
        VAR_2);
  FUNC_7(VAR_17, (0x1 << 12), 0, 0x3, 1,
        VAR_2);
  FUNC_7(VAR_17, (0x1 << 2), 1, 0x3, 1,
        VAR_3);
  FUNC_7(VAR_17, (0x1 << 0), 0, 0x3, 1,
        VAR_3);
  FUNC_7(VAR_17, (0x1 << 1), 1, 0x3, 1,
        VAR_4);
  FUNC_7(VAR_17, (0x1 << 8), 0, 0x3, 1,
        VAR_3);
  FUNC_7(VAR_17, (0x1 << 9), 1, 0x3, 1,
        VAR_3);
  FUNC_7(VAR_17, (0x1 << 10), 0, 0x3, 1,
        VAR_3);
  FUNC_7(VAR_17, (0x1 << 3), 1, 0x3, 1,
        VAR_3);
  FUNC_7(VAR_17, (0x1 << 5), 0, 0x3, 1,
        VAR_3);
  FUNC_7(VAR_17, (0x1 << 4), 0, 0x3, 1,
        VAR_3);

  for (VAR_19 = 0; VAR_19 < VAR_17->pubpi.phy_corenum; VAR_19++) {

   FUNC_9(VAR_17, (VAR_19 == VAR_5) ?
          0xa6 : 0xa7, VAR_18->afectrl[VAR_19]);
   FUNC_9(VAR_17, (VAR_19 == VAR_5) ? 0x8f :
          0xa5, VAR_18->afeoverride[VAR_19]);
  }

  FUNC_5(VAR_17, (VAR_18->mm >> 8) & 0xff,
         (VAR_18->mm & 0xff));

  if (FUNC_2(VAR_17->pubpi.phy_rev, 7)
      || FUNC_1(VAR_17->pubpi.phy_rev, 8))
   FUNC_7(
    VAR_17, (0x1 << 7), 0, 0,
    1,
    VAR_3);
 } else {
  FUNC_6(VAR_17, (0x1 << 12), 0, 0x3, 1);
  FUNC_6(VAR_17, (0x1 << 13), 0, 0x3, 1);
  FUNC_6(VAR_17, (0x1 << 0), 0, 0x3, 1);

  FUNC_6(VAR_17, (0x1 << 2), 0, 0x3, 1);
  FUNC_6(VAR_17, (0x1 << 1), 0, 0x3, 1);

  for (VAR_19 = 0; VAR_19 < VAR_17->pubpi.phy_corenum; VAR_19++) {

   FUNC_3(VAR_17, VAR_6, VAR_8, VAR_19, VAR_16,
      VAR_18->vga_master[VAR_19]);
   if (FUNC_0(VAR_17->radio_chanspec)) {
    FUNC_3(VAR_17, VAR_6, VAR_8, VAR_19,
       VAR_11, VAR_18->fbmix[VAR_19]);
    FUNC_3(VAR_17, VAR_6, VAR_9, VAR_19,
       VAR_1,
       VAR_18->intpa_master[VAR_19]);
   } else {
    FUNC_3(VAR_17, VAR_6, VAR_8, VAR_19,
       VAR_10, VAR_18->fbmix[VAR_19]);
    FUNC_3(VAR_17, VAR_6, VAR_9, VAR_19,
       VAR_0,
       VAR_18->intpa_master[VAR_19]);
   }

   FUNC_9(VAR_17, (VAR_19 == VAR_5) ?
          0xa6 : 0xa7, VAR_18->afectrl[VAR_19]);
   FUNC_9(VAR_17, (VAR_19 == VAR_5) ? 0x8f :
          0xa5, VAR_18->afeoverride[VAR_19]);
  }

  FUNC_5(VAR_17, (VAR_18->mm >> 8) & 0xff,
         (VAR_18->mm & 0xff));

  FUNC_6(VAR_17, (0x1 << 3), 0, 0x3, 1);
 }
}

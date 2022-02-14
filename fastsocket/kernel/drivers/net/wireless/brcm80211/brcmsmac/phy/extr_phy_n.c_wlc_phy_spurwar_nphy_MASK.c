
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {scalar_t__ phyhang_avoid; TYPE_2__* sh; int radio_chanspec; scalar_t__ nphy_aband_spurwar_en; scalar_t__ nphy_gband_spurwar2_en; scalar_t__ nphy_gband_spurwar_en; TYPE_1__ pubpi; } ;
struct TYPE_4__ {int chippkg; int chip; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (struct brcms_phy*,int ) ;
 int FUNC_7 (struct brcms_phy*,int,int*,int*) ;
 int FUNC_8 (struct brcms_phy*,int ) ;
 int FUNC_9 (struct brcms_phy*,int) ;

__attribute__((used)) static void FUNC_10(struct brcms_phy *VAR_4)
{
 u16 VAR_5 = 0;
 int VAR_6[] = { 57, 58 };
 u32 VAR_7[] = { 0x3ff, 0x3ff };
 bool VAR_8 = 0;
 uint VAR_9 = 0;
 u32 VAR_10 = 0;

 if (FUNC_5(VAR_4->pubpi.phy_rev, 3)) {
  if (VAR_4->phyhang_avoid)
   FUNC_9(VAR_4, 1);

  VAR_5 = FUNC_1(VAR_4->radio_chanspec);

  if (VAR_4->nphy_gband_spurwar_en) {

   FUNC_8(
    VAR_4,
    VAR_3);

   if (FUNC_2(VAR_4->radio_chanspec)) {
    if ((VAR_5 == 11)
        && FUNC_3(VAR_4->radio_chanspec))
     FUNC_7(
      VAR_4, 2,
      VAR_6,
      VAR_7);
    else
     FUNC_7(VAR_4, 0,
          ((void*)0),
          ((void*)0));
   }

   FUNC_6(VAR_4,
           VAR_2);
  }

  if ((VAR_4->nphy_gband_spurwar2_en)
      && FUNC_2(VAR_4->radio_chanspec)) {

   if (FUNC_3(VAR_4->radio_chanspec)) {
    switch (VAR_5) {
    case 3:
     VAR_6[0] = 57;
     VAR_6[1] = 58;
     VAR_7[0] = 0x22f;
     VAR_7[1] = 0x25f;
     VAR_8 = 1;
     break;
    case 4:
     VAR_6[0] = 41;
     VAR_6[1] = 42;
     VAR_7[0] = 0x22f;
     VAR_7[1] = 0x25f;
     VAR_8 = 1;
     break;
    case 5:
     VAR_6[0] = 25;
     VAR_6[1] = 26;
     VAR_7[0] = 0x24f;
     VAR_7[1] = 0x25f;
     VAR_8 = 1;
     break;
    case 6:
     VAR_6[0] = 9;
     VAR_6[1] = 10;
     VAR_7[0] = 0x22f;
     VAR_7[1] = 0x24f;
     VAR_8 = 1;
     break;
    case 7:
     VAR_6[0] = 121;
     VAR_6[1] = 122;
     VAR_7[0] = 0x18f;
     VAR_7[1] = 0x24f;
     VAR_8 = 1;
     break;
    case 8:
     VAR_6[0] = 105;
     VAR_6[1] = 106;
     VAR_7[0] = 0x22f;
     VAR_7[1] = 0x25f;
     VAR_8 = 1;
     break;
    case 9:
     VAR_6[0] = 89;
     VAR_6[1] = 90;
     VAR_7[0] = 0x22f;
     VAR_7[1] = 0x24f;
     VAR_8 = 1;
     break;
    case 10:
     VAR_6[0] = 73;
     VAR_6[1] = 74;
     VAR_7[0] = 0x22f;
     VAR_7[1] = 0x24f;
     VAR_8 = 1;
     break;
    default:
     VAR_8 = 0;
     break;
    }
   }

   if (VAR_8) {
    VAR_9 = FUNC_0(VAR_6);

    FUNC_7(
     VAR_4,
     VAR_9,
     VAR_6,
     VAR_7);

    VAR_10 = 0;

   } else {
    FUNC_7(VAR_4, 0, ((void*)0),
         ((void*)0));
   }
  }

  if ((VAR_4->nphy_aband_spurwar_en) &&
      (FUNC_4(VAR_4->radio_chanspec))) {
   switch (VAR_5) {
   case 54:
    VAR_6[0] = 32;
    VAR_7[0] = 0x25f;
    break;
   case 38:
   case 102:
   case 118:
    if ((VAR_4->sh->chip == VAR_0) &&
        (VAR_4->sh->chippkg == VAR_1)) {
     VAR_6[0] = 32;
     VAR_7[0] = 0x21f;
    } else {
     VAR_6[0] = 0;
     VAR_7[0] = 0x0;
    }
    break;
   case 134:
    VAR_6[0] = 32;
    VAR_7[0] = 0x21f;
    break;
   case 151:
    VAR_6[0] = 16;
    VAR_7[0] = 0x23f;
    break;
   case 153:
   case 161:
    VAR_6[0] = 48;
    VAR_7[0] = 0x23f;
    break;
   default:
    VAR_6[0] = 0;
    VAR_7[0] = 0x0;
    break;
   }

   if (VAR_6[0]
       && VAR_7[0])
    FUNC_7(
     VAR_4, 1,
     VAR_6,
     VAR_7);
   else
    FUNC_7(VAR_4, 0, ((void*)0),
         ((void*)0));
  }

  if (VAR_4->phyhang_avoid)
   FUNC_9(VAR_4, 0);
 }
}

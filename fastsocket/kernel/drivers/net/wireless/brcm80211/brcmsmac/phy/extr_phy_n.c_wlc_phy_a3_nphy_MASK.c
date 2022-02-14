
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef void* u16 ;
struct TYPE_3__ {void** pga; void** pad; } ;
struct nphy_ipa_txcalgains {int useindex; size_t index; TYPE_1__ gains; } ;
struct TYPE_4__ {int radiorev; int phy_rev; } ;
struct brcms_phy {TYPE_2__ pubpi; int radio_chanspec; } ;
typedef int s32 ;


 size_t FUNC_0 (size_t*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int) ;
 size_t VAR_3 ;
 size_t* VAR_4 ;
 size_t* VAR_5 ;
 size_t* VAR_6 ;
 size_t* VAR_7 ;
 int FUNC_3 (struct brcms_phy*,struct nphy_ipa_txcalgains*,int ,size_t) ;
 int FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (struct brcms_phy*,int ,int,int,int,int *) ;

__attribute__((used)) static u8 FUNC_6(struct brcms_phy *VAR_8, u8 VAR_9, u8 VAR_10)
{
 int VAR_11;
 int VAR_12;
 bool VAR_13;
 struct nphy_ipa_txcalgains VAR_14;
 bool VAR_15 = 0;
 bool VAR_16 = 1;
 s32 VAR_17, VAR_18;
 u32 VAR_19;
 int VAR_20;
 bool VAR_21 = 0;
 int VAR_22;
 u8 VAR_23 = 0;
 u8 VAR_24;
 u8 *VAR_25 = ((void*)0);

 VAR_14 = 1;
 VAR_22 = VAR_9;

 if (FUNC_2(VAR_8->pubpi.phy_rev, 7)) {

  VAR_12 = 20;
  VAR_11 = 1;

  if (FUNC_1(VAR_8->radio_chanspec)) {
   if (VAR_8->pubpi.radiorev == 5) {

    VAR_25 = VAR_5;
    VAR_23 =
     FUNC_0(VAR_5) - 1;

   } else if ((VAR_8->pubpi.radiorev == 7)
       || (VAR_8->pubpi.radiorev == 8)) {

    VAR_25 = VAR_6;
    VAR_23 =
     FUNC_0(VAR_6) - 1;

   } else {

    VAR_25 = VAR_4;
    VAR_23 = FUNC_0(VAR_4) -
       1;
   }

  } else {

   VAR_25 = VAR_7;
   VAR_23 = FUNC_0(VAR_7) - 1;
  }

  VAR_24 = 0;

  for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
   if (FUNC_1(VAR_8->radio_chanspec))
    VAR_14[VAR_10] =
     (u16) VAR_25[VAR_22];
   else
    VAR_14[VAR_10] =
     (u16) VAR_25[VAR_22];

   FUNC_3(VAR_8, &VAR_14, VAR_0, VAR_10);

   FUNC_5(VAR_8,
      (VAR_10 ==
       VAR_3 ?
       VAR_1 :
       VAR_2), 1,
      63, 32, &VAR_19);

   FUNC_4(VAR_19, &VAR_17, &VAR_18);

   VAR_13 = ((VAR_17 == 4095) || (VAR_17 == -4096) ||
      (VAR_18 == 4095) || (VAR_18 == -4096));

   if (!VAR_16 && (VAR_13 != VAR_15)) {
    if (!VAR_13)
     VAR_22 -= (u8) VAR_11;

    VAR_21 = 1;
    break;
   }

   if (VAR_13)
    VAR_22 += (u8) VAR_11;
   else
    VAR_22 -= (u8) VAR_11;

   if ((VAR_22 < VAR_24) || (VAR_22 > VAR_23)) {
    if (VAR_22 < VAR_24)
     VAR_22 = VAR_24;
    else
     VAR_22 = VAR_23;

    VAR_21 = 1;
    break;
   }

   VAR_16 = 0;
   VAR_15 = VAR_13;
  }

 } else {
  VAR_12 = 10;
  VAR_11 = 8;
  for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
   VAR_14 = (u8) VAR_22;
   FUNC_3(VAR_8, &VAR_14, VAR_0, VAR_10);

   FUNC_5(VAR_8,
      (VAR_10 ==
       VAR_3 ?
       VAR_1 :
       VAR_2), 1,
      63, 32, &VAR_19);

   FUNC_4(VAR_19, &VAR_17, &VAR_18);

   VAR_13 = ((VAR_17 == 4095) || (VAR_17 == -4096) ||
      (VAR_18 == 4095) || (VAR_18 == -4096));

   if (!VAR_16 && (VAR_13 != VAR_15)) {
    if (!VAR_13)
     VAR_22 -= (u8) VAR_11;

    VAR_21 = 1;
    break;
   }

   if (VAR_13)
    VAR_22 += (u8) VAR_11;
   else
    VAR_22 -= (u8) VAR_11;

   if ((VAR_22 < 0) || (VAR_22 > 127)) {
    if (VAR_22 < 0)
     VAR_22 = 0;
    else
     VAR_22 = 127;

    VAR_21 = 1;
    break;
   }

   VAR_16 = 0;
   VAR_15 = VAR_13;
  }

 }

 if (FUNC_2(VAR_8->pubpi.phy_rev, 7))
  return (u8) VAR_25[VAR_22];
 else
  return (u8) VAR_22;

}

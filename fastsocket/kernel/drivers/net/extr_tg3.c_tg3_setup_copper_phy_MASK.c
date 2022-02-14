
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef void* u16 ;
struct TYPE_2__ {scalar_t__ active_speed; scalar_t__ active_duplex; scalar_t__ autoneg; void* speed; void* duplex; scalar_t__ rmt_adv; } ;
struct tg3 {int mi_mode; int phy_id; int phy_flags; scalar_t__ led_ctrl; int mac_mode; int pdev; TYPE_1__ link_config; scalar_t__ link_up; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 void* VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct tg3*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct tg3*) ;
 int FUNC_4 (struct tg3*,int,void**,void**) ;
 scalar_t__ FUNC_5 (struct tg3*) ;
 int FUNC_6 (struct tg3*) ;
 scalar_t__ FUNC_7 (struct tg3*,int ) ;
 int FUNC_8 (struct tg3*) ;
 int FUNC_9 (struct tg3*,int ,int*) ;
 int FUNC_10 (struct tg3*,int ,int) ;
 scalar_t__ FUNC_11 (struct tg3*,int*) ;
 int FUNC_12 (struct tg3*) ;
 scalar_t__ FUNC_13 (struct tg3*,int*) ;
 int FUNC_14 (struct tg3*,int) ;
 int FUNC_15 (struct tg3*) ;
 int FUNC_16 (struct tg3*) ;
 scalar_t__ FUNC_17 (struct tg3*,int,int*) ;
 int FUNC_18 (struct tg3*) ;
 int FUNC_19 (struct tg3*,int,int) ;
 int FUNC_20 (struct tg3*,int) ;
 int FUNC_21 (struct tg3*,int ,int ) ;
 int FUNC_22 (struct tg3*,int,int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int) ;

__attribute__((used)) static int FUNC_27(struct tg3 *VAR_73, bool VAR_74)
{
 bool VAR_75;
 u32 VAR_76, VAR_77;
 u32 VAR_78, VAR_79;
 u16 VAR_80;
 u8 VAR_81;
 int VAR_82, VAR_83;

 FUNC_6(VAR_73);

 if ((VAR_73->mi_mode & VAR_24) != 0) {
  FUNC_25(VAR_23,
       (VAR_73->mi_mode & ~VAR_24));
  FUNC_26(80);
 }

 FUNC_10(VAR_73, VAR_37, 0);




 if ((FUNC_3(VAR_73) == VAR_2 ||
      FUNC_3(VAR_73) == VAR_3 ||
      FUNC_3(VAR_73) == VAR_4) &&
     VAR_73->link_up) {
  FUNC_17(VAR_73, VAR_35, &VAR_76);
  if (!FUNC_17(VAR_73, VAR_35, &VAR_76) &&
      !(VAR_76 & VAR_7))
   VAR_74 = 1;
 }
 if (VAR_74)
  FUNC_16(VAR_73);

 if ((VAR_73->phy_id & VAR_69) == VAR_67) {
  FUNC_17(VAR_73, VAR_35, &VAR_76);
  if (FUNC_17(VAR_73, VAR_35, &VAR_76) ||
      !FUNC_7(VAR_73, VAR_15))
   VAR_76 = 0;

  if (!(VAR_76 & VAR_7)) {
   VAR_83 = FUNC_8(VAR_73);
   if (VAR_83)
    return VAR_83;

   FUNC_17(VAR_73, VAR_35, &VAR_76);
   for (VAR_82 = 0; VAR_82 < 1000; VAR_82++) {
    FUNC_26(10);
    if (!FUNC_17(VAR_73, VAR_35, &VAR_76) &&
        (VAR_76 & VAR_7)) {
     FUNC_26(40);
     break;
    }
   }

   if ((VAR_73->phy_id & VAR_70) ==
       VAR_71 &&
       !(VAR_76 & VAR_7) &&
       VAR_73->link_config.active_speed == VAR_59) {
    VAR_83 = FUNC_16(VAR_73);
    if (!VAR_83)
     VAR_83 = FUNC_8(VAR_73);
    if (VAR_83)
     return VAR_83;
   }
  }
 } else if (FUNC_5(VAR_73) == VAR_9 ||
     FUNC_5(VAR_73) == VAR_10) {

  FUNC_22(VAR_73, 0x15, 0x0a75);
  FUNC_22(VAR_73, VAR_48, 0x8c68);
  FUNC_22(VAR_73, VAR_48, 0x8d68);
  FUNC_22(VAR_73, VAR_48, 0x8c68);
 }


 FUNC_17(VAR_73, VAR_47, &VAR_77);
 FUNC_17(VAR_73, VAR_47, &VAR_77);

 if (VAR_73->phy_flags & VAR_66)
  FUNC_22(VAR_73, VAR_45, ~VAR_46);
 else if (!(VAR_73->phy_flags & VAR_62))
  FUNC_22(VAR_73, VAR_45, ~0);

 if (FUNC_3(VAR_73) == VAR_0 ||
     FUNC_3(VAR_73) == VAR_1) {
  if (VAR_73->led_ctrl == VAR_19)
   FUNC_22(VAR_73, VAR_39,
         VAR_40);
  else
   FUNC_22(VAR_73, VAR_39, 0);
 }

 VAR_75 = 0;
 VAR_80 = VAR_60;
 VAR_81 = VAR_14;
 VAR_73->phy_flags &= ~VAR_65;
 VAR_73->link_config.rmt_adv = 0;

 if (VAR_73->phy_flags & VAR_61) {
  VAR_83 = FUNC_9(VAR_73,
       VAR_36,
       &VAR_77);
  if (!VAR_83 && !(VAR_77 & (1 << 10))) {
   FUNC_10(VAR_73,
          VAR_36,
          VAR_77 | (1 << 10));
   goto relink;
  }
 }

 VAR_76 = 0;
 for (VAR_82 = 0; VAR_82 < 100; VAR_82++) {
  FUNC_17(VAR_73, VAR_35, &VAR_76);
  if (!FUNC_17(VAR_73, VAR_35, &VAR_76) &&
      (VAR_76 & VAR_7))
   break;
  FUNC_26(40);
 }

 if (VAR_76 & VAR_7) {
  u32 VAR_84, VAR_85;

  FUNC_17(VAR_73, VAR_38, &VAR_84);
  for (VAR_82 = 0; VAR_82 < 2000; VAR_82++) {
   FUNC_26(10);
   if (!FUNC_17(VAR_73, VAR_38, &VAR_84) &&
       VAR_84)
    break;
  }

  FUNC_4(VAR_73, VAR_84,
          &VAR_80,
          &VAR_81);

  VAR_85 = 0;
  for (VAR_82 = 0; VAR_82 < 200; VAR_82++) {
   FUNC_17(VAR_73, VAR_34, &VAR_85);
   if (FUNC_17(VAR_73, VAR_34, &VAR_85))
    continue;
   if (VAR_85 && VAR_85 != 0x7fff)
    break;
   FUNC_26(10);
  }

  VAR_78 = 0;
  VAR_79 = 0;

  VAR_73->link_config.active_speed = VAR_80;
  VAR_73->link_config.active_duplex = VAR_81;

  if (VAR_73->link_config.autoneg == VAR_5) {
   bool VAR_86 = FUNC_15(VAR_73);

   if ((VAR_85 & VAR_6) &&
       VAR_86 &&
       FUNC_11(VAR_73, &VAR_78) &&
       FUNC_13(VAR_73, &VAR_79))
    VAR_75 = 1;





   if (!VAR_86 &&
       (VAR_73->phy_flags & VAR_64) &&
       !VAR_74) {
    FUNC_18(VAR_73);
    FUNC_16(VAR_73);
   }
  } else {
   if (!(VAR_85 & VAR_6) &&
       VAR_73->link_config.speed == VAR_80 &&
       VAR_73->link_config.duplex == VAR_81) {
    VAR_75 = 1;
   }
  }

  if (VAR_75 &&
      VAR_73->link_config.active_duplex == VAR_12) {
   u32 VAR_87, VAR_88;

   if (VAR_73->phy_flags & VAR_62) {
    VAR_87 = VAR_43;
    VAR_88 = VAR_44;
   } else {
    VAR_87 = VAR_41;
    VAR_88 = VAR_42;
   }

   if (!FUNC_17(VAR_73, VAR_87, &VAR_77) && (VAR_77 & VAR_88))
    VAR_73->phy_flags |= VAR_65;

   FUNC_19(VAR_73, VAR_78, VAR_79);
  }
 }

relink:
 if (!VAR_75 || (VAR_73->phy_flags & VAR_63)) {
  FUNC_12(VAR_73);

  if (FUNC_7(VAR_73, VAR_56)) {
   VAR_75 = 1;

   VAR_80 = VAR_59;
   VAR_81 = VAR_12;
   VAR_73->link_config.active_speed = VAR_80;
   VAR_73->link_config.active_duplex = VAR_81;
  }

  FUNC_17(VAR_73, VAR_35, &VAR_76);
  if (!FUNC_17(VAR_73, VAR_35, &VAR_76) &&
      (VAR_76 & VAR_7))
   VAR_75 = 1;
 }

 VAR_73->mac_mode &= ~VAR_29;
 if (VAR_75) {
  if (VAR_73->link_config.active_speed == VAR_58 ||
      VAR_73->link_config.active_speed == VAR_57)
   VAR_73->mac_mode |= VAR_30;
  else
   VAR_73->mac_mode |= VAR_28;
 } else if (VAR_73->phy_flags & VAR_62)
  VAR_73->mac_mode |= VAR_30;
 else
  VAR_73->mac_mode |= VAR_28;




 if (FUNC_7(VAR_73, VAR_55)) {
  u32 VAR_89 = FUNC_23(VAR_22);
  VAR_89 &= ~(VAR_16 | VAR_17);

  if (VAR_73->link_config.active_speed == VAR_57)
   VAR_89 |= VAR_18;
  else if (VAR_73->link_config.active_speed == VAR_58)
   VAR_89 |= (VAR_18 |
         VAR_17);
  else if (VAR_73->link_config.active_speed == VAR_59)
   VAR_89 |= (VAR_18 |
         VAR_16);

  FUNC_24(VAR_22, VAR_89);
  FUNC_26(40);
 }

 VAR_73->mac_mode &= ~VAR_26;
 if (VAR_73->link_config.active_duplex == VAR_13)
  VAR_73->mac_mode |= VAR_26;

 if (FUNC_3(VAR_73) == VAR_0) {
  if (VAR_75 &&
      FUNC_2(VAR_73, VAR_73->link_config.active_speed))
   VAR_73->mac_mode |= VAR_27;
  else
   VAR_73->mac_mode &= ~VAR_27;
 }




 if ((VAR_73->phy_id & VAR_69) == VAR_68 &&
     FUNC_5(VAR_73) == VAR_8) {
  VAR_73->mi_mode |= VAR_24;
  FUNC_25(VAR_23, VAR_73->mi_mode);
  FUNC_26(80);
 }

 FUNC_25(VAR_25, VAR_73->mac_mode);
 FUNC_26(40);

 FUNC_14(VAR_73, VAR_75);

 if (FUNC_7(VAR_73, VAR_72)) {

  FUNC_25(VAR_20, 0);
 } else {
  FUNC_25(VAR_20, VAR_21);
 }
 FUNC_26(40);

 if (FUNC_3(VAR_73) == VAR_0 &&
     VAR_75 &&
     VAR_73->link_config.active_speed == VAR_59 &&
     (FUNC_7(VAR_73, VAR_51) || FUNC_7(VAR_73, VAR_54))) {
  FUNC_26(120);
  FUNC_25(VAR_31,
       (VAR_33 |
        VAR_32));
  FUNC_26(40);
  FUNC_21(VAR_73,
         VAR_49,
         VAR_50);
 }


 if (FUNC_7(VAR_73, VAR_11)) {
  if (VAR_73->link_config.active_speed == VAR_58 ||
      VAR_73->link_config.active_speed == VAR_57)
   FUNC_0(VAR_73->pdev, VAR_52,
         VAR_53);
  else
   FUNC_1(VAR_73->pdev, VAR_52,
       VAR_53);
 }

 FUNC_20(VAR_73, VAR_75);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {int flags; int advertising; int speed; scalar_t__ duplex; size_t flow_mode; } ;
struct sky2_hw {int flags; int chip_id; scalar_t__ chip_rev; char pmd_type; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int const VAR_8 ;

 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
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
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_61 ;
 int FUNC_2 (int ) ;
 int VAR_62 ;
 int FUNC_3 (int) ;
 int VAR_63 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_64 ;
 int FUNC_6 (int ) ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_68 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_69 ;
 int VAR_70 ;
 int FUNC_15 (int ) ;
 int VAR_71 ;
 int VAR_72 ;
 int FUNC_16 (int) ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int FUNC_24 (unsigned int,int ) ;


 int* VAR_85 ;
 int* VAR_86 ;
 int* VAR_87 ;
 int FUNC_25 (struct sky2_hw*,unsigned int,int) ;
 int FUNC_26 (struct sky2_hw*,unsigned int,int,int) ;
 int FUNC_27 (struct sky2_hw*,unsigned int,int ,int) ;
 struct sky2_port* FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (struct sky2_hw*) ;
 int FUNC_30 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_31(struct sky2_hw *VAR_88, unsigned VAR_89)
{
 struct sky2_port *VAR_90 = FUNC_28(VAR_88->dev[VAR_89]);
 u16 VAR_91, VAR_92, VAR_93, VAR_94, VAR_95, VAR_96, VAR_97;

 if ( (VAR_90->flags & VAR_81) &&
     !(VAR_88->flags & VAR_84)) {
  u16 VAR_98 = FUNC_25(VAR_88, VAR_89, VAR_40);

  VAR_98 &= ~(VAR_62 | VAR_63 |
      VAR_61);
  VAR_98 |= FUNC_1(VAR_26);


  if (VAR_88->chip_id == VAR_7)

   VAR_98 |= FUNC_0(2) | VAR_60;
  else

   VAR_98 |= FUNC_2(0) | FUNC_3(1);

  FUNC_26(VAR_88, VAR_89, VAR_40, VAR_98);
 }

 VAR_91 = FUNC_25(VAR_88, VAR_89, VAR_48);
 if (FUNC_29(VAR_88)) {
  if (!(VAR_88->flags & VAR_83)) {

   VAR_91 |= FUNC_17(VAR_74) >> 1;

   if (VAR_88->chip_id == 132 &&
       VAR_88->chip_rev == VAR_9) {
    u16 VAR_99;


    VAR_99 = FUNC_25(VAR_88, VAR_89, VAR_42);
    VAR_99 |= VAR_65;
    FUNC_26(VAR_88, VAR_89, VAR_42, VAR_99);
   }
  } else {

   VAR_91 &= ~VAR_77;


   VAR_91 |= FUNC_17(VAR_74);


   if ( (VAR_90->flags & VAR_81)
       && (VAR_88->flags & VAR_84)) {

    VAR_91 &= ~VAR_73;
    VAR_91 |= FUNC_16(2) | VAR_72;
   }
  }
 } else {



  VAR_91 &= ~VAR_78;
 }

 FUNC_26(VAR_88, VAR_89, VAR_48, VAR_91);


 if (VAR_88->chip_id == 130 && (VAR_88->flags & VAR_82)) {
  VAR_94 = FUNC_25(VAR_88, VAR_89, VAR_39);


  FUNC_26(VAR_88, VAR_89, VAR_39, 2);
  VAR_91 = FUNC_25(VAR_88, VAR_89, VAR_48);
  VAR_91 &= ~VAR_70;
  VAR_91 |= FUNC_15(VAR_69);
  FUNC_26(VAR_88, VAR_89, VAR_48, VAR_91);

  if (VAR_88->pmd_type == 'P') {

   FUNC_26(VAR_88, VAR_89, VAR_39, 1);


   VAR_91 = FUNC_25(VAR_88, VAR_89, VAR_48);
   VAR_91 |= VAR_66;
   FUNC_26(VAR_88, VAR_89, VAR_48, VAR_91);
  }

  FUNC_26(VAR_88, VAR_89, VAR_39, VAR_94);
 }

 VAR_91 = VAR_32;
 VAR_92 = 0;
 VAR_93 = VAR_29;
 VAR_97 = 0;

 if (VAR_90->flags & VAR_81) {
  if (FUNC_29(VAR_88)) {
   if (VAR_90->advertising & VAR_0)
    VAR_92 |= VAR_50;
   if (VAR_90->advertising & VAR_1)
    VAR_92 |= VAR_51;
   if (VAR_90->advertising & VAR_2)
    VAR_93 |= VAR_55;
   if (VAR_90->advertising & VAR_3)
    VAR_93 |= VAR_56;
   if (VAR_90->advertising & VAR_4)
    VAR_93 |= VAR_57;
   if (VAR_90->advertising & VAR_5)
    VAR_93 |= VAR_58;

  } else {
   if (VAR_90->advertising & VAR_0)
    VAR_93 |= VAR_53;
   if (VAR_90->advertising & VAR_1)
    VAR_93 |= VAR_54;
  }


  VAR_91 |= VAR_30 | VAR_33;
 } else {

  VAR_92 = VAR_52;


  VAR_97 |= VAR_16 | VAR_18;

  switch (VAR_90->speed) {
  case 128:
   VAR_91 |= VAR_35;
   VAR_97 |= VAR_21;
   break;
  case 129:
   VAR_91 |= VAR_34;
   VAR_97 |= VAR_20;
   break;
  }

  if (VAR_90->duplex == VAR_10) {
   VAR_97 |= VAR_19;
   VAR_91 |= VAR_31;
  } else if (VAR_90->speed < 128)
   VAR_90->flow_mode = VAR_11;
 }

 if (VAR_90->flags & VAR_80) {
  if (FUNC_29(VAR_88))
   VAR_93 |= VAR_85[VAR_90->flow_mode];
  else
   VAR_93 |= VAR_86[VAR_90->flow_mode];
 } else {
  VAR_97 |= VAR_17;
   VAR_97 |= VAR_87[VAR_90->flow_mode];


  if (VAR_90->flow_mode & VAR_12)
   FUNC_30(VAR_88, FUNC_24(VAR_89, VAR_13), VAR_15);
  else
   FUNC_30(VAR_88, FUNC_24(VAR_89, VAR_13), VAR_14);
 }

 FUNC_27(VAR_88, VAR_89, VAR_22, VAR_97);

 if (VAR_88->flags & VAR_83)
  FUNC_26(VAR_88, VAR_89, VAR_36, VAR_92);

 FUNC_26(VAR_88, VAR_89, VAR_37, VAR_93);
 FUNC_26(VAR_88, VAR_89, VAR_38, VAR_91);


 VAR_95 = FUNC_14(VAR_79);
 VAR_96 = 0;

 switch (VAR_88->chip_id) {
 case 133:

  VAR_95 |= FUNC_11(VAR_6) << 1;

  VAR_91 = FUNC_25(VAR_88, VAR_89, VAR_41);


  VAR_91 &= ~VAR_64;

  VAR_91 |= FUNC_5(VAR_23);
  FUNC_26(VAR_88, VAR_89, VAR_41, VAR_91);
  break;

 case 132:

  VAR_91 = FUNC_25(VAR_88, VAR_89, VAR_48);
  VAR_91 |= VAR_76;


  VAR_91 &= ~(VAR_75 | VAR_71);
  FUNC_26(VAR_88, VAR_89, VAR_48, VAR_91);


  VAR_91 = FUNC_6(VAR_23) |
   FUNC_5(VAR_24) |
   FUNC_4(VAR_25);

  FUNC_26(VAR_88, VAR_89, VAR_41, VAR_91);
  break;

 case 130:
  VAR_94 = FUNC_25(VAR_88, VAR_89, VAR_39);


  FUNC_26(VAR_88, VAR_89, VAR_39, 3);


  FUNC_26(VAR_88, VAR_89, VAR_48,
        (FUNC_8(1) |
         FUNC_7(7) |
         FUNC_10(7) |
         FUNC_9(7)));


  FUNC_26(VAR_88, VAR_89, VAR_49,
        (FUNC_21(4) |
         FUNC_19(4) |
         FUNC_20(2) |
         FUNC_18(2) |
         FUNC_23(2) |
         FUNC_22(2)));


  FUNC_26(VAR_88, VAR_89, VAR_39, VAR_94);
  break;

 case 135:
 case 134:
 case 131:
  VAR_94 = FUNC_25(VAR_88, VAR_89, VAR_39);


  FUNC_26(VAR_88, VAR_89, VAR_39, 3);


  FUNC_26(VAR_88, VAR_89, VAR_48,
        (FUNC_8(1) |
         FUNC_7(8) |
         FUNC_10(7) |
         FUNC_9(7)));


  FUNC_26(VAR_88, VAR_89, VAR_43,
        VAR_95 | FUNC_11(VAR_6));

  FUNC_26(VAR_88, VAR_89, VAR_39, VAR_94);
  break;

 default:

  VAR_95 |= FUNC_11(VAR_6) | VAR_68;


  VAR_96 |= FUNC_13(VAR_27);
 }

 if (VAR_88->chip_id == 135 || VAR_88->chip_id == VAR_8) {

  FUNC_26(VAR_88, VAR_89, VAR_39, 255);


  FUNC_26(VAR_88, VAR_89, 0x18, 0xaa99);
  FUNC_26(VAR_88, VAR_89, 0x17, 0x2011);

  if (VAR_88->chip_id == 135) {

   FUNC_26(VAR_88, VAR_89, 0x18, 0xa204);
   FUNC_26(VAR_88, VAR_89, 0x17, 0x2002);
  }


  FUNC_26(VAR_88, VAR_89, VAR_39, 0);
 } else if (VAR_88->chip_id == 132 &&
     VAR_88->chip_rev == VAR_9) {

  FUNC_26(VAR_88, VAR_89, VAR_46, 17);
  FUNC_26(VAR_88, VAR_89, VAR_47, 0x3f60);
 } else if (VAR_88->chip_id != 134 &&
     VAR_88->chip_id < 131) {

  FUNC_26(VAR_88, VAR_89, VAR_44, VAR_95);

  if ( !(VAR_90->flags & VAR_81)
       || VAR_90->speed == 129) {

   VAR_96 |= FUNC_12(VAR_28);
  }

  if (VAR_96)
   FUNC_26(VAR_88, VAR_89, VAR_45, VAR_96);

 }


 if (VAR_90->flags & VAR_81)
  FUNC_26(VAR_88, VAR_89, VAR_43, VAR_67);
 else
  FUNC_26(VAR_88, VAR_89, VAR_43, VAR_59);
}

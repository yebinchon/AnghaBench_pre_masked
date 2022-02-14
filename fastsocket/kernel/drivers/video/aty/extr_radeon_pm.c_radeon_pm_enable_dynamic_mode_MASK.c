
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeonfb_info {scalar_t__ family; int vram_width; scalar_t__ is_mobility; int has_CRTC2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int ,int) ;
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
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct radeonfb_info *VAR_90)
{
 u32 VAR_91;


 if (!VAR_90->has_CRTC2) {
                VAR_91 = FUNC_0(VAR_86);

  if ((FUNC_1(VAR_15) & VAR_1) > VAR_0)
                    VAR_91 &= ~(VAR_52 | VAR_60);
                VAR_91 &= ~(VAR_56 | VAR_53 |
    VAR_65 | VAR_62 |
    VAR_57 | VAR_61 |
    VAR_59 | VAR_63 |
    VAR_64);
                FUNC_2(VAR_86, VAR_91);
  return;
 }


 if (VAR_90->family == VAR_8) {
  VAR_91 = FUNC_0(VAR_87);
  VAR_91 &= ~(VAR_47 |
    VAR_46 |
    VAR_45);
  VAR_91 |= (VAR_49 |
    VAR_48 |
    VAR_44);
  FUNC_2(VAR_87, VAR_91);

  VAR_91 = FUNC_0(VAR_86);
  VAR_91 &= ~(VAR_54 | VAR_52 |
    VAR_56 | VAR_53 |
    VAR_65 | VAR_55 |
    VAR_73 | VAR_57 |
    VAR_67 | VAR_69 |
    VAR_68 | VAR_71 |
    VAR_72 | VAR_66 |
    VAR_70 | VAR_58);
  VAR_91 |= VAR_50;
  FUNC_2(VAR_86, VAR_91);

  VAR_91 = FUNC_0(VAR_88);
  VAR_91 &= ~VAR_75;
  VAR_91 |= VAR_74 |
   VAR_76 |
   VAR_77;
  FUNC_2(VAR_88, VAR_91);

  VAR_91 = FUNC_0(VAR_89);
  VAR_91 |= (VAR_78 |
   VAR_79);
  FUNC_2(VAR_89, VAR_91);

  VAR_91 = FUNC_0(VAR_84);
  VAR_91 |= (VAR_29 |
   VAR_30 |
   VAR_28 |
   VAR_36 |
   VAR_31 |
   VAR_33 |
   VAR_39 |
   VAR_34 |
   VAR_35 |
   VAR_40 |
   VAR_41 |
   VAR_37 |
   VAR_38);
  FUNC_2(VAR_84, VAR_91);

  VAR_91 = FUNC_0(VAR_83);
  VAR_91 |= (VAR_25 |
   VAR_23);
  FUNC_2(VAR_83, VAR_91);

  VAR_91 = FUNC_0(VAR_82);
  VAR_91 |= (VAR_17 | VAR_18);
  VAR_91 &= ~(VAR_19 |
    VAR_20 |
    VAR_16);






  if ((VAR_91 & VAR_21) &&
      (VAR_91 & VAR_22)) {

   VAR_91 = FUNC_0(VAR_82);
   if (VAR_90->vram_width == 64) {
       if (FUNC_1(VAR_27) & VAR_43)
    VAR_91 &= ~VAR_22;
       else
    VAR_91 &= ~VAR_21;
   } else {
       VAR_91 &= ~(VAR_21 |
         VAR_22);
   }
  }
  FUNC_2(VAR_82, VAR_91);
  return;
 }


 if (VAR_90->family == VAR_2 || VAR_90->family == VAR_3) {
  VAR_91 = FUNC_0(VAR_86);
  VAR_91 &= ~(VAR_73);
  VAR_91 |= VAR_52;
  FUNC_2(VAR_86, VAR_91);
  FUNC_3(15);

  VAR_91 = FUNC_0(VAR_87);
  VAR_91 &= ~(VAR_47 |
    VAR_46 |
    VAR_45);
  FUNC_2(VAR_87, VAR_91);
 }



 VAR_91 = FUNC_0( VAR_81);
 VAR_91 &= ~(VAR_10|
   VAR_12|
   VAR_13);
 VAR_91 |= VAR_14 |
        (0x01 << VAR_11);
 FUNC_2( VAR_81, VAR_91);
 FUNC_3(15);

 VAR_91 = FUNC_0(VAR_80);
 VAR_91 |= VAR_9;
 FUNC_2(VAR_80, VAR_91);
 FUNC_3(15);




 VAR_91 = FUNC_0(VAR_86);
 VAR_91 &= ~VAR_51;


 if ((VAR_90->family == VAR_6 &&
      ((FUNC_1(VAR_15) & VAR_1) < VAR_0)) ||
     ((VAR_90->family == VAR_4) &&
      ((FUNC_1(VAR_15) & VAR_1) <= VAR_0))) {
  VAR_91 |= VAR_52;
  VAR_91 |= VAR_67;
 }
 FUNC_2(VAR_86, VAR_91);
 FUNC_3(15);

 if ((VAR_90->family == VAR_5) ||
     (VAR_90->family == VAR_6) ||
     (VAR_90->family == VAR_7)) {
  VAR_91 = FUNC_0(VAR_88);
  VAR_91 &= ~VAR_75;


  if (((VAR_90->family == VAR_5) ||
       (VAR_90->family == VAR_6)) &&
      ((FUNC_1(VAR_15) & VAR_1) < VAR_0))
   VAR_91 |= VAR_75;

  FUNC_2(VAR_88, VAR_91);
  FUNC_3(15);
 }



 if (((VAR_90->family == VAR_5) ||
      (VAR_90->family == VAR_6)) &&
     ((FUNC_1(VAR_15) & VAR_1) < VAR_0)) {
  VAR_91 = FUNC_0(VAR_85);
  VAR_91 |= VAR_42;
  FUNC_2(VAR_85, VAR_91);
  FUNC_3(15);
 }

 VAR_91 = FUNC_0(VAR_84);
 VAR_91 |= VAR_29 |
  VAR_30|
  VAR_31|
  VAR_33|
  VAR_32|
  VAR_34|
  VAR_35;
 FUNC_2(VAR_84, VAR_91);
 FUNC_3(15);

 VAR_91 = FUNC_0(VAR_89);
 VAR_91 |= VAR_78 |
  VAR_79;
 FUNC_2(VAR_89, VAR_91);
}

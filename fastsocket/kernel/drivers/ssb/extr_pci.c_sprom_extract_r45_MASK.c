
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ssb_sprom {int revision; scalar_t__ il0mac; } ;
typedef int __be16 ;
struct TYPE_2__ {int a3; int a2; int a1; int a0; } ;


 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int * VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 TYPE_1__ VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int FUNC_2 (int ) ;
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
 int FUNC_3 (struct ssb_sprom*,int const*) ;

__attribute__((used)) static void FUNC_4(struct ssb_sprom *VAR_75, const u16 *VAR_76)
{
 int VAR_77;
 u16 VAR_78;
 u16 VAR_79;

 if (VAR_75->revision == 4)
  VAR_79 = VAR_33;
 else
  VAR_79 = VAR_55;

 for (VAR_77 = 0; VAR_77 < 3; VAR_77++) {
  VAR_78 = VAR_76[FUNC_1(VAR_79) + VAR_77];
  *(((__be16 *)VAR_75->il0mac) + VAR_77) = FUNC_2(VAR_78);
 }
 FUNC_0(VAR_65, VAR_21, VAR_22, 0);
 FUNC_0(VAR_66, VAR_21, VAR_23,
      VAR_24);
 FUNC_0(VAR_60, VAR_19, 0xFFFF, 0);
 if (VAR_75->revision == 4) {
  FUNC_0(VAR_56[0], VAR_20, 0xff00, 8);
  FUNC_0(VAR_56[1], VAR_20, 0x00ff, 0);
  FUNC_0(VAR_64, VAR_18, 0xFFFF, 0);
  FUNC_0(VAR_63, VAR_17, 0xFFFF, 0);
  FUNC_0(VAR_62, VAR_16, 0xFFFF, 0);
  FUNC_0(VAR_61, VAR_15, 0xFFFF, 0);
 } else {
  FUNC_0(VAR_56[0], VAR_46, 0xff00, 8);
  FUNC_0(VAR_56[1], VAR_46, 0x00ff, 0);
  FUNC_0(VAR_64, VAR_45, 0xFFFF, 0);
  FUNC_0(VAR_63, VAR_44, 0xFFFF, 0);
  FUNC_0(VAR_62, VAR_43, 0xFFFF, 0);
  FUNC_0(VAR_61, VAR_42, 0xFFFF, 0);
 }
 FUNC_0(VAR_57, VAR_10, VAR_11,
      VAR_12);
 FUNC_0(VAR_58, VAR_10, VAR_13,
      VAR_14);
 FUNC_0(VAR_74, VAR_40, VAR_41, 0);
 FUNC_0(VAR_72, VAR_40, VAR_36,
      VAR_37);
 FUNC_0(VAR_73, VAR_38, VAR_39, 0);
 FUNC_0(VAR_71, VAR_38, VAR_34,
      VAR_35);
 if (VAR_75->revision == 4) {
  FUNC_0(VAR_67, VAR_25, VAR_26, 0);
  FUNC_0(VAR_68, VAR_25, VAR_27,
       VAR_28);
  FUNC_0(VAR_69, VAR_29, VAR_30, 0);
  FUNC_0(VAR_70, VAR_29, VAR_31,
       VAR_32);
 } else {
  FUNC_0(VAR_67, VAR_47, VAR_48, 0);
  FUNC_0(VAR_68, VAR_47, VAR_49,
       VAR_50);
  FUNC_0(VAR_69, VAR_51, VAR_52, 0);
  FUNC_0(VAR_70, VAR_51, VAR_53,
       VAR_54);
 }


 FUNC_0(VAR_59.a0, VAR_1,
      VAR_0, VAR_2);
 FUNC_0(VAR_59.a1, VAR_1,
      VAR_3, VAR_4);
 FUNC_0(VAR_59.a2, VAR_6,
      VAR_5, VAR_7);
 FUNC_0(VAR_59.a3, VAR_6,
      VAR_8, VAR_9);

 FUNC_3(VAR_75, VAR_76);


}

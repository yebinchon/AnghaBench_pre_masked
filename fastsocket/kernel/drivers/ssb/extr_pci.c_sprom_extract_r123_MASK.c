
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {void* a1; void* a0; } ;
struct ssb_sprom {int revision; TYPE_1__ antenna_gain; scalar_t__ et1mac; scalar_t__ et0mac; scalar_t__ il0mac; } ;
typedef int __be16 ;


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
 int * VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_2 (int ) ;
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
 void* FUNC_3 (int,int const*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ssb_sprom *VAR_72, const u16 *VAR_73)
{
 int VAR_74;
 u16 VAR_75;
 u16 VAR_76[3];

 if (VAR_72->revision == 3)
  VAR_76[0] = VAR_46;
 else {
  VAR_76[0] = VAR_30;
  VAR_76[1] = VAR_14;
  VAR_76[2] = VAR_15;
 }
 for (VAR_74 = 0; VAR_74 < 3; VAR_74++) {
  VAR_75 = VAR_73[FUNC_1(VAR_76[0]) + VAR_74];
  *(((__be16 *)VAR_72->il0mac) + VAR_74) = FUNC_2(VAR_75);
 }
 if (VAR_72->revision < 3) {
  for (VAR_74 = 0; VAR_74 < 3; VAR_74++) {
   VAR_75 = VAR_73[FUNC_1(VAR_76[1]) + VAR_74];
   *(((__be16 *)VAR_72->et0mac) + VAR_74) = FUNC_2(VAR_75);
  }
  for (VAR_74 = 0; VAR_74 < 3; VAR_74++) {
   VAR_75 = VAR_73[FUNC_1(VAR_76[2]) + VAR_74];
   *(((__be16 *)VAR_72->et1mac) + VAR_74) = FUNC_2(VAR_75);
  }
 }
 FUNC_0(VAR_55, VAR_16, VAR_17, 0);
 FUNC_0(VAR_57, VAR_16, VAR_19,
      VAR_20);
 FUNC_0(VAR_54, VAR_16, VAR_18, 14);
 FUNC_0(VAR_56, VAR_16, VAR_21, 15);
 FUNC_0(VAR_50, VAR_5, VAR_10, 0);
 if (VAR_72->revision == 1)
  FUNC_0(VAR_53, VAR_5, VAR_11,
       VAR_12);
 FUNC_0(VAR_48, VAR_5, VAR_6,
      VAR_7);
 FUNC_0(VAR_49, VAR_5, VAR_8,
      VAR_9);
 FUNC_0(VAR_66, VAR_39, 0xFFFF, 0);
 FUNC_0(VAR_67, VAR_40, 0xFFFF, 0);
 FUNC_0(VAR_68, VAR_41, 0xFFFF, 0);
 FUNC_0(VAR_69, VAR_42, 0xFFFF, 0);
 FUNC_0(VAR_70, VAR_43, 0xFFFF, 0);
 FUNC_0(VAR_71, VAR_44, 0xFFFF, 0);
 FUNC_0(VAR_58, VAR_22, VAR_23, 0);
 FUNC_0(VAR_59, VAR_22, VAR_24,
      VAR_25);
 FUNC_0(VAR_60, VAR_26, VAR_27, 0);
 FUNC_0(VAR_61, VAR_26, VAR_28,
      VAR_29);
 FUNC_0(VAR_64, VAR_35, VAR_36,
      VAR_37);
 FUNC_0(VAR_65, VAR_35, VAR_38, 0);
 FUNC_0(VAR_62, VAR_31, VAR_32,
      VAR_33);
 FUNC_0(VAR_63, VAR_31, VAR_34, 0);
 FUNC_0(VAR_52, VAR_4, 0xFFFF, 0);
 if (VAR_72->revision >= 2)
  FUNC_0(VAR_51, VAR_45, 0xFFFF, 0);
 FUNC_0(VAR_47[0], VAR_13, 0xff00, 8);
 FUNC_0(VAR_47[1], VAR_13, 0x00ff, 0);


 VAR_72->antenna_gain.a0 = FUNC_3(VAR_72->revision, VAR_73,
          VAR_2,
          VAR_3);
 VAR_72->antenna_gain.a1 = FUNC_3(VAR_72->revision, VAR_73,
          VAR_0,
          VAR_1);
}

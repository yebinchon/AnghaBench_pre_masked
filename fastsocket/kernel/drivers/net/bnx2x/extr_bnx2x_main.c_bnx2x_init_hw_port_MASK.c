
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x {int flags; int mf_mode; scalar_t__ path_has_ovlan; TYPE_1__* dev; int qm_cid_count; } ;
struct TYPE_2__ {int mtu; } ;


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
 int FUNC_0 (struct bnx2x*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_9 (struct bnx2x*) ;
 scalar_t__ FUNC_10 (struct bnx2x*) ;
 scalar_t__ FUNC_11 (struct bnx2x*) ;
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
 int FUNC_12 (struct bnx2x*,int) ;
 int FUNC_13 (struct bnx2x*,int,int) ;
 int VAR_73 ;
 int VAR_74 ;
 int FUNC_14 (struct bnx2x*,int ,int) ;
 int FUNC_15 (struct bnx2x*,int ,int ) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct bnx2x *VAR_75)
{
 int VAR_76 = FUNC_0(VAR_75);
 int VAR_77 = VAR_76 ? VAR_66 : VAR_65;
 u32 VAR_78, VAR_79;
 u32 VAR_80;

 FUNC_8(VAR_46, "starting port init  port %d\n", VAR_76);

 FUNC_13(VAR_75, VAR_54 + VAR_76*4, 0);

 FUNC_14(VAR_75, VAR_12, VAR_77);
 FUNC_14(VAR_75, VAR_18, VAR_77);
 FUNC_14(VAR_75, VAR_19, VAR_77);






 if (!FUNC_3(VAR_75))
  FUNC_13(VAR_75, VAR_64, 1);

 FUNC_14(VAR_75, VAR_1, VAR_77);
 FUNC_14(VAR_75, VAR_8, VAR_77);
 FUNC_14(VAR_75, VAR_16, VAR_77);
 FUNC_14(VAR_75, VAR_20, VAR_77);

 FUNC_14(VAR_75, VAR_22, VAR_77);
 FUNC_14(VAR_75, VAR_26, VAR_77);
 FUNC_14(VAR_75, VAR_3, VAR_77);
 FUNC_14(VAR_75, VAR_30, VAR_77);


 FUNC_15(VAR_75, VAR_75->qm_cid_count, VAR_40);

 if (FUNC_7(VAR_75)) {
  FUNC_14(VAR_75, VAR_23, VAR_77);
  FUNC_13(VAR_75, VAR_74 + VAR_76*4, 20);
  FUNC_13(VAR_75, VAR_73 + VAR_76*4, 31);
 }

 FUNC_14(VAR_75, VAR_9, VAR_77);

 FUNC_14(VAR_75, VAR_2, VAR_77);

 if (FUNC_1(VAR_75) || FUNC_2(VAR_75)) {

  if (FUNC_9(VAR_75))
   VAR_78 = ((VAR_75->flags & VAR_59) ? 160 : 246);
  else if (VAR_75->dev->mtu > 4096) {
   if (VAR_75->flags & VAR_59)
    VAR_78 = 160;
   else {
    VAR_80 = VAR_75->dev->mtu;

    VAR_78 = 96 + (VAR_80/64) +
      ((VAR_80 % 64) ? 1 : 0);
   }
  } else
   VAR_78 = ((VAR_75->flags & VAR_59) ? 80 : 160);
  VAR_79 = VAR_78 + 56;
  FUNC_13(VAR_75, VAR_37 + VAR_76*4, VAR_78);
  FUNC_13(VAR_75, VAR_36 + VAR_76*4, VAR_79);
 }

 if (FUNC_6(VAR_75))
  FUNC_13(VAR_75, (FUNC_0(VAR_75) ?
       VAR_35 :
       VAR_34), 40);

 FUNC_14(VAR_75, VAR_17, VAR_77);
 if (FUNC_5(VAR_75)) {
  if (FUNC_10(VAR_75)) {

   FUNC_13(VAR_75, FUNC_0(VAR_75) ?
          VAR_68 :
          VAR_67, 0xE);
   FUNC_13(VAR_75, FUNC_0(VAR_75) ?
          VAR_70 :
          VAR_69, 0x6);
   FUNC_13(VAR_75, FUNC_0(VAR_75) ?
          VAR_72 :
          VAR_71, 0xA);
  } else {




   FUNC_13(VAR_75, FUNC_0(VAR_75) ?
          VAR_68 :
          VAR_67,
          (VAR_75->path_has_ovlan ? 7 : 6));
  }
 }

 FUNC_14(VAR_75, VAR_24, VAR_77);
 FUNC_14(VAR_75, VAR_6, VAR_77);
 FUNC_14(VAR_75, VAR_28, VAR_77);
 FUNC_14(VAR_75, VAR_32, VAR_77);

 FUNC_14(VAR_75, VAR_25, VAR_77);
 FUNC_14(VAR_75, VAR_29, VAR_77);
 FUNC_14(VAR_75, VAR_7, VAR_77);
 FUNC_14(VAR_75, VAR_33, VAR_77);

 FUNC_14(VAR_75, VAR_27, VAR_77);
 FUNC_14(VAR_75, VAR_31, VAR_77);

 FUNC_14(VAR_75, VAR_15, VAR_77);

 if (FUNC_3(VAR_75)) {

  FUNC_13(VAR_75, VAR_63 + VAR_76*4, 0);


  FUNC_13(VAR_75, VAR_61 + VAR_76*4, (9040/16));

  FUNC_13(VAR_75, VAR_62 + VAR_76*4, (9040/16) + 553 - 22);


  FUNC_13(VAR_75, VAR_60 + VAR_76*4, 1);
  FUNC_16(50);
  FUNC_13(VAR_75, VAR_60 + VAR_76*4, 0);
 }

 if (FUNC_7(VAR_75))
  FUNC_14(VAR_75, VAR_21, VAR_77);

 FUNC_14(VAR_75, VAR_4, VAR_77);
 FUNC_14(VAR_75, VAR_5, VAR_77);

 if (FUNC_1(VAR_75)) {
  FUNC_13(VAR_75, VAR_38 + VAR_76*8, 0);
  FUNC_13(VAR_75, VAR_39 + VAR_76*8, 0);
 }
 FUNC_14(VAR_75, VAR_10, VAR_77);

 FUNC_14(VAR_75, VAR_11, VAR_77);

 FUNC_14(VAR_75, VAR_13, VAR_77);




 VAR_80 = FUNC_9(VAR_75) ? 0xF7 : 0x7;

 VAR_80 |= FUNC_1(VAR_75) ? 0 : 0x10;
 FUNC_13(VAR_75, VAR_43 + VAR_76*4, VAR_80);

 FUNC_14(VAR_75, VAR_14, VAR_77);

 if (!FUNC_3(VAR_75)) {



  if (FUNC_10(VAR_75))
   FUNC_13(VAR_75, FUNC_0(VAR_75) ?
          VAR_56 :
          VAR_55, 0xE);
  else
   FUNC_13(VAR_75, FUNC_0(VAR_75) ?
          VAR_56 :
          VAR_55,
          FUNC_11(VAR_75) ? 7 : 6);

  if (FUNC_4(VAR_75))
   FUNC_13(VAR_75, FUNC_0(VAR_75) ?
       VAR_52 :
       VAR_53, FUNC_9(VAR_75));
 }
 if (!FUNC_4(VAR_75))
  FUNC_13(VAR_75, VAR_58 + VAR_76*4, 1);

 if (!FUNC_1(VAR_75)) {

  FUNC_13(VAR_75, VAR_49 + VAR_76*4,
         (FUNC_11(VAR_75) ? 0x1 : 0x2));

  if (!FUNC_3(VAR_75)) {
   VAR_80 = 0;
   switch (VAR_75->mf_mode) {
   case 129:
    VAR_80 = 1;
    break;
   case 128:
   case 130:
    VAR_80 = 2;
    break;
   }

   FUNC_13(VAR_75, (FUNC_0(VAR_75) ? VAR_51 :
        VAR_50), VAR_80);
  }
  {
   FUNC_13(VAR_75, VAR_47 + VAR_76*4, 0);
   FUNC_13(VAR_75, VAR_48 + VAR_76*4, 0);
   FUNC_13(VAR_75, VAR_57 + VAR_76*4, 1);
  }
 }


 VAR_80 = FUNC_12(VAR_75, VAR_44);
 if (VAR_80 & VAR_45) {
  u32 VAR_81 = (VAR_76 ? VAR_42 :
           VAR_41);
  VAR_80 = FUNC_12(VAR_75, VAR_81);
  VAR_80 |= VAR_0;
  FUNC_13(VAR_75, VAR_81, VAR_80);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {scalar_t__ screen_size; int device; struct cirrusfb_info* par; } ;
struct cirrusfb_info {size_t btype; int regbase; } ;
struct cirrusfb_board_info_rec {int sr07; scalar_t__ init_sr07; } ;
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
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_0 (struct cirrusfb_info*,int ,int) ;
 int FUNC_1 (struct cirrusfb_info*,int ) ;
 int FUNC_2 (struct cirrusfb_info*,int) ;
 int FUNC_3 (struct cirrusfb_info*,int) ;
 int FUNC_4 (int) ;
 struct cirrusfb_board_info_rec* VAR_63 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (struct cirrusfb_info*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static void FUNC_13(struct fb_info *VAR_64)
{
 struct cirrusfb_info *VAR_65 = VAR_64->par;
 const struct cirrusfb_board_info_rec *VAR_66;

 FUNC_4(VAR_65 != ((void*)0));

 VAR_66 = &VAR_63[VAR_65->btype];


 switch (VAR_65->btype) {
 case 130:
  FUNC_2(VAR_65, 0x01);
  FUNC_8(500);
  FUNC_2(VAR_65, 0x51);
  FUNC_8(500);
  break;
 case 132:
  FUNC_3(VAR_65, 0xff);
  FUNC_8(500);
  break;
 case 129:
 case 128:
  FUNC_2(VAR_65, 0x1f);
  FUNC_8(500);
  FUNC_2(VAR_65, 0x4f);
  FUNC_8(500);
  break;
 case 131:

  FUNC_10(VAR_65->regbase, VAR_1, 0x00);
  FUNC_7(100);

  FUNC_11(VAR_65->regbase, VAR_3, 0x00);
 case 135:

  FUNC_11(VAR_65->regbase, VAR_2, 0x00);
 case 136:

  FUNC_11(VAR_65->regbase, VAR_4, 0x00);
  break;

 case 134:
 case 133:

  break;

 default:
  FUNC_5(VAR_64->device, "Warning: Unknown board type\n");
  break;
 }


 FUNC_4(VAR_64->screen_size > 0);





 if (VAR_65->btype != 131) {
  FUNC_0(VAR_65, VAR_20, 0x10);
  FUNC_0(VAR_65, VAR_9, 0x01);
  FUNC_0(VAR_65, VAR_20, 0x08);

  if (VAR_65->btype != 129)
   FUNC_0(VAR_65, VAR_21, 0x01);


  FUNC_12(VAR_65->regbase, VAR_62, 0x03);


  FUNC_12(VAR_65->regbase, VAR_59, 0x21);




  FUNC_12(VAR_65->regbase, VAR_17, 0x12);

  switch (VAR_65->btype) {
  case 135:
   FUNC_12(VAR_65->regbase, VAR_19, 0x98);
   break;
  case 136:
  case 134:
  case 133:
   break;
  case 129:



   break;
  default:
   FUNC_12(VAR_65->regbase, VAR_14, 0x0f);
   FUNC_12(VAR_65->regbase, VAR_19, 0xb0);
   break;
  }
 }

 FUNC_12(VAR_65->regbase, VAR_61, 0xff);

 FUNC_12(VAR_65->regbase, VAR_58, 0x00);

 FUNC_12(VAR_65->regbase, VAR_60, 0x0a);


 if (VAR_66->init_sr07)
  FUNC_12(VAR_65->regbase, VAR_18, VAR_66->sr07);





 FUNC_12(VAR_65->regbase, VAR_10, 0x00);

 FUNC_12(VAR_65->regbase, VAR_11, 0x00);

 FUNC_12(VAR_65->regbase, VAR_12, 0x00);

 FUNC_12(VAR_65->regbase, VAR_13, 0x00);


 if (VAR_65->btype != 131) {

  FUNC_12(VAR_65->regbase, VAR_15, 0x00);

  FUNC_12(VAR_65->regbase, VAR_16, 0x02);
 }


 FUNC_10(VAR_65->regbase, VAR_46, 0x00);

 FUNC_10(VAR_65->regbase, VAR_45, 0x20);

 FUNC_10(VAR_65->regbase, VAR_42, 0x00);

 FUNC_10(VAR_65->regbase, VAR_43, 0x00);

 FUNC_10(VAR_65->regbase, VAR_44, 0x00);


 FUNC_10(VAR_65->regbase, VAR_47, 0x00);


 FUNC_10(VAR_65->regbase, VAR_0, 0x02);


 FUNC_11(VAR_65->regbase, VAR_56, 0x00);

 FUNC_11(VAR_65->regbase, VAR_55, 0x00);

 FUNC_11(VAR_65->regbase, VAR_50, 0x00);

 FUNC_11(VAR_65->regbase, VAR_51, 0x00);

 FUNC_11(VAR_65->regbase, VAR_54, 0x00);

 FUNC_11(VAR_65->regbase, VAR_53, 0x00);

 FUNC_11(VAR_65->regbase, VAR_52, 0x01);

 FUNC_11(VAR_65->regbase, VAR_49, 0x0f);

 FUNC_11(VAR_65->regbase, VAR_48, 0xff);

 if (VAR_65->btype == 136 || VAR_65->btype == 129 ||
     FUNC_6(VAR_65))

  FUNC_11(VAR_65->regbase, VAR_5, 0x20);
 else



  FUNC_11(VAR_65->regbase, VAR_5, 0x28);

 FUNC_11(VAR_65->regbase, VAR_6, 0xff);
 FUNC_11(VAR_65->regbase, VAR_7, 0x00);
 FUNC_11(VAR_65->regbase, VAR_8, 0x00);





 FUNC_9(VAR_65->regbase, VAR_25, 0x00);
 FUNC_9(VAR_65->regbase, VAR_26, 0x01);
 FUNC_9(VAR_65->regbase, VAR_27, 0x02);
 FUNC_9(VAR_65->regbase, VAR_28, 0x03);
 FUNC_9(VAR_65->regbase, VAR_29, 0x04);
 FUNC_9(VAR_65->regbase, VAR_30, 0x05);
 FUNC_9(VAR_65->regbase, VAR_31, 0x06);
 FUNC_9(VAR_65->regbase, VAR_32, 0x07);
 FUNC_9(VAR_65->regbase, VAR_33, 0x08);
 FUNC_9(VAR_65->regbase, VAR_34, 0x09);
 FUNC_9(VAR_65->regbase, VAR_35, 0x0a);
 FUNC_9(VAR_65->regbase, VAR_36, 0x0b);
 FUNC_9(VAR_65->regbase, VAR_37, 0x0c);
 FUNC_9(VAR_65->regbase, VAR_38, 0x0d);
 FUNC_9(VAR_65->regbase, VAR_39, 0x0e);
 FUNC_9(VAR_65->regbase, VAR_40, 0x0f);


 FUNC_9(VAR_65->regbase, VAR_23, 0x01);

 FUNC_9(VAR_65->regbase, VAR_24, 0x00);

 FUNC_9(VAR_65->regbase, VAR_41, 0x0f);

 FUNC_9(VAR_65->regbase, VAR_22, 0x00);

 FUNC_0(VAR_65, VAR_57, 0xff);


 FUNC_11(VAR_65->regbase, VAR_3, 0x04);

 FUNC_11(VAR_65->regbase, VAR_3, 0x00);


 FUNC_1(VAR_65, 0);
 return;
}

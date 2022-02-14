
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zr36060 {int width; int height; int total_code_vol; int real_code_vol; int max_block_vol; int name; } ;
struct videocodec {scalar_t__ data; } ;
struct vfe_settings {int x; int y; int width; int height; int decimation; int quality; } ;
struct vfe_polarity {scalar_t__ vclk_pol; scalar_t__ pvalid_pol; scalar_t__ poe_pol; scalar_t__ subimg_pol; scalar_t__ blank_pol; scalar_t__ field_pol; int hsync_pol; int vsync_pol; } ;
struct tvnorm {int Ht; int Wt; int VStart; int Ha; int HStart; scalar_t__ Wa; } ;


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
 int FUNC_0 (int,char*,int ,int,int,int,int,int) ;
 scalar_t__ VAR_47 ;
 int FUNC_1 (struct zr36060*,int ,int) ;

__attribute__((used)) static int
FUNC_2 (struct videocodec *VAR_48,
     struct tvnorm *VAR_49,
     struct vfe_settings *VAR_50,
     struct vfe_polarity *VAR_51)
{
 struct zr36060 *VAR_52 = (struct zr36060 *) VAR_48->data;
 u32 VAR_53;
 int VAR_54;

 FUNC_0(2, "%s: set_video %d/%d-%dx%d (%%%d) call\n", VAR_52->name,
  VAR_50->x, VAR_50->y, VAR_50->width, VAR_50->height, VAR_50->decimation);




 VAR_52->width = VAR_50->width / (VAR_50->decimation & 0xff);
 VAR_52->height = VAR_50->height / (VAR_50->decimation >> 8);

 FUNC_1(VAR_52, VAR_11, VAR_12);






 VAR_53 = (!VAR_51->vsync_pol ? VAR_46 : 0)
     | (!VAR_51->hsync_pol ? VAR_41 : 0)
     | (VAR_51->field_pol ? VAR_40 : 0)
     | (VAR_51->blank_pol ? VAR_39 : 0)
     | (VAR_51->subimg_pol ? VAR_44 : 0)
     | (VAR_51->poe_pol ? VAR_43 : 0)
     | (VAR_51->pvalid_pol ? VAR_42 : 0)
     | (VAR_51->vclk_pol ? VAR_45 : 0);
 FUNC_1(VAR_52, VAR_38, VAR_53);

 VAR_53 = 0;
 switch (VAR_50->decimation & 0xff) {
 default:
 case 1:
  break;

 case 2:
  VAR_53 |= VAR_27;
  break;

 case 4:
  VAR_53 |= VAR_28;
  break;
 }

 switch (VAR_50->decimation >> 8) {
 default:
 case 1:
  break;

 case 2:
  VAR_53 |= VAR_29;
  break;
 }
 FUNC_1(VAR_52, VAR_26, VAR_53);

 FUNC_1(VAR_52, VAR_10, 0x00);
 FUNC_1(VAR_52, VAR_8, 0x80);
 FUNC_1(VAR_52, VAR_9, 0x80);



 VAR_53 = VAR_49->Ht - 1;
 FUNC_1(VAR_52, VAR_24, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_25, (VAR_53 >> 0) & 0xff);

 VAR_53 = VAR_49->Wt - 1;
 FUNC_1(VAR_52, VAR_21, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_22, (VAR_53 >> 0) & 0xff);

 VAR_53 = 6 - 1;
 FUNC_1(VAR_52, VAR_23, VAR_53);



 VAR_53 = 68;
 FUNC_1(VAR_52, VAR_20, VAR_53);

 VAR_53 = VAR_49->VStart - 1;
 FUNC_1(VAR_52, VAR_19, VAR_53);

 VAR_53 += VAR_49->Ha / 2;
 FUNC_1(VAR_52, VAR_17, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_18, (VAR_53 >> 0) & 0xff);

 VAR_53 = VAR_49->HStart - 1;
 FUNC_1(VAR_52, VAR_16, VAR_53);

 VAR_53 += VAR_49->Wa;
 FUNC_1(VAR_52, VAR_14, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_15, (VAR_53 >> 0) & 0xff);


 VAR_53 = VAR_50->y + VAR_49->VStart;
 FUNC_1(VAR_52, VAR_6, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_7, (VAR_53 >> 0) & 0xff);

 VAR_53 += VAR_50->height;
 FUNC_1(VAR_52, VAR_4, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_5, (VAR_53 >> 0) & 0xff);

 VAR_53 = VAR_50->x + VAR_49->HStart;
 FUNC_1(VAR_52, VAR_2, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_3, (VAR_53 >> 0) & 0xff);

 VAR_53 += VAR_50->width;
 FUNC_1(VAR_52, VAR_0, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_1, (VAR_53 >> 0) & 0xff);


 VAR_53 = VAR_49->VStart - 4;
 FUNC_1(VAR_52, VAR_36, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_37, (VAR_53 >> 0) & 0xff);

 VAR_53 += VAR_49->Ha / 2 + 8;
 FUNC_1(VAR_52, VAR_34, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_35, (VAR_53 >> 0) & 0xff);

 VAR_53 = VAR_49->HStart - 4;
 FUNC_1(VAR_52, VAR_32, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_33, (VAR_53 >> 0) & 0xff);

 VAR_53 += VAR_49->Wa + 8;
 FUNC_1(VAR_52, VAR_30, (VAR_53 >> 8) & 0xff);
 FUNC_1(VAR_52, VAR_31, (VAR_53 >> 0) & 0xff);

 VAR_54 = VAR_52->width * VAR_52->height;

 VAR_54 = VAR_54 * 16;





 VAR_54 = VAR_54 * VAR_50->quality / (VAR_47 ? 400 : 200);

 if (VAR_54 < 8192)
  VAR_54 = 8192;

 if (VAR_54 > VAR_52->total_code_vol * 7)
  VAR_54 = VAR_52->total_code_vol * 7;

 VAR_52->real_code_vol = VAR_54 >> 3;




 VAR_53 = VAR_52->max_block_vol;
 FUNC_1(VAR_52, VAR_13, VAR_53);

 return 0;
}

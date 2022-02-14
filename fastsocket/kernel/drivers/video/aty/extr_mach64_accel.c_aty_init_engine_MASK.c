
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int bits_per_pixel; int xres_virtual; } ;
struct TYPE_4__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;
struct TYPE_6__ {int vyres; int dp_pix_width; int dp_chain_mask; } ;
struct atyfb_par {TYPE_3__ crtc; } ;


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
 scalar_t__ FUNC_0 (int ) ;
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
 int FUNC_1 (int ,struct atyfb_par*) ;
 int FUNC_2 (struct atyfb_par*) ;
 int FUNC_3 (int ,int,struct atyfb_par*) ;
 int FUNC_4 (struct atyfb_par*) ;
 int FUNC_5 (int,struct atyfb_par*) ;
 int FUNC_6 (struct atyfb_par*) ;

void FUNC_7(struct atyfb_par *VAR_46, struct fb_info *VAR_47)
{
 u32 VAR_48;
 u32 VAR_49;


 VAR_48 = VAR_47->fix.line_length / (VAR_47->var.bits_per_pixel / 8);
 VAR_49 = VAR_47->var.xres_virtual;

 if (VAR_47->var.bits_per_pixel == 24) {


  VAR_48 *= 3;
  VAR_49 *= 3;
 }


 if (FUNC_0(VAR_32))
  FUNC_4(VAR_46);


 FUNC_2(VAR_46);



 FUNC_3(VAR_28, 0x00010000, VAR_46);
 FUNC_3(VAR_27, 0x00010000, VAR_46);





 FUNC_5(14, VAR_46);


 FUNC_3(VAR_4, 0xFFFFFFFF, VAR_46);


 FUNC_3(VAR_19, (VAR_48 / 8) << 22, VAR_46);


 FUNC_3(VAR_22, 0, VAR_46);
 FUNC_3(VAR_17, 0, VAR_46);
 FUNC_3(VAR_14, 0, VAR_46);
 FUNC_3(VAR_15, 0, VAR_46);
 FUNC_3(VAR_13, 0, VAR_46);


 FUNC_3(VAR_16, VAR_18 | VAR_21 |
      VAR_20, VAR_46);


 FUNC_3(VAR_42, (VAR_48 / 8) << 22, VAR_46);


 FUNC_3(VAR_43, 0, VAR_46);
 FUNC_3(VAR_39, 1, VAR_46);
 FUNC_3(VAR_44, 0, VAR_46);
 FUNC_3(VAR_40, 1, VAR_46);


 FUNC_3(VAR_38, VAR_41, VAR_46);


 FUNC_5(13, VAR_46);
 FUNC_3(VAR_26, 0, VAR_46);


 FUNC_3(VAR_30, 0, VAR_46);
 FUNC_3(VAR_31, 0, VAR_46);
 FUNC_3(VAR_29, 0, VAR_46);


 FUNC_3(VAR_35, 0, VAR_46);
 FUNC_3(VAR_37, 0, VAR_46);
 FUNC_3(VAR_34, VAR_46->crtc.vyres - 1, VAR_46);
 FUNC_3(VAR_36, VAR_49 - 1, VAR_46);


 FUNC_3(VAR_6, 0, VAR_46);


 FUNC_3(VAR_8, 0xFFFFFFFF, VAR_46);


 FUNC_3(VAR_12, 0xFFFFFFFF, VAR_46);



 FUNC_3(VAR_9, VAR_23 | VAR_0, VAR_46);



 FUNC_3(VAR_11, VAR_24, VAR_46);



 FUNC_5(3, VAR_46);
 FUNC_3(VAR_1, 0, VAR_46);
 FUNC_3(VAR_3, 0xFFFFFFFF, VAR_46);
 FUNC_3(VAR_2, 0, VAR_46);


 FUNC_5(2, VAR_46);
 FUNC_3(VAR_10, VAR_46->crtc.dp_pix_width, VAR_46);
 FUNC_3(VAR_7, VAR_46->crtc.dp_chain_mask, VAR_46);

 FUNC_5(5, VAR_46);
  FUNC_3(VAR_33, 0, VAR_46);
 FUNC_3(VAR_45, 0, VAR_46);
 FUNC_3(VAR_5, FUNC_1(VAR_5, VAR_46) & ~0x20,
      VAR_46);
 FUNC_3(VAR_25, 0x100023, VAR_46);


 FUNC_6(VAR_46);
}

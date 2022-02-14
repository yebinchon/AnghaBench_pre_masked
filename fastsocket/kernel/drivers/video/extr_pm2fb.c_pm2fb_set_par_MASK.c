
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pm2fb_par {int type; int video; scalar_t__ memclock; } ;
struct TYPE_5__ {int xres_virtual; int yres_virtual; int bits_per_pixel; int xres; int right_margin; int hsync_len; int left_margin; int lower_margin; int vsync_len; int upper_margin; int yres; int yoffset; int xoffset; int sync; int vmode; int activate; int pixclock; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_6__ {int line_length; int visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ cmap; TYPE_3__ fix; struct pm2fb_par* par; } ;


 int FUNC_0 (char*,...) ;
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
 int FUNC_1 (int ) ;
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


 int FUNC_2 (struct pm2fb_par*,int) ;
 int FUNC_3 (struct pm2fb_par*) ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct pm2fb_par*,int ,int) ;
 int FUNC_7 (struct pm2fb_par*,int ,int) ;
 int FUNC_8 (struct pm2fb_par*,int ,int) ;
 int FUNC_9 (struct pm2fb_par*) ;
 int FUNC_10 (struct pm2fb_par*) ;
 int FUNC_11 (struct pm2fb_par*,int) ;
 int FUNC_12 (struct pm2fb_par*,scalar_t__) ;
 int FUNC_13 (struct pm2fb_par*,int) ;
 int FUNC_14 (struct pm2fb_par*,int) ;
 int FUNC_15 (int,int,int) ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct fb_info *VAR_59)
{
 struct pm2fb_par *VAR_60 = VAR_59->par;
 u32 VAR_61;
 u32 VAR_62 = (VAR_59->var.xres_virtual + 7) & ~7;
 u32 VAR_63 = VAR_59->var.yres_virtual;
 u32 VAR_64 = (VAR_59->var.bits_per_pixel + 7) & ~7;
 u32 VAR_65, VAR_66, VAR_67, VAR_68;
 u32 VAR_69, VAR_70, VAR_71, VAR_72;
 u32 VAR_73;
 u32 VAR_74;
 u32 VAR_75 = 0;
 u32 VAR_76 = VAR_16 | VAR_17;
 u32 VAR_77 = 0;
 u32 VAR_78 = 0;
 u32 VAR_79 = 0;
 u32 VAR_80 = 1;
 u32 VAR_81 = (VAR_59->var.xres + 31) & ~31;
 int VAR_82;

 FUNC_9(VAR_60);
 FUNC_10(VAR_60);
 FUNC_3(VAR_60);
 if (VAR_60->memclock)
  FUNC_12(VAR_60, VAR_60->memclock);

 VAR_64 = (VAR_64 > 32) ? 32 : VAR_64;
 VAR_82 = VAR_64 > 8 || VAR_60->type == 128;

 VAR_61 = FUNC_1(VAR_59->var.pixclock);
 if (VAR_61 > VAR_56) {
  FUNC_0("pixclock too high (%uKHz)\n", VAR_61);
  return -VAR_0;
 }

 VAR_65 = FUNC_15(VAR_59->var.right_margin, VAR_64, VAR_82);
 VAR_66 = VAR_65 + FUNC_15(VAR_59->var.hsync_len, VAR_64, VAR_82);
 VAR_67 = VAR_66 + FUNC_15(VAR_59->var.left_margin, VAR_64, VAR_82);
 VAR_68 = FUNC_15(VAR_81, VAR_64, VAR_82) + VAR_67 - 1;
 VAR_69 = (VAR_59->var.lower_margin)
  ? VAR_59->var.lower_margin - 1
  : 0;
 VAR_70 = VAR_59->var.lower_margin + VAR_59->var.vsync_len - 1;
 VAR_71 = VAR_59->var.lower_margin + VAR_59->var.vsync_len +
  VAR_59->var.upper_margin;
 VAR_72 = VAR_59->var.yres + VAR_71 - 1;
 VAR_73 = FUNC_15(VAR_62, VAR_64, 1);
 VAR_74 = FUNC_15(VAR_59->var.yoffset * VAR_81 + VAR_59->var.xoffset, VAR_64, 1);
 if (VAR_82)
  VAR_75 |= VAR_11;

 if (VAR_59->var.sync & VAR_3) {
  if (VAR_57) {
   FUNC_0("ignoring +hsync, using -hsync.\n");
   VAR_75 |= VAR_14;
  } else
   VAR_75 |= VAR_13;
 } else
  VAR_75 |= VAR_14;

 if (VAR_59->var.sync & VAR_4) {
  if (VAR_58) {
   FUNC_0("ignoring +vsync, using -vsync.\n");
   VAR_75 |= VAR_28;
  } else
   VAR_75 |= VAR_27;
 } else
  VAR_75 |= VAR_28;

 if ((VAR_59->var.vmode & VAR_9) == VAR_8) {
  FUNC_0("interlaced not supported\n");
  return -VAR_0;
 }
 if ((VAR_59->var.vmode & VAR_9) == VAR_7)
  VAR_75 |= VAR_15;
 if ((VAR_59->var.activate & VAR_1) == VAR_2)
  VAR_75 |= VAR_26;
 VAR_60->video = VAR_75;

 VAR_59->fix.visual =
  (VAR_64 == 8) ? VAR_5 : VAR_6;
 VAR_59->fix.line_length = VAR_59->var.xres * VAR_64 / 8;
 VAR_59->cmap.len = 256;




 if (VAR_60->type == 128) {
  FUNC_2(VAR_60, 1);
  FUNC_7(VAR_60, VAR_55, 0);
 }

 FUNC_11(VAR_60, VAR_64);

 FUNC_4();
 FUNC_2(VAR_60, 19);
 switch (VAR_64) {
 case 8:
  FUNC_7(VAR_60, VAR_32, 0);
  VAR_79 = 0x2e;
  break;
 case 16:
  FUNC_7(VAR_60, VAR_32, 1);
  VAR_76 |= VAR_21 | VAR_18;
  VAR_77 = VAR_23;
  VAR_78 = 1;
  VAR_79 = 0x70;
  VAR_80 |= 8;
  break;
 case 32:
  FUNC_7(VAR_60, VAR_32, 2);
  VAR_76 |= VAR_21 | VAR_20;
  VAR_77 = VAR_25;
  VAR_78 = 2;
  VAR_79 = 0x20;
  VAR_80 |= 8;
  break;
 case 24:
  FUNC_7(VAR_60, VAR_32, 4);
  VAR_76 |= VAR_21 | VAR_19;
  VAR_77 = VAR_24;
  VAR_78 = 4;
  VAR_79 = 0x20;
  VAR_80 |= 8;
  break;
 }
 FUNC_7(VAR_60, VAR_33, VAR_12);
 FUNC_7(VAR_60, VAR_31, FUNC_5(VAR_81));
 FUNC_7(VAR_60, VAR_39, FUNC_5(VAR_81));
 FUNC_7(VAR_60, VAR_44, VAR_77 | FUNC_5(VAR_81));
 FUNC_7(VAR_60, VAR_38, VAR_68);
 FUNC_7(VAR_60, VAR_37, VAR_65);
 FUNC_7(VAR_60, VAR_36, VAR_66);
 FUNC_7(VAR_60, VAR_35, VAR_67);
 FUNC_7(VAR_60, VAR_34, VAR_67);
 FUNC_7(VAR_60, VAR_48, VAR_72);
 FUNC_7(VAR_60, VAR_47, VAR_69);
 FUNC_7(VAR_60, VAR_46, VAR_70);
 FUNC_7(VAR_60, VAR_45, VAR_71);
 FUNC_7(VAR_60, VAR_43, VAR_73);
 FUNC_16();
 FUNC_7(VAR_60, VAR_49, 0);
 FUNC_7(VAR_60, VAR_42, (VAR_63 << 16) | VAR_62);
 FUNC_7(VAR_60, VAR_40, VAR_22);
 FUNC_16();
 FUNC_7(VAR_60, VAR_41, VAR_74);
 FUNC_16();
 FUNC_14(VAR_60, VAR_75);
 FUNC_2(VAR_60, 10);
 switch (VAR_60->type) {
 case 129:
  FUNC_6(VAR_60, VAR_30, VAR_76);
  FUNC_6(VAR_60, VAR_29,
    (VAR_64 == 8) ? 0 : VAR_10);
  break;
 case 128:
  FUNC_8(VAR_60, VAR_51, 0);
  FUNC_8(VAR_60, VAR_54, VAR_78);
  FUNC_8(VAR_60, VAR_50, VAR_79);
  FUNC_8(VAR_60, VAR_52, VAR_80);
  FUNC_8(VAR_60, VAR_53, 0);
  break;
 }
 FUNC_13(VAR_60, VAR_61);
 FUNC_0("Setting graphics mode at %dx%d depth %d\n",
  VAR_59->var.xres, VAR_59->var.yres, VAR_59->var.bits_per_pixel);
 return 0;
}

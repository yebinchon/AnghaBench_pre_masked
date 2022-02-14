
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int offset; } ;
struct intelfb_info {int pitch; TYPE_1__ fb; int pll_index; } ;
struct intelfb_hwstate {int pipe_a_conf; int pipe_b_conf; int dpll_b; int fpb0; int fpb1; int hsync_b; int hblank_b; int htotal_b; int vsync_b; int vblank_b; int vtotal_b; int src_size_b; int dpll_a; int fpa0; int fpa1; int hsync_a; int hblank_a; int htotal_a; int vsync_a; int vblank_a; int vtotal_a; int src_size_a; int adpa; int disp_a_ctrl; int disp_a_stride; int disp_a_base; int dvoc; int dvob; int vgacntrl; } ;
struct fb_var_screeninfo {int sync; int pixclock; int xres; int right_margin; int hsync_len; int left_margin; int yres; int vmode; int lower_margin; int vsync_len; int upper_margin; int yoffset; int xoffset; int bits_per_pixel; } ;


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
 int FUNC_0 (char*,...) ;
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
 scalar_t__ FUNC_1 (struct intelfb_info*) ;
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
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ,int,int*,int*,int*,int*,int*,int*) ;
 scalar_t__ FUNC_4 (int,int,char*) ;
 int FUNC_5 (struct fb_var_screeninfo*) ;

int FUNC_6(struct intelfb_info *VAR_72,
    struct intelfb_hwstate *VAR_73,
    struct fb_var_screeninfo *VAR_74)
{
 int VAR_75 = VAR_52;
 u32 *VAR_76, *VAR_77, *VAR_78;
 u32 VAR_79, VAR_80, VAR_81, VAR_82, VAR_83, VAR_84, VAR_85;
 u32 VAR_86, VAR_87, VAR_88, VAR_89, VAR_90, VAR_91;
 u32 VAR_92, VAR_93, VAR_94, VAR_95, VAR_96, VAR_97;
 u32 VAR_98, VAR_99;
 u32 *VAR_100, *VAR_101, *VAR_102, *VAR_103, *VAR_104, *VAR_105, *VAR_106, *VAR_107;
 u32 VAR_108;

 FUNC_0("intelfbhw_mode_to_hw\n");


 VAR_73->vgacntrl |= VAR_65;


 if (VAR_73->pipe_a_conf & VAR_48)
  VAR_75 = VAR_52;
 else if (VAR_73->pipe_b_conf & VAR_48)
  VAR_75 = VAR_53;


 if (VAR_75 == VAR_53) {
  VAR_76 = &VAR_73->dpll_b;
  VAR_77 = &VAR_73->fpb0;
  VAR_78 = &VAR_73->fpb1;
  VAR_103 = &VAR_73->hsync_b;
  VAR_104 = &VAR_73->hblank_b;
  VAR_105 = &VAR_73->htotal_b;
  VAR_100 = &VAR_73->vsync_b;
  VAR_101 = &VAR_73->vblank_b;
  VAR_102 = &VAR_73->vtotal_b;
  VAR_106 = &VAR_73->src_size_b;
  VAR_107 = &VAR_73->pipe_b_conf;
 } else {
  VAR_76 = &VAR_73->dpll_a;
  VAR_77 = &VAR_73->fpa0;
  VAR_78 = &VAR_73->fpa1;
  VAR_103 = &VAR_73->hsync_a;
  VAR_104 = &VAR_73->hblank_a;
  VAR_105 = &VAR_73->htotal_a;
  VAR_100 = &VAR_73->vsync_a;
  VAR_101 = &VAR_73->vblank_a;
  VAR_102 = &VAR_73->vtotal_a;
  VAR_106 = &VAR_73->src_size_a;
  VAR_107 = &VAR_73->pipe_a_conf;
 }


 VAR_73->adpa &= ~VAR_8;


 VAR_99 = (VAR_74->sync & VAR_30) ?
   VAR_5 : VAR_6;
 VAR_98 = (VAR_74->sync & VAR_31) ?
   VAR_5 : VAR_6;
 VAR_73->adpa &= ~((VAR_7 << VAR_9) |
        (VAR_7 << VAR_3));
 VAR_73->adpa |= (VAR_99 << VAR_3) |
      (VAR_98 << VAR_9);


 VAR_73->adpa &= ~(VAR_54 << VAR_4);
 VAR_73->adpa |= (VAR_75 << VAR_4);


 VAR_73->adpa &= ~VAR_1;
 VAR_73->adpa |= VAR_2;

 VAR_73->adpa |= VAR_0;

 *VAR_76 |= (VAR_28 | VAR_29);
 *VAR_76 &= ~(VAR_25 | VAR_27);
 *VAR_76 |= (VAR_26 | VAR_24);


 VAR_84 = 1000000000 / VAR_74->pixclock;

 if (FUNC_3(VAR_72->pll_index, VAR_84, &VAR_79, &VAR_80,
       &VAR_81, &VAR_82, &VAR_83, &VAR_85)) {
  FUNC_2("calc_pll_params failed\n");
  return 1;
 }


 if (FUNC_4(VAR_82, VAR_20, "PLL P1 parameter"))
  return 1;
 if (FUNC_4(VAR_83, VAR_22, "PLL P2 parameter"))
  return 1;
 if (FUNC_4(VAR_79, VAR_33, "PLL M1 parameter"))
  return 1;
 if (FUNC_4(VAR_80, VAR_33, "PLL M2 parameter"))
  return 1;
 if (FUNC_4(VAR_81, VAR_33, "PLL N parameter"))
  return 1;

 *VAR_76 &= ~VAR_19;
 *VAR_76 &= ~((VAR_22 << VAR_23) |
     (VAR_20 << VAR_21));

 if (FUNC_1(VAR_72)) {
  *VAR_76 |= (VAR_83 << VAR_18);
  *VAR_76 |= (1 << (VAR_82 - 1)) << VAR_21;
 } else
  *VAR_76 |= (VAR_83 << VAR_23) | (VAR_82 << VAR_21);

 *VAR_77 = (VAR_81 << VAR_36) |
        (VAR_79 << VAR_34) |
        (VAR_80 << VAR_35);
 *VAR_78 = *VAR_77;

 VAR_73->dvob &= ~VAR_55;
 VAR_73->dvoc &= ~VAR_55;


 VAR_73->disp_a_ctrl |= VAR_16;
 VAR_73->disp_a_ctrl &= ~VAR_14;
 VAR_73->disp_a_ctrl &= ~VAR_15;
 switch (FUNC_5(VAR_74)) {
 case 8:
  VAR_73->disp_a_ctrl |= VAR_13 | VAR_14;
  break;
 case 15:
  VAR_73->disp_a_ctrl |= VAR_10;
  break;
 case 16:
  VAR_73->disp_a_ctrl |= VAR_11;
  break;
 case 24:
  VAR_73->disp_a_ctrl |= VAR_12;
  break;
 }
 VAR_73->disp_a_ctrl &= ~(VAR_54 << VAR_17);
 VAR_73->disp_a_ctrl |= (VAR_75 << VAR_17);


 VAR_91 = VAR_74->xres;
 VAR_86 = VAR_91 + VAR_74->right_margin;
 VAR_87 = VAR_86 + VAR_74->hsync_len;
 VAR_90 = VAR_87 + VAR_74->left_margin;
 VAR_88 = VAR_91;
 VAR_89 = VAR_90;

 FUNC_0("H: act %d, ss %d, se %d, tot %d bs %d, be %d\n",
  VAR_91, VAR_86, VAR_87, VAR_90, VAR_88,
  VAR_89);

 VAR_97 = VAR_74->yres;
 if (VAR_74->vmode & VAR_32)
  VAR_97--;
 VAR_92 = VAR_97 + VAR_74->lower_margin;
 VAR_93 = VAR_92 + VAR_74->vsync_len;
 VAR_96 = VAR_93 + VAR_74->upper_margin;
 VAR_94 = VAR_97;
 VAR_95 = VAR_96;
 VAR_95 = VAR_93 + 1;

 FUNC_0("V: act %d, ss %d, se %d, tot %d bs %d, be %d\n",
  VAR_97, VAR_92, VAR_93, VAR_96, VAR_94,
  VAR_95);


 VAR_91--;
 if (FUNC_4(VAR_91, VAR_37, "CRTC hactive"))
  return 1;
 VAR_86--;
 if (FUNC_4(VAR_86, VAR_44, "CRTC hsync_start"))
  return 1;
 VAR_87--;
 if (FUNC_4(VAR_87, VAR_42, "CRTC hsync_end"))
  return 1;
 VAR_90--;
 if (FUNC_4(VAR_90, VAR_46, "CRTC htotal"))
  return 1;
 VAR_88--;
 if (FUNC_4(VAR_88, VAR_40, "CRTC hblank_start"))
  return 1;
 VAR_89--;
 if (FUNC_4(VAR_89, VAR_39, "CRTC hblank_end"))
  return 1;

 VAR_97--;
 if (FUNC_4(VAR_97, VAR_60, "CRTC vactive"))
  return 1;
 VAR_92--;
 if (FUNC_4(VAR_92, VAR_68, "CRTC vsync_start"))
  return 1;
 VAR_93--;
 if (FUNC_4(VAR_93, VAR_66, "CRTC vsync_end"))
  return 1;
 VAR_96--;
 if (FUNC_4(VAR_96, VAR_70, "CRTC vtotal"))
  return 1;
 VAR_94--;
 if (FUNC_4(VAR_94, VAR_63, "CRTC vblank_start"))
  return 1;
 VAR_95--;
 if (FUNC_4(VAR_95, VAR_62, "CRTC vblank_end"))
  return 1;

 *VAR_105 = (VAR_90 << VAR_47) | (VAR_91 << VAR_38);
 *VAR_104 = (VAR_88 << VAR_41) |
       (VAR_89 << VAR_43);
 *VAR_103 = (VAR_86 << VAR_45) | (VAR_87 << VAR_43);

 *VAR_102 = (VAR_96 << VAR_71) | (VAR_97 << VAR_61);
 *VAR_101 = (VAR_94 << VAR_64) |
       (VAR_95 << VAR_67);
 *VAR_100 = (VAR_92 << VAR_69) | (VAR_93 << VAR_67);
 *VAR_106 = (VAR_91 << VAR_56) |
       (VAR_97 << VAR_57);

 VAR_73->disp_a_stride = VAR_72->pitch;
 FUNC_0("pitch is %d\n", VAR_73->disp_a_stride);

 VAR_73->disp_a_base = VAR_73->disp_a_stride * VAR_74->yoffset +
     VAR_74->xoffset * VAR_74->bits_per_pixel / 8;

 VAR_73->disp_a_base += VAR_72->fb.offset << 12;


 VAR_108 = FUNC_1(VAR_72) ? VAR_59 :
         VAR_58;
 if (VAR_73->disp_a_stride % VAR_108 != 0) {
  FUNC_2("display stride %d has bad alignment %d\n",
   VAR_73->disp_a_stride, VAR_108);
  return 1;
 }


 *VAR_107 &= ~VAR_49;

 if (VAR_74->vmode & VAR_32)
  *VAR_107 |= VAR_51;
 else
  *VAR_107 &= ~VAR_50;

 return 0;
}

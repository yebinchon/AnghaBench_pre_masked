
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct video_levels {int burst; int black; int blank; } ;
struct tv_mode {int burst_ena; int hsync_end; int htotal; int hburst_start; int hburst_len; int hblank_start; int hblank_end; int nbr_end; int vi_end_f1; int vi_end_f2; int vsync_len; int vsync_start_f1; int vsync_start_f2; int veq_len; int veq_start_f1; int veq_start_f2; int vburst_start_f1; int vburst_end_f1; int vburst_start_f2; int vburst_end_f2; int vburst_start_f3; int vburst_end_f3; int vburst_start_f4; int vburst_end_f4; int oversample; int dda1_inc; int dda2_inc; int dda3_inc; int sc_reset; int dda2_size; int dda3_size; int* filter_table; scalar_t__ progressive; scalar_t__ pal_burst; scalar_t__ trilevel_sync; scalar_t__ veq_ena; struct color_conversion* svideo_color; struct video_levels* svideo_levels; struct color_conversion* composite_color; struct video_levels* composite_levels; } ;
struct intel_tv {int type; scalar_t__* margin; } ;
struct intel_crtc {int pipe; int plane; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int pci_device; struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct color_conversion {int ry; int gy; int by; int ay; int ru; int gu; int bu; int au; int rv; int gv; int bv; int av; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int) ;
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
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
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
 struct video_levels VAR_83 ;
 struct intel_tv* FUNC_6 (struct drm_encoder*) ;
 struct color_conversion VAR_84 ;
 int FUNC_7 (struct drm_i915_private*,int ) ;
 struct tv_mode* FUNC_8 (struct intel_tv*) ;
 int FUNC_9 (struct drm_device*,int) ;
 int FUNC_10 (struct drm_device*,int) ;
 struct color_conversion VAR_85 ;
 struct intel_crtc* FUNC_11 (struct drm_crtc*) ;

__attribute__((used)) static void
FUNC_12(struct drm_encoder *VAR_86, struct drm_display_mode *VAR_87,
    struct drm_display_mode *VAR_88)
{
 struct drm_device *VAR_89 = VAR_86->dev;
 struct drm_i915_private *VAR_90 = VAR_89->dev_private;
 struct drm_crtc *VAR_91 = VAR_86->crtc;
 struct intel_crtc *VAR_92 = FUNC_11(VAR_91);
 struct intel_tv *VAR_93 = FUNC_6(VAR_86);
 const struct tv_mode *VAR_94 = FUNC_8(VAR_93);
 u32 VAR_95;
 u32 VAR_96, VAR_97, VAR_98;
 u32 VAR_99, VAR_100, VAR_101, VAR_102, VAR_103, VAR_104, VAR_105;
 u32 VAR_106, VAR_107, VAR_108;
 int VAR_109, VAR_110;
 const struct video_levels *VAR_111;
 const struct color_conversion *VAR_112;
 bool VAR_113;
 int VAR_114 = VAR_92->pipe;

 if (!VAR_94)
  return;

 VAR_95 = FUNC_1(VAR_15);
 VAR_95 &= VAR_16;

 switch (VAR_93->type) {
 default:
 case 128:
 case 130:
  VAR_95 |= VAR_21;
  VAR_111 = VAR_94->composite_levels;
  VAR_112 = VAR_94->composite_color;
  VAR_113 = VAR_94->burst_ena;
  break;
 case 131:
  VAR_95 |= VAR_20;
  VAR_111 = &VAR_83;
  if (VAR_94->burst_ena)
   VAR_112 = &VAR_85;
  else
   VAR_112 = &VAR_84;
  VAR_113 = 0;
  break;
 case 129:
  VAR_95 |= VAR_22;
  VAR_111 = VAR_94->svideo_levels;
  VAR_112 = VAR_94->svideo_color;
  VAR_113 = VAR_94->burst_ena;
  break;
 }
 VAR_96 = (VAR_94->hsync_end << VAR_30) |
  (VAR_94->htotal << VAR_31);

 VAR_97 = (VAR_94->hburst_start << 16) |
  (VAR_94->hburst_len << VAR_29);

 if (VAR_113)
  VAR_97 |= VAR_5;

 VAR_98 = (VAR_94->hblank_start << VAR_28) |
  (VAR_94->hblank_end << VAR_27);

 VAR_99 = (VAR_94->nbr_end << VAR_41) |
  (VAR_94->vi_end_f1 << VAR_67) |
  (VAR_94->vi_end_f2 << VAR_68);

 VAR_100 = (VAR_94->vsync_len << VAR_69) |
  (VAR_94->vsync_start_f1 << VAR_70) |
  (VAR_94->vsync_start_f2 << VAR_71);

 VAR_101 = (VAR_94->veq_len << VAR_64) |
  (VAR_94->veq_start_f1 << VAR_65) |
  (VAR_94->veq_start_f2 << VAR_66);

 if (VAR_94->veq_ena)
  VAR_101 |= VAR_25;

 VAR_102 = (VAR_94->vburst_start_f1 << VAR_60) |
  (VAR_94->vburst_end_f1 << VAR_56);

 VAR_103 = (VAR_94->vburst_start_f2 << VAR_61) |
  (VAR_94->vburst_end_f2 << VAR_57);

 VAR_104 = (VAR_94->vburst_start_f3 << VAR_62) |
  (VAR_94->vburst_end_f3 << VAR_58);

 VAR_105 = (VAR_94->vburst_start_f4 << VAR_63) |
  (VAR_94->vburst_end_f4 << VAR_59);

 if (VAR_92->pipe == 1)
  VAR_95 |= VAR_23;
 VAR_95 |= VAR_94->oversample;

 if (VAR_94->progressive)
  VAR_95 |= VAR_43;
 if (VAR_94->trilevel_sync)
  VAR_95 |= VAR_55;
 if (VAR_94->pal_burst)
  VAR_95 |= VAR_42;

 VAR_106 = 0;
 if (VAR_94->dda1_inc)
  VAR_106 |= VAR_52;
 if (VAR_94->dda2_inc)
  VAR_106 |= VAR_53;
 if (VAR_94->dda3_inc)
  VAR_106 |= VAR_54;
 VAR_106 |= VAR_94->sc_reset;
 if (VAR_111)
  VAR_106 |= VAR_111->burst << VAR_6;
 VAR_106 |= VAR_94->dda1_inc << VAR_44;

 VAR_107 = VAR_94->dda2_size << VAR_46 |
  VAR_94->dda2_inc << VAR_45;

 VAR_108 = VAR_94->dda3_size << VAR_48 |
  VAR_94->dda3_inc << VAR_47;


 if (VAR_89->pci_device < 0x2772)
  VAR_95 |= VAR_19 | VAR_24;

 FUNC_2(VAR_33, VAR_96);
 FUNC_2(VAR_34, VAR_97);
 FUNC_2(VAR_35, VAR_98);
 FUNC_2(VAR_73, VAR_99);
 FUNC_2(VAR_74, VAR_100);
 FUNC_2(VAR_75, VAR_101);
 FUNC_2(VAR_76, VAR_102);
 FUNC_2(VAR_77, VAR_103);
 FUNC_2(VAR_78, VAR_104);
 FUNC_2(VAR_79, VAR_105);
 FUNC_2(VAR_49, VAR_106);
 FUNC_2(VAR_50, VAR_107);
 FUNC_2(VAR_51, VAR_108);

 if (VAR_112) {
  FUNC_2(VAR_13, (VAR_112->ry << 16) |
      VAR_112->gy);
  FUNC_2(VAR_14, (VAR_112->by << 16) |
      VAR_112->ay);
  FUNC_2(VAR_9, (VAR_112->ru << 16) |
      VAR_112->gu);
  FUNC_2(VAR_10, (VAR_112->bu << 16) |
      VAR_112->au);
  FUNC_2(VAR_11, (VAR_112->rv << 16) |
      VAR_112->gv);
  FUNC_2(VAR_12, (VAR_112->bv << 16) |
      VAR_112->av);
 }

 if (FUNC_3(VAR_89)->gen >= 4)
  FUNC_2(VAR_7, 0x00404000);
 else
  FUNC_2(VAR_7, 0x00606000);

 if (VAR_111)
  FUNC_2(VAR_8,
      ((VAR_111->black << VAR_3) |
       (VAR_111->blank << VAR_4)));
 {
  int VAR_115 = FUNC_5(VAR_114);
  int VAR_116 = FUNC_0(VAR_92->plane);
  int VAR_117 = FUNC_1(VAR_115);
  int VAR_118 = FUNC_1(VAR_116);
  int VAR_119 = 0x0, VAR_120 = 0x0;
  unsigned int VAR_121, VAR_122;

  FUNC_2(VAR_116, VAR_118 & ~VAR_0);
  FUNC_7(VAR_90, VAR_92->plane);


  if (FUNC_4(VAR_89))
   FUNC_10(VAR_89, VAR_92->pipe);

  FUNC_2(VAR_115, VAR_117 & ~VAR_1);

  FUNC_9(VAR_89, VAR_92->pipe);


  FUNC_2(VAR_26, VAR_2);
  VAR_121 = VAR_94->hblank_start - VAR_94->hblank_end;
  if (VAR_94->progressive)
   VAR_122 = VAR_94->nbr_end + 1;
  else
   VAR_122 = 2*VAR_94->nbr_end + 1;

  VAR_119 += VAR_93->margin[VAR_38];
  VAR_120 += VAR_93->margin[VAR_40];
  VAR_121 -= (VAR_93->margin[VAR_38] +
     VAR_93->margin[VAR_39]);
  VAR_122 -= (VAR_93->margin[VAR_40] +
     VAR_93->margin[VAR_37]);
  FUNC_2(VAR_81, (VAR_119<<16)|VAR_120);
  FUNC_2(VAR_82, (VAR_121<<16)|VAR_122);

  FUNC_2(VAR_115, VAR_117);
  FUNC_2(VAR_116, VAR_118);
  FUNC_7(VAR_90, VAR_92->plane);
 }

 VAR_110 = 0;
 for (VAR_109 = 0; VAR_109 < 60; VAR_109++)
  FUNC_2(VAR_36 + (VAR_109<<2), VAR_94->filter_table[VAR_110++]);
 for (VAR_109 = 0; VAR_109 < 60; VAR_109++)
  FUNC_2(VAR_32 + (VAR_109<<2), VAR_94->filter_table[VAR_110++]);
 for (VAR_109 = 0; VAR_109 < 43; VAR_109++)
  FUNC_2(VAR_80 + (VAR_109<<2), VAR_94->filter_table[VAR_110++]);
 for (VAR_109 = 0; VAR_109 < 43; VAR_109++)
  FUNC_2(VAR_72 + (VAR_109<<2), VAR_94->filter_table[VAR_110++]);
 FUNC_2(VAR_17, FUNC_1(VAR_17) & VAR_18);
 FUNC_2(VAR_15, VAR_95);
}

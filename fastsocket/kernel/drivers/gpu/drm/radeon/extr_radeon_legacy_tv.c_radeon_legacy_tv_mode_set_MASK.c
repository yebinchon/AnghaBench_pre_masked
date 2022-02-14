
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct radeon_tv_mode_constants {int ver_total; int hor_resolution; int hor_total; int hor_start; int ver_resolution; } ;
struct TYPE_2__ {int timing_cntl; int tv_uv_adr; int* h_code_timing; int* v_code_timing; } ;
struct radeon_encoder_tv_dac {scalar_t__ tv_std; int ntsc_tvdac_adj; int pal_tvdac_adj; TYPE_1__ tv; } ;
struct radeon_encoder {struct radeon_encoder_tv_dac* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int crtc_id; scalar_t__ rmx_type; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct radeon_device*) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
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
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int VAR_117 ;
 scalar_t__ VAR_118 ;
 int FUNC_4 (int ) ;
 int* VAR_119 ;
 int* VAR_120 ;
 scalar_t__ VAR_121 ;
 scalar_t__ VAR_122 ;
 scalar_t__ VAR_123 ;
 scalar_t__ VAR_124 ;
 scalar_t__ VAR_125 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int* VAR_126 ;
 int* VAR_127 ;
 int* VAR_128 ;
 int* VAR_129 ;
 struct radeon_tv_mode_constants* FUNC_8 (struct radeon_encoder*,int*) ;
 int FUNC_9 (struct drm_encoder*) ;
 int FUNC_10 (struct radeon_encoder*) ;
 int FUNC_11 (struct radeon_encoder*) ;
 int FUNC_12 (struct drm_encoder*,int,int,int) ;
 struct radeon_crtc* FUNC_13 (int ) ;
 struct radeon_encoder* FUNC_14 (struct drm_encoder*) ;
 int* VAR_130 ;
 int* VAR_131 ;

void FUNC_15(struct drm_encoder *VAR_132,
          struct drm_display_mode *VAR_133,
          struct drm_display_mode *VAR_134)
{
 struct drm_device *VAR_135 = VAR_132->dev;
 struct radeon_device *VAR_136 = VAR_135->dev_private;
 struct radeon_encoder *VAR_137 = FUNC_14(VAR_132);
 struct radeon_encoder_tv_dac *VAR_138 = VAR_137->enc_priv;
 const struct radeon_tv_mode_constants *VAR_139;
 struct radeon_crtc *VAR_140;
 int VAR_141;
 uint16_t VAR_142;
 uint32_t VAR_143, VAR_144, VAR_145;
 uint32_t VAR_146, VAR_147, VAR_148;
 uint32_t VAR_149, VAR_150;
 uint32_t VAR_151, VAR_152;
 uint32_t VAR_153, VAR_154, VAR_155;
 uint32_t VAR_156, VAR_157, VAR_158;
 uint32_t VAR_159, VAR_160, VAR_161;
 const uint16_t *VAR_162;
 const uint16_t *VAR_163;

 VAR_139 = FUNC_8(VAR_137, &VAR_142);
 if (!VAR_139)
  return;

 VAR_140 = FUNC_13(VAR_132->crtc);

 VAR_146 = (VAR_109 |
     VAR_23 |
     VAR_63 |
     VAR_80);

 if (!FUNC_1(VAR_136))
  VAR_146 |= VAR_39;

 if (VAR_138->tv_std == VAR_121 ||
     VAR_138->tv_std == VAR_122)
  VAR_146 |= VAR_30;

 VAR_149 = (VAR_36 |
         VAR_38 |
         VAR_110 |
         VAR_100 |
         (6 << VAR_24));

 if (VAR_138->tv_std == VAR_121 ||
     VAR_138->tv_std == VAR_122) {
  VAR_149 |= (0x46 << VAR_35) |
   (0x3b << VAR_20);
  VAR_150 = (-111 & VAR_90) |
   ((0 & VAR_95) << VAR_96);
 } else if (VAR_138->tv_std == VAR_125) {
  VAR_149 |= VAR_19;
  VAR_150 = (0 & VAR_90) |
   ((0 & VAR_95) << VAR_96);
 } else {
  VAR_149 |= VAR_19 |
   (0x3b << VAR_35) |
   (0x3b << VAR_20);
  VAR_150 = (-78 & VAR_90) |
   ((62 & VAR_95) << VAR_96);
 }


 VAR_147 = (VAR_31
         | VAR_41
         | (0x0b << VAR_101)
         | (0x07 << VAR_28)
         | FUNC_2(0x3)
         | FUNC_3(0xc));

 if (VAR_140->crtc_id == 1)
  VAR_147 |= VAR_33;
 else {
  if (VAR_140->rmx_type != VAR_118)
   VAR_147 |= VAR_34;
  else
   VAR_147 |= VAR_32;
 }

 if (VAR_138->tv_std == VAR_121 ||
     VAR_138->tv_std == VAR_122 ||
     VAR_138->tv_std == VAR_124 ||
     VAR_138->tv_std == VAR_123)
  VAR_143 = VAR_139->ver_total * 2 * 10000 / VAR_3;
 else
  VAR_143 = VAR_139->ver_total * 2 * 10000 / VAR_11;

 VAR_145 = FUNC_4(VAR_92);
 VAR_145 &= 0xe3ff0000;
 VAR_145 |= (VAR_143 * (1 << VAR_0) / 10000);
 VAR_151 = VAR_145;

 if (VAR_142 == 2700)
  VAR_151 |= VAR_29;

 if (VAR_139->hor_resolution == 1024)
  VAR_151 |= (4 << VAR_111);
 else
  VAR_151 |= (2 << VAR_111);


 VAR_145 = VAR_139->ver_total * 2 * 1000;
 if (VAR_138->tv_std == VAR_121 ||
     VAR_138->tv_std == VAR_122 ||
     VAR_138->tv_std == VAR_124 ||
     VAR_138->tv_std == VAR_123) {
  VAR_145 /= VAR_3;
 } else {
  VAR_145 /= VAR_11;
 }
 VAR_144 = (VAR_145 + 500) / 1000;

 if (VAR_144 < 3)
  VAR_144 = 3;
 for (VAR_141 = 0; VAR_141 < FUNC_0(VAR_119); ++VAR_141) {
  if (VAR_144 == VAR_119[VAR_141])
   break;
 }

 VAR_158 = (VAR_143 * VAR_120[VAR_141] * (1 << (VAR_0 - 1)) +
    5001) / 10000 / 8 | ((VAR_120[VAR_141] *
    (1 << (VAR_0 - 1)) / 8) << 16);
 VAR_156 =
  (VAR_126[VAR_141] << 17) | ((VAR_127[VAR_141] * (1 << 8) / 8) << 24) |
  VAR_112 | (272 * VAR_120[VAR_141] / 8) * (1 << (VAR_0 - 1)) /
  1024;
 VAR_157 = VAR_117|
  (VAR_144 * 1024 - 272) * VAR_120[VAR_141] / 8 * (1 << (VAR_0 - 1)) / 1024;

 VAR_152 = FUNC_4(VAR_93) & 0x00fffff0;
 VAR_152 |= (0x10 << 24) |
  VAR_27 |
  VAR_115 |
  VAR_106 |
  VAR_108;

 VAR_145 = (VAR_151 >> VAR_105) & VAR_104;
 VAR_145 = ((16384 * 256 * 10) / VAR_145 + 5) / 10;
 VAR_145 = (VAR_145 << VAR_107) | 0x000b0000;
 VAR_138->tv.timing_cntl = VAR_145;

 if (VAR_138->tv_std == VAR_121 ||
     VAR_138->tv_std == VAR_122 ||
     VAR_138->tv_std == VAR_124 ||
     VAR_138->tv_std == VAR_123)
  VAR_148 = VAR_138->ntsc_tvdac_adj;
 else
  VAR_148 = VAR_138->pal_tvdac_adj;

 VAR_148 |= VAR_57 | VAR_58;

 if (VAR_138->tv_std == VAR_121 ||
     VAR_138->tv_std == VAR_122)
  VAR_148 |= VAR_60;
 else
  VAR_148 |= VAR_61;

 if (VAR_138->tv_std == VAR_121 ||
     VAR_138->tv_std == VAR_122) {
  if (VAR_142 == 2700) {
   VAR_159 = VAR_5;
   VAR_160 = VAR_7;
   VAR_161 = VAR_9;
  } else {
   VAR_159 = VAR_4;
   VAR_160 = VAR_6;
   VAR_161 = VAR_8;
  }
 } else {
  if (VAR_142 == 2700) {
   VAR_159 = VAR_13;
   VAR_160 = VAR_15;
   VAR_161 = VAR_17;
  } else {
   VAR_159 = VAR_12;
   VAR_160 = VAR_14;
   VAR_161 = VAR_16;
  }
 }

 VAR_153 = (VAR_159 & VAR_72) |
  (((VAR_159 >> 8) & VAR_70) << VAR_71) |
  ((VAR_160 & VAR_78) << VAR_79) |
  (((VAR_160 >> 9) & VAR_76) << VAR_77) |
  ((VAR_161 & VAR_84) << VAR_85);

 VAR_154 = (((4 & VAR_42) << VAR_43) |
   ((4 & VAR_49) << VAR_50) |
   ((1 & VAR_44) << VAR_45) |
   VAR_40 |
   VAR_48);

 VAR_138->tv.tv_uv_adr = 0xc8;

 if (VAR_138->tv_std == VAR_121 ||
     VAR_138->tv_std == VAR_122 ||
     VAR_138->tv_std == VAR_124 ||
     VAR_138->tv_std == VAR_123) {
  VAR_155 = VAR_10;
  VAR_162 = VAR_128;
  VAR_163 = VAR_130;
 } else {
  VAR_162 = VAR_129;
  VAR_163 = VAR_131;
  VAR_155 = VAR_18;
 }

 for (VAR_141 = 0; VAR_141 < VAR_1; VAR_141++) {
  if ((VAR_138->tv.h_code_timing[VAR_141] = VAR_162[VAR_141]) == 0)
   break;
 }

 for (VAR_141 = 0; VAR_141 < VAR_2; VAR_141++) {
  if ((VAR_138->tv.v_code_timing[VAR_141] = VAR_163[VAR_141]) == 0)
   break;
 }

 FUNC_9(VAR_132);







 FUNC_5(VAR_73, (VAR_146 | VAR_51 |
           VAR_22 | VAR_62));

 VAR_145 = FUNC_4(VAR_55);
 VAR_145 &= ~VAR_57;
 VAR_145 |= VAR_54 |
  VAR_59 |
  VAR_56 |
  VAR_53;
 FUNC_5(VAR_55, VAR_145);


 FUNC_7(VAR_82, 0, ~VAR_40);
 FUNC_6(VAR_81, VAR_153);
 FUNC_7(VAR_82, VAR_46, ~VAR_46);

 FUNC_12(VAR_132, 200, 800, 135);

 FUNC_7(VAR_82, 0, ~VAR_46);

 FUNC_12(VAR_132, 300, 160, 27);
 FUNC_12(VAR_132, 200, 800, 135);

 FUNC_7(VAR_82, 0, ~0xf);
 FUNC_7(VAR_82, VAR_40, ~VAR_40);

 FUNC_7(VAR_82, (1 << VAR_45), ~VAR_44);
 FUNC_7(VAR_82, 0, ~VAR_47);


 FUNC_5(VAR_86, VAR_147);
 FUNC_5(VAR_68, VAR_139->hor_total - 1);
 FUNC_5(VAR_66, VAR_139->hor_resolution - 1);
 FUNC_5(VAR_67, VAR_139->hor_start);

 FUNC_5(VAR_94, VAR_139->ver_total - 1);
 FUNC_5(VAR_91, VAR_139->ver_resolution - 1);
 FUNC_5(VAR_64, VAR_155);
 FUNC_5(VAR_92, VAR_151);
 FUNC_5(VAR_93, VAR_152);

 FUNC_5(VAR_97, VAR_156);
 FUNC_5(VAR_98, VAR_157);
 FUNC_5(VAR_99, VAR_158);

 FUNC_5(VAR_73, (VAR_146 | VAR_51 |
           VAR_22));


 FUNC_10(VAR_137);


 FUNC_11(VAR_137);

 FUNC_5(VAR_73, (VAR_146 | VAR_51));


 FUNC_5(VAR_87, (VAR_37 | VAR_88));
 FUNC_5(VAR_89, VAR_138->tv.timing_cntl);
 FUNC_5(VAR_74, VAR_149);
 FUNC_5(VAR_75, VAR_150);
 FUNC_5(VAR_83, (VAR_116 |
         VAR_25 |
         VAR_21 |
         VAR_26));

 FUNC_5(VAR_52, 0);

 FUNC_5(VAR_73, VAR_146);

 FUNC_5(VAR_65, ((0x17f << VAR_102) |
            (0x5ff << VAR_113)));
 FUNC_5(VAR_69, ((0x100 << VAR_103) |
      (0x100 << VAR_114)));

 FUNC_5(VAR_55, VAR_148);

}

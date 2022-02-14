
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct TYPE_5__ {int pp_border_color; int pp_tfactor; int pp_txablend; int pp_txcblend; int pp_txoffset; int pp_txformat; int pp_txfilter; } ;
typedef TYPE_1__ drm_radeon_texture_regs_t ;
typedef int drm_radeon_private_t ;
struct TYPE_6__ {int re_misc; int se_cntl_status; int se_cntl; int se_vport_zoffset; int se_vport_zscale; int se_vport_yoffset; int se_vport_yscale; int se_vport_xoffset; int se_vport_xscale; int rb3d_planemask; int rb3d_ropcntl; int rb3d_stencilrefmask; int pp_rot_matrix_1; int pp_rot_matrix_0; int pp_lum_matrix; int se_line_width; int re_line_state; int re_line_pattern; int se_coord_fmt; int rb3d_colorpitch; int rb3d_coloroffset; int rb3d_cntl; int pp_cntl; int rb3d_zstencilcntl; int rb3d_depthpitch; int rb3d_depthoffset; int rb3d_blendcntl; int re_solid_color; int pp_fog_color; int pp_misc; } ;
typedef TYPE_2__ drm_radeon_context_regs_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
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
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_6 (int *,struct drm_file*,int *) ;

__attribute__((used)) static int FUNC_7(drm_radeon_private_t * VAR_32,
        struct drm_file *VAR_33,
        drm_radeon_context_regs_t * VAR_34,
        drm_radeon_texture_regs_t * VAR_35,
        unsigned int VAR_36)
{
 VAR_31;
 FUNC_3("dirty=0x%08x\n", VAR_36);

 if (VAR_36 & VAR_21) {
  if (FUNC_6(VAR_32, VAR_33,
        &VAR_34->rb3d_depthoffset)) {
   FUNC_4("Invalid depth buffer offset\n");
   return -VAR_0;
  }

  if (FUNC_6(VAR_32, VAR_33,
        &VAR_34->rb3d_coloroffset)) {
   FUNC_4("Invalid depth buffer offset\n");
   return -VAR_0;
  }

  FUNC_1(14);
  FUNC_5(FUNC_2(VAR_6, 6));
  FUNC_5(VAR_34->pp_misc);
  FUNC_5(VAR_34->pp_fog_color);
  FUNC_5(VAR_34->re_solid_color);
  FUNC_5(VAR_34->rb3d_blendcntl);
  FUNC_5(VAR_34->rb3d_depthoffset);
  FUNC_5(VAR_34->rb3d_depthpitch);
  FUNC_5(VAR_34->rb3d_zstencilcntl);
  FUNC_5(FUNC_2(VAR_4, 2));
  FUNC_5(VAR_34->pp_cntl);
  FUNC_5(VAR_34->rb3d_cntl);
  FUNC_5(VAR_34->rb3d_coloroffset);
  FUNC_5(FUNC_2(VAR_11, 0));
  FUNC_5(VAR_34->rb3d_colorpitch);
  FUNC_0();
 }

 if (VAR_36 & VAR_29) {
  FUNC_1(2);
  FUNC_5(FUNC_2(VAR_17, 0));
  FUNC_5(VAR_34->se_coord_fmt);
  FUNC_0();
 }

 if (VAR_36 & VAR_22) {
  FUNC_1(5);
  FUNC_5(FUNC_2(VAR_13, 1));
  FUNC_5(VAR_34->re_line_pattern);
  FUNC_5(VAR_34->re_line_state);
  FUNC_5(FUNC_2(VAR_18, 0));
  FUNC_5(VAR_34->se_line_width);
  FUNC_0();
 }

 if (VAR_36 & VAR_20) {
  FUNC_1(5);
  FUNC_5(FUNC_2(VAR_5, 0));
  FUNC_5(VAR_34->pp_lum_matrix);
  FUNC_5(FUNC_2(VAR_7, 1));
  FUNC_5(VAR_34->pp_rot_matrix_0);
  FUNC_5(VAR_34->pp_rot_matrix_1);
  FUNC_0();
 }

 if (VAR_36 & VAR_23) {
  FUNC_1(4);
  FUNC_5(FUNC_2(VAR_12, 2));
  FUNC_5(VAR_34->rb3d_stencilrefmask);
  FUNC_5(VAR_34->rb3d_ropcntl);
  FUNC_5(VAR_34->rb3d_planemask);
  FUNC_0();
 }

 if (VAR_36 & VAR_30) {
  FUNC_1(7);
  FUNC_5(FUNC_2(VAR_19, 5));
  FUNC_5(VAR_34->se_vport_xscale);
  FUNC_5(VAR_34->se_vport_xoffset);
  FUNC_5(VAR_34->se_vport_yscale);
  FUNC_5(VAR_34->se_vport_yoffset);
  FUNC_5(VAR_34->se_vport_zscale);
  FUNC_5(VAR_34->se_vport_zoffset);
  FUNC_0();
 }

 if (VAR_36 & VAR_25) {
  FUNC_1(4);
  FUNC_5(FUNC_2(VAR_15, 0));
  FUNC_5(VAR_34->se_cntl);
  FUNC_5(FUNC_2(VAR_16, 0));
  FUNC_5(VAR_34->se_cntl_status);
  FUNC_0();
 }

 if (VAR_36 & VAR_24) {
  FUNC_1(2);
  FUNC_5(FUNC_2(VAR_14, 0));
  FUNC_5(VAR_34->re_misc);
  FUNC_0();
 }

 if (VAR_36 & VAR_26) {
  if (FUNC_6(VAR_32, VAR_33,
        &VAR_35[0].pp_txoffset)) {
   FUNC_4("Invalid texture offset for unit 0\n");
   return -VAR_0;
  }

  FUNC_1(9);
  FUNC_5(FUNC_2(VAR_8, 5));
  FUNC_5(VAR_35[0].pp_txfilter);
  FUNC_5(VAR_35[0].pp_txformat);
  FUNC_5(VAR_35[0].pp_txoffset);
  FUNC_5(VAR_35[0].pp_txcblend);
  FUNC_5(VAR_35[0].pp_txablend);
  FUNC_5(VAR_35[0].pp_tfactor);
  FUNC_5(FUNC_2(VAR_1, 0));
  FUNC_5(VAR_35[0].pp_border_color);
  FUNC_0();
 }

 if (VAR_36 & VAR_27) {
  if (FUNC_6(VAR_32, VAR_33,
        &VAR_35[1].pp_txoffset)) {
   FUNC_4("Invalid texture offset for unit 1\n");
   return -VAR_0;
  }

  FUNC_1(9);
  FUNC_5(FUNC_2(VAR_9, 5));
  FUNC_5(VAR_35[1].pp_txfilter);
  FUNC_5(VAR_35[1].pp_txformat);
  FUNC_5(VAR_35[1].pp_txoffset);
  FUNC_5(VAR_35[1].pp_txcblend);
  FUNC_5(VAR_35[1].pp_txablend);
  FUNC_5(VAR_35[1].pp_tfactor);
  FUNC_5(FUNC_2(VAR_2, 0));
  FUNC_5(VAR_35[1].pp_border_color);
  FUNC_0();
 }

 if (VAR_36 & VAR_28) {
  if (FUNC_6(VAR_32, VAR_33,
        &VAR_35[2].pp_txoffset)) {
   FUNC_4("Invalid texture offset for unit 2\n");
   return -VAR_0;
  }

  FUNC_1(9);
  FUNC_5(FUNC_2(VAR_10, 5));
  FUNC_5(VAR_35[2].pp_txfilter);
  FUNC_5(VAR_35[2].pp_txformat);
  FUNC_5(VAR_35[2].pp_txoffset);
  FUNC_5(VAR_35[2].pp_txcblend);
  FUNC_5(VAR_35[2].pp_txablend);
  FUNC_5(VAR_35[2].pp_tfactor);
  FUNC_5(FUNC_2(VAR_3, 0));
  FUNC_5(VAR_35[2].pp_border_color);
  FUNC_0();
 }

 return 0;
}

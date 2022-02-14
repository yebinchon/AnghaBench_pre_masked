
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int fog_color_c; int texture_clr_cmp_msk_c; int texture_clr_cmp_clr_c; int misc_3d_state_cntl_reg; int tex_cntl_c; int z_sten_cntl_c; int z_pitch_c; int z_offset_c; int sc_bottom_right_c; int sc_top_left_c; int dp_gui_master_cntl_c; int dst_pitch_offset_c; } ;
struct TYPE_5__ {TYPE_3__ context_state; } ;
typedef TYPE_1__ drm_r128_sarea_t ;
struct TYPE_6__ {TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_r128_private_t ;
typedef TYPE_3__ drm_r128_context_regs_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline__ void FUNC_5(drm_r128_private_t *VAR_2)
{
 drm_r128_sarea_t *VAR_3 = VAR_2->sarea_priv;
 drm_r128_context_regs_t *VAR_4 = &VAR_3->context_state;
 VAR_1;
 FUNC_3("\n");

 FUNC_1(13);

 FUNC_4(FUNC_2(VAR_0, 11));
 FUNC_4(VAR_4->dst_pitch_offset_c);
 FUNC_4(VAR_4->dp_gui_master_cntl_c);
 FUNC_4(VAR_4->sc_top_left_c);
 FUNC_4(VAR_4->sc_bottom_right_c);
 FUNC_4(VAR_4->z_offset_c);
 FUNC_4(VAR_4->z_pitch_c);
 FUNC_4(VAR_4->z_sten_cntl_c);
 FUNC_4(VAR_4->tex_cntl_c);
 FUNC_4(VAR_4->misc_3d_state_cntl_reg);
 FUNC_4(VAR_4->texture_clr_cmp_clr_c);
 FUNC_4(VAR_4->texture_clr_cmp_msk_c);
 FUNC_4(VAR_4->fog_color_c);

 FUNC_0();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crtc {int lcd_index; int lcd_gen_cntl; void* shadow_v_sync_strt_wid; void* shadow_v_tot_disp; void* shadow_h_sync_strt_wid; void* shadow_h_tot_disp; void* gen_cntl; void* off_pitch; void* vline_crnt_vline; void* v_sync_strt_wid; void* v_tot_disp; void* h_sync_strt_wid; void* h_tot_disp; void* ext_vert_stretch; void* vert_stretching; void* horz_stretching; void* lcd_config_panel; } ;
struct atyfb_par {scalar_t__ lcd_table; } ;


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
 int FUNC_0 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_1 (int ,struct atyfb_par const*) ;
 void* FUNC_2 (int ,struct atyfb_par const*) ;
 int FUNC_3 (int ,int,struct atyfb_par const*) ;
 int FUNC_4 (int ,int,struct atyfb_par const*) ;

__attribute__((used)) static void FUNC_5(const struct atyfb_par *VAR_17, struct crtc *VAR_18)
{
 VAR_18->h_tot_disp = FUNC_2(VAR_3, VAR_17);
 VAR_18->h_sync_strt_wid = FUNC_2(VAR_2, VAR_17);
 VAR_18->v_tot_disp = FUNC_2(VAR_8, VAR_17);
 VAR_18->v_sync_strt_wid = FUNC_2(VAR_7, VAR_17);
 VAR_18->vline_crnt_vline = FUNC_2(VAR_6, VAR_17);
 VAR_18->off_pitch = FUNC_2(VAR_4, VAR_17);
 VAR_18->gen_cntl = FUNC_2(VAR_1, VAR_17);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int vc_decawm; int vc_deccm; size_t vc_num; int* vc_tab_stop; int vc_bell_duration; int vc_bell_pitch; int vc_s_complement_mask; int vc_complement_mask; int vc_cursor_type; scalar_t__ vc_decim; scalar_t__ vc_decom; scalar_t__ vc_decscnm; scalar_t__ vc_toggle_meta; scalar_t__ vc_disp_ctrl; scalar_t__ vc_utf_count; int vc_utf; scalar_t__ vc_report_mouse; scalar_t__ vc_need_wrap; scalar_t__ vc_charset; int vc_G1_charset; int vc_G0_charset; int vc_translate; scalar_t__ vc_ques; int vc_state; int vc_rows; int vc_bottom; scalar_t__ vc_top; } ;
struct TYPE_2__ {int default_ledflagstate; int ledflagstate; int ledmode; scalar_t__ slockstate; scalar_t__ lockstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vc_data*,int ) ;
 int FUNC_1 (struct vc_data*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct vc_data*) ;
 int VAR_9 ;
 int FUNC_3 (struct vc_data*,int ,int ) ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct vc_data*) ;
 int FUNC_5 (struct vc_data*,int ) ;
 int FUNC_6 (int ,struct vc_data*) ;
 int FUNC_7 (struct vc_data*) ;

__attribute__((used)) static void FUNC_8(struct vc_data *VAR_13, int VAR_14)
{
 VAR_13->vc_top = 0;
 VAR_13->vc_bottom = VAR_13->vc_rows;
 VAR_13->vc_state = VAR_3;
 VAR_13->vc_ques = 0;
 VAR_13->vc_translate = FUNC_6(VAR_5, VAR_13);
 VAR_13->vc_G0_charset = VAR_5;
 VAR_13->vc_G1_charset = VAR_4;
 VAR_13->vc_charset = 0;
 VAR_13->vc_need_wrap = 0;
 VAR_13->vc_report_mouse = 0;
 VAR_13->vc_utf = VAR_9;
 VAR_13->vc_utf_count = 0;

 VAR_13->vc_disp_ctrl = 0;
 VAR_13->vc_toggle_meta = 0;

 VAR_13->vc_decscnm = 0;
 VAR_13->vc_decom = 0;
 VAR_13->vc_decawm = 1;
 VAR_13->vc_deccm = 1;
 VAR_13->vc_decim = 0;

 FUNC_5(VAR_13, VAR_7);
 FUNC_0(VAR_13, VAR_8);
 FUNC_0(VAR_13, VAR_11);
 FUNC_0(VAR_13, VAR_12);
 VAR_10[VAR_13->vc_num].lockstate = 0;
 VAR_10[VAR_13->vc_num].slockstate = 0;
 VAR_10[VAR_13->vc_num].ledmode = VAR_6;
 VAR_10[VAR_13->vc_num].ledflagstate = VAR_10[VAR_13->vc_num].default_ledflagstate;



 VAR_13->vc_cursor_type = VAR_0;
 VAR_13->vc_complement_mask = VAR_13->vc_s_complement_mask;

 FUNC_2(VAR_13);
 FUNC_7(VAR_13);

 VAR_13->vc_tab_stop[0] = 0x01010100;
 VAR_13->vc_tab_stop[1] =
 VAR_13->vc_tab_stop[2] =
 VAR_13->vc_tab_stop[3] =
 VAR_13->vc_tab_stop[4] =
 VAR_13->vc_tab_stop[5] =
 VAR_13->vc_tab_stop[6] =
 VAR_13->vc_tab_stop[7] = 0x01010101;

 VAR_13->vc_bell_pitch = VAR_2;
 VAR_13->vc_bell_duration = VAR_1;

 FUNC_3(VAR_13, 0, 0);
 FUNC_4(VAR_13);
 if (VAR_14)
     FUNC_1(VAR_13, 2);
}

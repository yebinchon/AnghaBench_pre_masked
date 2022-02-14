
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_sensitivity_ranges {int nrg_th_cca; int barker_corr_th_min_mrc; int barker_corr_th_min; int nrg_th_ofdm; int nrg_th_cck; int auto_corr_min_cck_mrc; int auto_corr_min_ofdm_mrc_x1; int auto_corr_min_ofdm_x1; int auto_corr_min_ofdm_mrc; int auto_corr_min_ofdm; } ;
struct il_sensitivity_data {scalar_t__ last_fa_cnt_cck; scalar_t__ last_bad_plcp_cnt_cck; scalar_t__ last_fa_cnt_ofdm; scalar_t__ last_bad_plcp_cnt_ofdm; int nrg_th_cca; int barker_corr_th_min_mrc; int barker_corr_th_min; int nrg_th_ofdm; int nrg_th_cck; int auto_corr_cck_mrc; int auto_corr_cck; int auto_corr_ofdm_mrc_x1; int auto_corr_ofdm_x1; int auto_corr_ofdm_mrc; int auto_corr_ofdm; scalar_t__* nrg_silence_rssi; scalar_t__* nrg_value; scalar_t__ nrg_energy_idx; scalar_t__ nrg_silence_idx; scalar_t__ nrg_silence_ref; void* nrg_prev_state; void* nrg_curr_state; scalar_t__ num_in_cck_no_fa; } ;
struct TYPE_2__ {struct il_sensitivity_ranges* sens; } ;
struct il_priv {struct il_sensitivity_data sensitivity_data; scalar_t__ disable_sens_cal; TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_sensitivity_data*,int ,int) ;

void
FUNC_3(struct il_priv *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 struct il_sensitivity_data *VAR_6 = ((void*)0);
 const struct il_sensitivity_ranges *VAR_7 = VAR_3->hw_params.sens;

 if (VAR_3->disable_sens_cal)
  return;

 FUNC_0("Start il4965_init_sensitivity\n");


 VAR_6 = &(VAR_3->sensitivity_data);

 if (VAR_7 == ((void*)0))
  return;

 FUNC_2(VAR_6, 0, sizeof(struct il_sensitivity_data));

 VAR_6->num_in_cck_no_fa = 0;
 VAR_6->nrg_curr_state = VAR_1;
 VAR_6->nrg_prev_state = VAR_1;
 VAR_6->nrg_silence_ref = 0;
 VAR_6->nrg_silence_idx = 0;
 VAR_6->nrg_energy_idx = 0;

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++)
  VAR_6->nrg_value[VAR_5] = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_6->nrg_silence_rssi[VAR_5] = 0;

 VAR_6->auto_corr_ofdm = VAR_7->auto_corr_min_ofdm;
 VAR_6->auto_corr_ofdm_mrc = VAR_7->auto_corr_min_ofdm_mrc;
 VAR_6->auto_corr_ofdm_x1 = VAR_7->auto_corr_min_ofdm_x1;
 VAR_6->auto_corr_ofdm_mrc_x1 = VAR_7->auto_corr_min_ofdm_mrc_x1;
 VAR_6->auto_corr_cck = VAR_0;
 VAR_6->auto_corr_cck_mrc = VAR_7->auto_corr_min_cck_mrc;
 VAR_6->nrg_th_cck = VAR_7->nrg_th_cck;
 VAR_6->nrg_th_ofdm = VAR_7->nrg_th_ofdm;
 VAR_6->barker_corr_th_min = VAR_7->barker_corr_th_min;
 VAR_6->barker_corr_th_min_mrc = VAR_7->barker_corr_th_min_mrc;
 VAR_6->nrg_th_cca = VAR_7->nrg_th_cca;

 VAR_6->last_bad_plcp_cnt_ofdm = 0;
 VAR_6->last_fa_cnt_ofdm = 0;
 VAR_6->last_bad_plcp_cnt_cck = 0;
 VAR_6->last_fa_cnt_cck = 0;

 VAR_4 |= FUNC_1(VAR_3);
 FUNC_0("<<return 0x%X\n", VAR_4);
}

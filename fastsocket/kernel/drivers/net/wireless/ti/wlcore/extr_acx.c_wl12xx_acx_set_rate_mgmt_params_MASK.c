
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_acx_set_rate_mgmt_params {int rate_retry_policy; int rate_check_down; int rate_check_up; int per_beta2_shift; int per_beta1_shift; int per_add_shift; int per_alpha_shift; int tx_fail_high_th; int tx_fail_low_th; int inverse_curiosity_factor; void* max_per; void* per_th2; void* per_th1; void* per_add; void* rate_retry_score; int index; } ;
struct conf_rate_policy_settings {int rate_retry_policy; int rate_check_down; int rate_check_up; int per_beta2_shift; int per_beta1_shift; int per_add_shift; int per_alpha_shift; int tx_fail_high_th; int tx_fail_low_th; int inverse_curiosity_factor; int max_per; int per_th2; int per_th1; int per_add; int rate_retry_score; } ;
struct TYPE_2__ {struct conf_rate_policy_settings rate; } ;
struct wl1271 {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct wl12xx_acx_set_rate_mgmt_params*) ;
 struct wl12xx_acx_set_rate_mgmt_params* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct wl1271*,int ,struct wl12xx_acx_set_rate_mgmt_params*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int) ;

int FUNC_7(struct wl1271 *VAR_5)
{
 struct wl12xx_acx_set_rate_mgmt_params *VAR_6 = ((void*)0);
 struct conf_rate_policy_settings *VAR_7 = &VAR_5->conf.rate;
 int VAR_8;

 FUNC_5(VAR_2, "acx set rate mgmt params");

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_4);
 if (!VAR_6)
  return -VAR_3;

 VAR_6->index = VAR_0;
 VAR_6->rate_retry_score = FUNC_0(VAR_7->rate_retry_score);
 VAR_6->per_add = FUNC_0(VAR_7->per_add);
 VAR_6->per_th1 = FUNC_0(VAR_7->per_th1);
 VAR_6->per_th2 = FUNC_0(VAR_7->per_th2);
 VAR_6->max_per = FUNC_0(VAR_7->max_per);
 VAR_6->inverse_curiosity_factor = VAR_7->inverse_curiosity_factor;
 VAR_6->tx_fail_low_th = VAR_7->tx_fail_low_th;
 VAR_6->tx_fail_high_th = VAR_7->tx_fail_high_th;
 VAR_6->per_alpha_shift = VAR_7->per_alpha_shift;
 VAR_6->per_add_shift = VAR_7->per_add_shift;
 VAR_6->per_beta1_shift = VAR_7->per_beta1_shift;
 VAR_6->per_beta2_shift = VAR_7->per_beta2_shift;
 VAR_6->rate_check_up = VAR_7->rate_check_up;
 VAR_6->rate_check_down = VAR_7->rate_check_down;
 FUNC_3(VAR_6->rate_retry_policy, VAR_7->rate_retry_policy,
        sizeof(VAR_6->rate_retry_policy));

 VAR_8 = FUNC_4(VAR_5, VAR_1,
       VAR_6, sizeof(*VAR_6));
 if (VAR_8 < 0) {
  FUNC_6("acx set rate mgmt params failed: %d", VAR_8);
  goto out;
 }

out:
 FUNC_1(VAR_6);
 return VAR_8;
}

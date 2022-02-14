
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_bss_config {int auth_algs; int wep_rekeying_period; int broadcast_key_idx_min; int broadcast_key_idx_max; int wpa_group_rekey; int wpa_gmk_rekey; int dtim_period; int ap_max_inactivity; int max_listen_interval; int assoc_sa_query_max_timeout; int assoc_sa_query_retry_timeout; int eap_fast_prov; int pac_key_lifetime; int pac_key_refresh_time; int wmm_enabled; int ft_over_ds; int eapol_version; int max_num_sta; scalar_t__ rsn_pairwise; void* wpa_group; void* wpa_pairwise; int wpa_key_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;

void FUNC_0(struct hostapd_bss_config *VAR_6)
{
    VAR_6->auth_algs = VAR_2 | VAR_3;

    VAR_6->wep_rekeying_period = 300;

    VAR_6->broadcast_key_idx_min = 1;
    VAR_6->broadcast_key_idx_max = 2;

    VAR_6->wpa_group_rekey = 600;
    VAR_6->wpa_gmk_rekey = 86400;
    VAR_6->wpa_key_mgmt = VAR_5;
    VAR_6->wpa_pairwise = VAR_4;
    VAR_6->wpa_group = VAR_4;
    VAR_6->rsn_pairwise = 0;

    VAR_6->max_num_sta = VAR_1;

    VAR_6->dtim_period = 2;

    VAR_6->ap_max_inactivity = 5*60;
    VAR_6->eapol_version = VAR_0;

    VAR_6->max_listen_interval = 65535;
    VAR_6->wmm_enabled = -1;





}

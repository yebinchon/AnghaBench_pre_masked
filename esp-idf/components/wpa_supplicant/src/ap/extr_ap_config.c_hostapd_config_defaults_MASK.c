
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_config {int num_bss; int beacon_int; int rts_threshold; int fragm_threshold; int send_probe_response; int ap_table_max_size; int ap_table_expiration_time; int ht_capab; struct hostapd_config* bss; } ;
struct hostapd_bss_config {int num_bss; int beacon_int; int rts_threshold; int fragm_threshold; int send_probe_response; int ap_table_max_size; int ap_table_expiration_time; int ht_capab; struct hostapd_bss_config* bss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_config*) ;
 int FUNC_1 (struct hostapd_config*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;

struct hostapd_config * FUNC_4(void)
{


    struct hostapd_config *VAR_2;
    struct hostapd_bss_config *VAR_3;


    VAR_2 = (struct hostapd_config *)FUNC_2(sizeof(*VAR_2));
    VAR_3 = (struct hostapd_bss_config *)FUNC_2(sizeof(*VAR_3));
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
     FUNC_3(VAR_1, "Failed to allocate memory for "
               "configuration data.");
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);
        return ((void*)0);
    }

    FUNC_0(VAR_3);

    VAR_2->num_bss = 1;
    VAR_2->bss = VAR_3;

    VAR_2->beacon_int = 100;
    VAR_2->rts_threshold = -1;
    VAR_2->fragm_threshold = -1;
    VAR_2->send_probe_response = 1;

    VAR_2->ht_capab = VAR_0;

    VAR_2->ap_table_max_size = 255;
    VAR_2->ap_table_expiration_time = 60;

    return VAR_2;
}

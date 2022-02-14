
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_sm {int wps_eapol_start_timer; int wps_scan_timer; int wps_msg_timeout_timer; int wps_timeout_timer; int wps_success_cb_timer; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wps_sm* VAR_1 ;

int FUNC_3(void)
{
    struct wps_sm *VAR_2 = VAR_1;

    if (!VAR_2) {
        return VAR_0;
    }

    FUNC_1(&VAR_2->wps_success_cb_timer);
    FUNC_1(&VAR_2->wps_timeout_timer);
    FUNC_1(&VAR_2->wps_msg_timeout_timer);
    FUNC_1(&VAR_2->wps_scan_timer);
    FUNC_1(&VAR_2->wps_eapol_start_timer);
    FUNC_2(&VAR_2->wps_success_cb_timer);
    FUNC_2(&VAR_2->wps_timeout_timer);
    FUNC_2(&VAR_2->wps_msg_timeout_timer);
    FUNC_2(&VAR_2->wps_scan_timer);
    FUNC_2(&VAR_2->wps_eapol_start_timer);
    FUNC_0();
    return VAR_0;
}

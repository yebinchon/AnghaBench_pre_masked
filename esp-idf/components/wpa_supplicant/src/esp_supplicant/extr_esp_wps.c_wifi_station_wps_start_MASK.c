
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_sm {int is_wps_scan; int wps_timeout_timer; int scan_cnt; int wps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 () ;
 struct wps_sm* FUNC_7 () ;

int FUNC_8(void)
{
    struct wps_sm *VAR_4 = FUNC_7();

    if (!VAR_4) {
        FUNC_4(VAR_2, "WPS: wps not initial");
        return VAR_0;
    }

    FUNC_1(&VAR_4->wps_timeout_timer, 120000, 0);

    switch (FUNC_6()) {
    case 129: {
        VAR_4->is_wps_scan = 1;

        FUNC_5(VAR_4->wps, ((void*)0), VAR_3);

        FUNC_3();


        break;
    }
    case 128:
        VAR_4->scan_cnt = 0;
        FUNC_2(&VAR_4->wps_timeout_timer);
        FUNC_1(&VAR_4->wps_timeout_timer, 120000, 0);
        break;
    default:
        break;
    }
    FUNC_0(1);
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_sm {int wps_eapol_start_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 struct wps_sm* VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (struct wps_sm*,int ,int *,int ,size_t*,int *) ;
 int FUNC_4 (struct wps_sm*,int *,int ,int *,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(void)
{
    struct wps_sm *VAR_8 = VAR_7;
    u8 VAR_9[6];
    u8 *VAR_10;
    int VAR_11;
    int VAR_12 = 0;

    VAR_12 = FUNC_0(VAR_9);
    if (VAR_12 != 0) {
        FUNC_2(VAR_6, "bssid is empty!");
        return VAR_12;
    }

    if (!VAR_8) {
        return VAR_1;
    }

    FUNC_2(VAR_5, "WPS: Send EAPOL START.");
    VAR_10 = FUNC_3(VAR_8, VAR_4, (u8 *)"", 0, (size_t *)&VAR_11, ((void*)0));
    if (!VAR_10) {
        return VAR_0;
    }

    FUNC_4(VAR_8, VAR_9, VAR_3, VAR_10, VAR_11);
    FUNC_5(VAR_10);

    FUNC_1(&VAR_8->wps_eapol_start_timer, 3000, 0);

    return VAR_2;
}

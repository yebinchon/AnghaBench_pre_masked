
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wps_sm {int discard_ap_cnt; TYPE_1__* dis_ap_list; } ;
struct TYPE_2__ {int* bssid; } ;


 int VAR_0 ;
 struct wps_sm* VAR_1 ;
 int FUNC_0 (int*,int*,int) ;

void FUNC_1(u8 *VAR_2)
{
    struct wps_sm *VAR_3 = VAR_1;
    u8 VAR_4 = VAR_3->discard_ap_cnt;

    if (!VAR_1 || !VAR_2) {
        return;
    }

    if (VAR_3->discard_ap_cnt < VAR_0) {
        VAR_3->discard_ap_cnt++;
    } else {
        for (VAR_4 = 0; VAR_4 < VAR_0 - 2; VAR_4++) {
            FUNC_0(VAR_3->dis_ap_list[VAR_4].bssid, VAR_3->dis_ap_list[VAR_4 + 1].bssid, 6);
        }
        VAR_3->discard_ap_cnt = VAR_0;
    }
    FUNC_0(VAR_3->dis_ap_list[VAR_4].bssid, VAR_2, 6);
}

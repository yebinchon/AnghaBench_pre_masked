
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wps_sm {int ignore_sel_reg; TYPE_1__* dis_ap_list; } ;
struct wps_parse_attr {scalar_t__* selected_registrar; int dev_password_id; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int bssid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_2 (int ,int *,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct wpabuf const*,struct wps_parse_attr*) ;
 struct wps_sm* FUNC_6 () ;

int FUNC_7(const struct wpabuf *VAR_3, u8 *VAR_4)
{
 struct wps_sm *VAR_5 = FUNC_6();
    struct wps_parse_attr *VAR_6 = (struct wps_parse_attr *)FUNC_3(sizeof(struct wps_parse_attr));
    int VAR_7 = 0;
    if (FUNC_5(VAR_3, VAR_6) < 0) {
     FUNC_1(VAR_6);
     return 0;
    }

    if(!VAR_6->selected_registrar || *VAR_6->selected_registrar == 0) {
     if (VAR_5->ignore_sel_reg == 0) {
      FUNC_1(VAR_6);
         return 0;
     }
     else {
        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
          if (0 == FUNC_2(VAR_5->dis_ap_list[VAR_7].bssid, VAR_4, 6)) {
           FUNC_4(VAR_1, "discard ap bssid[%02x:%02x:%02x:%02x:%02x:%02x]\n", VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3], VAR_4[4], VAR_4[5]);

           FUNC_1(VAR_6);
           return 0;
          }
        }
     }
    }

    if (!VAR_6->dev_password_id ||
        FUNC_0(VAR_6->dev_password_id) != VAR_0) {
        FUNC_1(VAR_6);
        return 0;
    }

    FUNC_1(VAR_6);
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_sm {int wps_eapol_start_timer; } ;
struct wps_data {int state; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct wps_sm* VAR_3 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static enum wps_process_res FUNC_2(struct wps_data *VAR_4,
      const struct wpabuf *VAR_5)
{
 struct wps_sm *VAR_6 = VAR_3;
 enum wps_process_res VAR_7 = VAR_2;

 FUNC_1(VAR_0, "WPS: Received WSC_START");
 FUNC_0(&VAR_6->wps_eapol_start_timer);
        VAR_4->state = VAR_1;
 return VAR_7;
}

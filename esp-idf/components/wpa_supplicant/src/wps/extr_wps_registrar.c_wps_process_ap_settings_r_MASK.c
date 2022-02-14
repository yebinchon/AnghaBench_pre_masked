
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wps_parse_attr {int dummy; } ;
struct TYPE_6__ {scalar_t__ cred_attr_len; int * cred_attr; } ;
struct wps_data {TYPE_2__ cred; int ap_settings_cb_ctx; int (* ap_settings_cb ) (int ,TYPE_2__*) ;TYPE_1__* wps; scalar_t__ new_ap_settings; scalar_t__ er; } ;
struct wpabuf {int dummy; } ;
struct TYPE_5__ {int registrar; scalar_t__ ap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*) ;
 int * FUNC_3 (struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wpabuf*) ;
 struct wpabuf* FUNC_5 (struct wps_data*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct wps_parse_attr*,TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct wps_data*) ;

__attribute__((used)) static int FUNC_10(struct wps_data *VAR_1,
         struct wps_parse_attr *VAR_2)
{
 struct wpabuf *VAR_3;

 if (VAR_1->wps->ap || VAR_1->er)
  return 0;


 if (FUNC_7(VAR_2, &VAR_1->cred) < 0)
  return -1;

 FUNC_1(VAR_0, "WPS: Received old AP configuration from AP");

 if (VAR_1->new_ap_settings) {
  FUNC_1(VAR_0, "WPS: Update AP configuration based on "
      "new settings");
  FUNC_6(&VAR_1->cred, VAR_1->new_ap_settings);
  return 0;
 } else {
  VAR_3 = FUNC_5(VAR_1);
  if (VAR_3 == ((void*)0))
   return -1;
  VAR_1->cred.cred_attr = FUNC_3(VAR_3);
  VAR_1->cred.cred_attr_len = FUNC_4(VAR_3);

  if (VAR_1->ap_settings_cb) {
   VAR_1->ap_settings_cb(VAR_1->ap_settings_cb_ctx,
         &VAR_1->cred);
   FUNC_2(VAR_3);
   return 1;
  }
  FUNC_9(VAR_1);

  VAR_1->cred.cred_attr = ((void*)0);
  VAR_1->cred.cred_attr_len = 0;
  FUNC_2(VAR_3);

  return 1;
 }
}

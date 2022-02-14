
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_parse_attr {int * version2; int num_cred; int cred_len; int cred; int key_wrap_auth; int encr_settings_len; int encr_settings; int authenticator; int enrollee_nonce; } ;
struct wps_data {scalar_t__ state; TYPE_1__* wps; int config_error; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_2__ {int ap; scalar_t__ ap_setup_locked; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct wpabuf*) ;
 struct wpabuf* FUNC_4 (struct wps_data*,int ,int ) ;
 scalar_t__ FUNC_5 (struct wpabuf*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_6 (struct wps_data*,struct wps_parse_attr*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_7 (struct wps_data*,int ,struct wpabuf const*) ;
 scalar_t__ FUNC_8 (struct wps_data*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (struct wps_data*,int ) ;
 scalar_t__ FUNC_10 (struct wps_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_11 (struct wpabuf*,int ,int ) ;

__attribute__((used)) static enum wps_process_res FUNC_12(struct wps_data *VAR_6,
        const struct wpabuf *VAR_7,
        struct wps_parse_attr *VAR_8)
{
 struct wpabuf *VAR_9;
 struct wps_parse_attr *VAR_10;
 enum wps_process_res VAR_11;

 FUNC_2(VAR_0, "WPS: Received M8");

 VAR_10 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));
        if (VAR_10 == ((void*)0)) {
  VAR_6->state = VAR_2;
  VAR_11 = VAR_4;
  goto _out;
 }

 if (VAR_6->state != VAR_1) {
  FUNC_2(VAR_0, "WPS: Unexpected state (%d) for "
      "receiving M8", VAR_6->state);
  VAR_6->state = VAR_2;
  VAR_11 = VAR_4;
  goto _out;
 }

 if (FUNC_9(VAR_6, VAR_8->enrollee_nonce) ||
     FUNC_7(VAR_6, VAR_8->authenticator, VAR_7)) {
  VAR_6->state = VAR_2;
  VAR_11 = VAR_4;
  goto _out;
 }

 if (VAR_6->wps->ap && VAR_6->wps->ap_setup_locked) {





  FUNC_2(VAR_0, "WPS: AP Setup is locked - refuse "
      "registration of a new Registrar");
  VAR_6->config_error = VAR_3;
  VAR_6->state = VAR_2;
  VAR_11 = VAR_4;
  goto _out;
 }

 VAR_9 = FUNC_4(VAR_6, VAR_8->encr_settings,
           VAR_8->encr_settings_len);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: Failed to decrypted Encrypted "
      "Settings attribute");
  VAR_6->state = VAR_2;
  VAR_11 = VAR_4;
  goto _out;
 }

 if (FUNC_11(VAR_9, VAR_6->wps->ap,
     VAR_8->version2 != ((void*)0)) < 0) {
  FUNC_3(VAR_9);
  VAR_6->state = VAR_2;
  VAR_11 = VAR_4;
  goto _out;
 }

 FUNC_2(VAR_0, "WPS: Processing decrypted Encrypted Settings "
     "attribute");
 if (FUNC_5(VAR_9, VAR_10) < 0 ||
     FUNC_10(VAR_6, VAR_9, VAR_10->key_wrap_auth) ||
     FUNC_8(VAR_6, VAR_10->cred, VAR_10->cred_len,
         VAR_10->num_cred, VAR_8->version2 != ((void*)0)) ||
     FUNC_6(VAR_6, VAR_10, VAR_9,
          VAR_8->version2 != ((void*)0))) {
  FUNC_3(VAR_9);
  VAR_6->state = VAR_2;
  VAR_11 = VAR_4;
  goto _out;
 }
 FUNC_3(VAR_9);

 VAR_6->state = VAR_5;
 VAR_11 = VAR_4;

_out:
 if (VAR_10)
  FUNC_0(VAR_10);
 return VAR_11;
}

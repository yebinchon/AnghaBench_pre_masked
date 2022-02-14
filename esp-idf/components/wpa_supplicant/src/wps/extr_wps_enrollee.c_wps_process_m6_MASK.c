
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_parse_attr {int r_snonce2; int key_wrap_auth; int * version2; int encr_settings_len; int encr_settings; int authenticator; int enrollee_nonce; } ;
struct wps_data {scalar_t__ state; TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_2__ {int cb_ctx; int (* event_cb ) (int ,int ,int *) ;scalar_t__ ap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct wpabuf*) ;
 struct wpabuf* FUNC_5 (struct wps_data*,int ,int ) ;
 scalar_t__ FUNC_6 (struct wpabuf*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_7 (struct wps_data*,int ,struct wpabuf const*) ;
 scalar_t__ FUNC_8 (struct wps_data*,int ) ;
 scalar_t__ FUNC_9 (struct wps_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_10 (struct wps_data*,int ) ;
 scalar_t__ FUNC_11 (struct wpabuf*,int ) ;

__attribute__((used)) static enum wps_process_res FUNC_12(struct wps_data *VAR_6,
        const struct wpabuf *VAR_7,
        struct wps_parse_attr *VAR_8)
{
 struct wpabuf *VAR_9;
 struct wps_parse_attr *VAR_10;
 enum wps_process_res VAR_11;

 FUNC_3(VAR_0, "WPS: Received M6");

 VAR_10 = (struct wps_parse_attr *)FUNC_1(sizeof(struct wps_parse_attr));
        if (VAR_10 == ((void*)0)) {
  VAR_6->state = VAR_3;
  VAR_11 = VAR_4;
  goto _out;
 }

 if (VAR_6->state != VAR_1) {
  FUNC_3(VAR_0, "WPS: Unexpected state (%d) for "
      "receiving M6", VAR_6->state);
  VAR_6->state = VAR_3;
  VAR_11 = VAR_4;
  goto _out;
 }

 if (FUNC_8(VAR_6, VAR_8->enrollee_nonce) ||
     FUNC_7(VAR_6, VAR_8->authenticator, VAR_7)) {
  VAR_6->state = VAR_3;
  VAR_11 = VAR_4;
  goto _out;
 }

 VAR_9 = FUNC_5(VAR_6, VAR_8->encr_settings,
           VAR_8->encr_settings_len);
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_0, "WPS: Failed to decrypted Encrypted "
      "Settings attribute");
  VAR_6->state = VAR_3;
  VAR_11 = VAR_4;
  goto _out;
 }

 if (FUNC_11(VAR_9, VAR_8->version2 != ((void*)0)) < 0) {
  FUNC_4(VAR_9);
  VAR_6->state = VAR_3;
  VAR_11 = VAR_4;
  goto _out;
 }

 FUNC_3(VAR_0, "WPS: Processing decrypted Encrypted Settings "
     "attribute");
 if (FUNC_6(VAR_9, VAR_10) < 0 ||
     FUNC_9(VAR_6, VAR_9, VAR_10->key_wrap_auth) ||
     FUNC_10(VAR_6, VAR_10->r_snonce2)) {
  FUNC_4(VAR_9);
  VAR_6->state = VAR_3;
  VAR_11 = VAR_4;
  goto _out;
 }
 FUNC_4(VAR_9);

 if (VAR_6->wps->ap)
  VAR_6->wps->event_cb(VAR_6->wps->cb_ctx, VAR_5,
       ((void*)0));

 VAR_6->state = VAR_2;
 VAR_11 = VAR_4;
_out:
 if (VAR_10)
  FUNC_0(VAR_10);
 return VAR_11;
}

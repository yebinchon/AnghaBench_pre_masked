
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_parse_attr {int authenticator; int public_key_len; int public_key; int uuid_r; int enrollee_nonce; int registrar_nonce; } ;
struct wps_data {scalar_t__ state; int peer_dev; int config_error; int * dev_password; TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_2__ {int ap_setup_locked; scalar_t__ ap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct wps_data*,int ,struct wpabuf const*) ;
 scalar_t__ FUNC_2 (int *,struct wps_parse_attr*) ;
 scalar_t__ FUNC_3 (struct wps_data*,int ) ;
 scalar_t__ FUNC_4 (struct wps_data*,int ,int ) ;
 scalar_t__ FUNC_5 (struct wps_data*,int ) ;
 scalar_t__ FUNC_6 (struct wps_data*,int ) ;

__attribute__((used)) static enum wps_process_res FUNC_7(struct wps_data *VAR_6,
        const struct wpabuf *VAR_7,
        struct wps_parse_attr *VAR_8)
{
 FUNC_0(VAR_0, "WPS: Received M2");

 if (VAR_6->state != VAR_1) {
  FUNC_0(VAR_0, "WPS: Unexpected state (%d) for "
      "receiving M2", VAR_6->state);
  VAR_6->state = VAR_3;
  return VAR_5;
 }

 if (FUNC_5(VAR_6, VAR_8->registrar_nonce) ||
     FUNC_3(VAR_6, VAR_8->enrollee_nonce) ||
     FUNC_6(VAR_6, VAR_8->uuid_r)) {
  VAR_6->state = VAR_3;
  return VAR_5;
 }







 if (VAR_6->wps->ap &&
     ((VAR_6->wps->ap_setup_locked && VAR_6->wps->ap_setup_locked != 2) ||
      VAR_6->dev_password == ((void*)0))) {
  FUNC_0(VAR_0, "WPS: AP Setup is locked - refuse "
      "registration of a new Registrar");
  VAR_6->config_error = VAR_4;
  VAR_6->state = VAR_3;
  return VAR_5;
 }

 if (FUNC_4(VAR_6, VAR_8->public_key, VAR_8->public_key_len) ||
     FUNC_1(VAR_6, VAR_8->authenticator, VAR_7) ||
     FUNC_2(&VAR_6->peer_dev, VAR_8)) {
  VAR_6->state = VAR_3;
  return VAR_5;
 }

 VAR_6->state = VAR_2;
 return VAR_5;
}

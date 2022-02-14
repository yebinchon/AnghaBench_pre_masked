
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wps_parse_attr {scalar_t__* msg_type; int * enrollee_nonce; int * registrar_nonce; } ;
struct wps_data {scalar_t__ state; TYPE_1__* wps; int * uuid_e; int p2p_dev_addr; scalar_t__ pbc; int dev_password_len; int dev_password; int mac_addr_e; int * new_psk; int new_psk_len; int er; int peer_dev; int nonce_e; int nonce_r; scalar_t__ ext_reg; } ;
struct wps_credential {int auth_type; int encr_type; int key_len; int key; int ssid_len; int ssid; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
typedef int cred ;
struct TYPE_9__ {int pbc_ignore_uuid; int pbc_ignore_start; int disable_auto_conf; } ;
struct TYPE_8__ {scalar_t__ wps_state; TYPE_2__* registrar; scalar_t__ ap; int cb_ctx; int (* cred_cb ) (int ,struct wps_credential*) ;int ssid_len; int * ssid; scalar_t__ wps_upnp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct wps_credential*,int ,int) ;
 int FUNC_5 (int ,struct wps_credential*) ;
 int FUNC_6 (int ,char*,int *,int ) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int *,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_11 (struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int *,int ) ;
 int FUNC_15 (struct wps_data*) ;
 int FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static enum wps_process_res FUNC_17(struct wps_data *VAR_13,
       const struct wpabuf *VAR_14)
{
 struct wps_parse_attr VAR_15;

 FUNC_7(VAR_0, "WPS: Received WSC_Done");

 if (VAR_13->state != VAR_1 && (!VAR_13->ext_reg)){
  FUNC_7(VAR_0, "WPS: Unexpected state (%d) for "
      "receiving WSC_Done", VAR_13->state);
  return VAR_7;
 }

 if (FUNC_11(VAR_14, &VAR_15) < 0)
  return VAR_7;

 if (VAR_15.msg_type == ((void*)0)) {
  FUNC_7(VAR_0, "WPS: No Message Type attribute");
  return VAR_7;
 }

 if (*VAR_15.msg_type != VAR_12) {
  FUNC_7(VAR_0, "WPS: Invalid Message Type %d",
      *VAR_15.msg_type);
  return VAR_7;
 }
 if (VAR_15.registrar_nonce == ((void*)0) ||
     FUNC_2(VAR_13->nonce_r, VAR_15.registrar_nonce, VAR_8) != 0)
 {
  FUNC_7(VAR_0, "WPS: Mismatch in registrar nonce");
  return VAR_7;
 }

 if (VAR_15.enrollee_nonce == ((void*)0) ||
     FUNC_2(VAR_13->nonce_e, VAR_15.enrollee_nonce, VAR_8) != 0) {
  FUNC_7(VAR_0, "WPS: Mismatch in enrollee nonce");
  return VAR_7;
 }

 FUNC_7(VAR_0, "WPS: Negotiation completed successfully");
 FUNC_10(VAR_13->wps->registrar, &VAR_13->peer_dev,
    VAR_13->uuid_e);

 if (VAR_13->wps->wps_state == VAR_10 && VAR_13->new_psk &&
     VAR_13->wps->ap && !VAR_13->wps->registrar->disable_auto_conf) {
  struct wps_credential VAR_16;

  FUNC_7(VAR_0, "WPS: Moving to Configured state based "
      "on first Enrollee connection");

  FUNC_4(&VAR_16, 0, sizeof(VAR_16));
  FUNC_3(VAR_16.ssid, VAR_13->wps->ssid, VAR_13->wps->ssid_len);
  VAR_16.ssid_len = VAR_13->wps->ssid_len;
  VAR_16.auth_type = VAR_3 | VAR_2;
  VAR_16.encr_type = VAR_6 | VAR_5;
  FUNC_3(VAR_16.key, VAR_13->new_psk, VAR_13->new_psk_len);
  VAR_16.key_len = VAR_13->new_psk_len;

  VAR_13->wps->wps_state = VAR_9;
  FUNC_6(VAR_0,
          "WPS: Generated random passphrase",
          VAR_13->new_psk, VAR_13->new_psk_len);
  if (VAR_13->wps->cred_cb)
   VAR_13->wps->cred_cb(VAR_13->wps->cb_ctx, &VAR_16);

  FUNC_0(VAR_13->new_psk);
  VAR_13->new_psk = ((void*)0);
 }

 if (!VAR_13->wps->ap && !VAR_13->er)
  FUNC_15(VAR_13);

 if (VAR_13->new_psk) {
  if (FUNC_8(VAR_13->wps->registrar, VAR_13->mac_addr_e,
       VAR_13->new_psk, VAR_13->new_psk_len)) {
   FUNC_7(VAR_0, "WPS: Failed to configure the "
       "new PSK");
  }
  FUNC_0(VAR_13->new_psk);
  VAR_13->new_psk = ((void*)0);
 }

 FUNC_9(VAR_13->wps->registrar, VAR_13->mac_addr_e, VAR_13->uuid_e,
      VAR_13->dev_password, VAR_13->dev_password_len);

 if (VAR_13->pbc) {
  FUNC_14(VAR_13->wps->registrar,
       VAR_13->uuid_e,
       VAR_13->p2p_dev_addr);
  FUNC_12(VAR_13->wps->registrar);
  FUNC_1(&VAR_13->wps->registrar->pbc_ignore_start);
  FUNC_3(VAR_13->wps->registrar->pbc_ignore_uuid, VAR_13->uuid_e,
     VAR_11);
 } else {



 }



 FUNC_16(VAR_13->wps);

 return VAR_4;
}

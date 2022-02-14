
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct wps_parse_attr {int public_key_len; int * public_key; int os_version; int config_error; int dev_password_id; int assoc_state; int rf_bands; int wps_state; int config_methods; int conn_type_flags; int encr_type_flags; int auth_type_flags; int enrollee_nonce; int mac_addr; int uuid_e; } ;
struct wps_nfc_pw_token {int pubkey_hash; int list; } ;
struct TYPE_9__ {scalar_t__ model_name; scalar_t__ manufacturer; } ;
struct wps_data {scalar_t__ state; int dev_pw_id; int pbc; int use_psk_key; TYPE_3__ peer_dev; int uuid_e; int mac_addr_e; TYPE_6__* wps; int config_error; struct wps_nfc_pw_token* nfc_pw_token; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_10__ {TYPE_1__* registrar; } ;
struct TYPE_8__ {int force_pbc_overlap; int nfc_pw_tokens; int pbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (int,int const**,int *,int *) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (TYPE_6__*,int ,int ,int ) ;
 struct wps_nfc_pw_token* FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (struct wps_data*,int ) ;
 scalar_t__ FUNC_10 (struct wps_data*,int ) ;
 scalar_t__ FUNC_11 (struct wps_data*,int ) ;
 scalar_t__ FUNC_12 (struct wps_data*,int ) ;
 scalar_t__ FUNC_13 (struct wps_data*,int ) ;
 scalar_t__ FUNC_14 (struct wps_data*,int ) ;
 scalar_t__ FUNC_15 (TYPE_3__*,struct wps_parse_attr*) ;
 scalar_t__ FUNC_16 (struct wps_data*,int ) ;
 scalar_t__ FUNC_17 (struct wps_data*,int ) ;
 scalar_t__ FUNC_18 (struct wps_data*,int ) ;
 scalar_t__ FUNC_19 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_20 (struct wps_data*,int *,int ) ;
 scalar_t__ FUNC_21 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_22 (struct wps_data*,int ) ;
 scalar_t__ FUNC_23 (struct wps_data*,int ) ;
 int FUNC_24 (TYPE_1__*,int ,int ) ;
 int FUNC_25 (struct wps_data*) ;
 scalar_t__ FUNC_26 (TYPE_1__*,int ,int ) ;
 int FUNC_27 (struct wps_data*) ;

__attribute__((used)) static enum wps_process_res FUNC_28(struct wps_data *VAR_17,
        struct wps_parse_attr *VAR_18)
{
 FUNC_5(VAR_5, "WPS: Received M1");

 if (VAR_17->state != VAR_7) {
  FUNC_5(VAR_5, "WPS: Unexpected state (%d) for "
      "receiving M1", VAR_17->state);
  return VAR_13;
 }

 if (FUNC_22(VAR_17, VAR_18->uuid_e) ||
     FUNC_18(VAR_17, VAR_18->mac_addr) ||
     FUNC_17(VAR_17, VAR_18->enrollee_nonce) ||
     FUNC_20(VAR_17, VAR_18->public_key, VAR_18->public_key_len) ||
     FUNC_10(VAR_17, VAR_18->auth_type_flags) ||
     FUNC_16(VAR_17, VAR_18->encr_type_flags) ||
     FUNC_13(VAR_17, VAR_18->conn_type_flags) ||
     FUNC_12(VAR_17, VAR_18->config_methods) ||
     FUNC_23(VAR_17, VAR_18->wps_state) ||
     FUNC_15(&VAR_17->peer_dev, VAR_18) ||
     FUNC_21(&VAR_17->peer_dev, VAR_18->rf_bands) ||
     FUNC_9(VAR_17, VAR_18->assoc_state) ||
     FUNC_14(VAR_17, VAR_18->dev_password_id) ||
     FUNC_11(VAR_17, VAR_18->config_error) ||
     FUNC_19(&VAR_17->peer_dev, VAR_18->os_version))
  return VAR_13;

 if (VAR_17->dev_pw_id < 0x10 &&
     VAR_17->dev_pw_id != VAR_0 &&
     VAR_17->dev_pw_id != VAR_4 &&
     VAR_17->dev_pw_id != VAR_1 &&
     VAR_17->dev_pw_id != VAR_3 &&
     (VAR_17->dev_pw_id != VAR_2 ||
      !VAR_17->wps->registrar->pbc)) {
  FUNC_5(VAR_5, "WPS: Unsupported Device Password ID %d",
      VAR_17->dev_pw_id);
  VAR_17->state = VAR_9;
  return VAR_11;
 }
 if (VAR_17->dev_pw_id == VAR_2) {
  if ((VAR_17->wps->registrar->force_pbc_overlap ||
       FUNC_26(VAR_17->wps->registrar,
            VAR_17->mac_addr_e, VAR_17->uuid_e) ||
       !FUNC_25(VAR_17)) &&
      !FUNC_27(VAR_17)) {
   FUNC_5(VAR_5, "WPS: PBC overlap - deny PBC "
       "negotiation");
   VAR_17->state = VAR_9;
   VAR_17->config_error = VAR_10;
   FUNC_8(VAR_17->wps);
   FUNC_6(VAR_17->wps, VAR_15,
           VAR_10,
           VAR_12);
   VAR_17->wps->registrar->force_pbc_overlap = 1;
   return VAR_11;
  }
  FUNC_24(VAR_17->wps->registrar,
           VAR_17->mac_addr_e, VAR_17->uuid_e);
  VAR_17->pbc = 1;
 }
 VAR_17->state = VAR_8;
 return VAR_11;
}

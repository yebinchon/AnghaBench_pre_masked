
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wps_key_mode_t ;
struct wps_data {int dev_pw_id; struct wpabuf* dh_pubkey_e; struct wpabuf* dh_pubkey_r; scalar_t__ registrar; struct wpabuf* dh_privkey; int * dh_ctx; TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int ap_nfc_dev_pw_id; scalar_t__ ap_nfc_dh_pubkey; scalar_t__ ap_nfc_dh_privkey; scalar_t__ ap; scalar_t__ dh_pubkey; int * dh_ctx; scalar_t__ dh_privkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (struct wpabuf**,struct wpabuf**) ;
 int * FUNC_2 (struct wpabuf*,struct wpabuf*) ;
 int FUNC_3 (int ,char*,struct wpabuf*) ;
 int FUNC_4 (int ,char*,struct wpabuf*) ;
 int FUNC_5 (int ,char*) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,int ) ;
 int FUNC_10 (struct wpabuf*,struct wpabuf*) ;
 struct wpabuf* FUNC_11 (struct wpabuf*,int) ;

int FUNC_12(struct wps_data *VAR_5, struct wpabuf *VAR_6, wps_key_mode_t VAR_7)
{
 struct wpabuf *VAR_8;

 if (VAR_7 != VAR_3) {

  FUNC_5(VAR_2, "WPS:  * Public Key");
  FUNC_7(VAR_5->dh_privkey);
  if (VAR_5->dev_pw_id != VAR_1 && VAR_5->wps->dh_privkey) {
   FUNC_5(VAR_2, "WPS: Using pre-configured DH keys");
   VAR_5->dh_privkey = FUNC_6(VAR_5->wps->dh_privkey);
   VAR_5->dh_ctx = VAR_5->wps->dh_ctx;
   VAR_5->wps->dh_ctx = ((void*)0);
   VAR_8 = FUNC_6(VAR_5->wps->dh_pubkey);
  } else {
   FUNC_5(VAR_2, "WPS: Generate new DH keys");
   VAR_5->dh_privkey = ((void*)0);
   FUNC_0(VAR_5->dh_ctx);

   FUNC_5(VAR_2, "build public key start\n");

   VAR_5->dh_ctx = FUNC_1(&VAR_5->dh_privkey, &VAR_8);

   FUNC_5(VAR_2, "build public key finish\n");

   VAR_8 = FUNC_11(VAR_8, 192);
  }
  if (VAR_5->dh_ctx == ((void*)0) || VAR_5->dh_privkey == ((void*)0) || VAR_8 == ((void*)0)) {
   FUNC_5(VAR_2, "WPS: Failed to initialize "
     "Diffie-Hellman handshake");
   FUNC_7(VAR_8);
   return -1;
  }
  FUNC_4(VAR_2, "WPS: DH Private Key", VAR_5->dh_privkey);
  FUNC_3(VAR_2, "WPS: DH own Public Key", VAR_8);

  if (VAR_5->registrar) {
   FUNC_7(VAR_5->dh_pubkey_r);
   VAR_5->dh_pubkey_r = VAR_8;
  } else {
   FUNC_7(VAR_5->dh_pubkey_e);
   VAR_5->dh_pubkey_e = VAR_8;
  }

 }

 if (VAR_7 != VAR_4) {
  if (VAR_5->registrar)
   VAR_8 = VAR_5->dh_pubkey_r;
  else
   VAR_8 = VAR_5->dh_pubkey_e;

  FUNC_9(VAR_6, VAR_0);
  FUNC_9(VAR_6, FUNC_8(VAR_8));
  FUNC_10(VAR_6, VAR_8);
 }

 return 0;
}

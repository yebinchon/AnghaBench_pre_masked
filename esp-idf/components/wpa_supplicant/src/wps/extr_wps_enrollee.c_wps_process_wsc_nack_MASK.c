
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wps_parse_attr {scalar_t__* msg_type; int * config_error; int * enrollee_nonce; int * registrar_nonce; } ;
struct wps_data {int state; int error_indication; int wps; int * nonce_e; int * nonce_r; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;



 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int *,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct wpabuf const*,struct wps_parse_attr*) ;

__attribute__((used)) static enum wps_process_res FUNC_8(struct wps_data *VAR_8,
       const struct wpabuf *VAR_9)
{
 struct wps_parse_attr *VAR_10;
 enum wps_process_res VAR_11;
 u16 VAR_12;

 FUNC_5(VAR_0, "WPS: Received WSC_NACK");

 VAR_10 = (struct wps_parse_attr *)FUNC_3(sizeof(struct wps_parse_attr));
        if (VAR_10 == ((void*)0)) {
  VAR_11 = VAR_2;
  goto _out;
 }

 if (FUNC_7(VAR_9, VAR_10) < 0) {
  VAR_11 = VAR_2;
  goto _out;
 }

 if (VAR_10->msg_type == ((void*)0)) {
  FUNC_5(VAR_0, "WPS: No Message Type attribute");
  VAR_11 = VAR_2;
  goto _out;
 }

 if (*VAR_10->msg_type != VAR_7) {
  FUNC_5(VAR_0, "WPS: Invalid Message Type %d",
      *VAR_10->msg_type);
  VAR_11 = VAR_2;
  goto _out;
 }

 if (VAR_10->registrar_nonce == ((void*)0) ||
     FUNC_2(VAR_8->nonce_r, VAR_10->registrar_nonce, VAR_6) != 0)
 {
  FUNC_5(VAR_0, "WPS: Mismatch in registrar nonce");
  FUNC_4(VAR_0, "WPS: Received Registrar Nonce",
       VAR_10->registrar_nonce, VAR_6);
  FUNC_4(VAR_0, "WPS: Expected Registrar Nonce",
       VAR_8->nonce_r, VAR_6);
  VAR_11 = VAR_2;
  goto _out;
 }

 if (VAR_10->enrollee_nonce == ((void*)0) ||
     FUNC_2(VAR_8->nonce_e, VAR_10->enrollee_nonce, VAR_6) != 0) {
  FUNC_5(VAR_0, "WPS: Mismatch in enrollee nonce");
  FUNC_4(VAR_0, "WPS: Received Enrollee Nonce",
       VAR_10->enrollee_nonce, VAR_6);
  FUNC_4(VAR_0, "WPS: Expected Enrollee Nonce",
       VAR_8->nonce_e, VAR_6);
  VAR_11 = VAR_2;
  goto _out;
 }

 if (VAR_10->config_error == ((void*)0)) {
  FUNC_5(VAR_0, "WPS: No Configuration Error attribute "
      "in WSC_NACK");
  VAR_11 = VAR_2;
  goto _out;
 }

 VAR_12 = FUNC_0(VAR_10->config_error);
 FUNC_5(VAR_0, "WPS: Registrar terminated negotiation with "
     "Configuration Error %d", VAR_12);

 switch (VAR_8->state) {
 case 130:
  FUNC_6(VAR_8->wps, VAR_3, VAR_12,
          VAR_8->error_indication);
  break;
 case 129:
  FUNC_6(VAR_8->wps, VAR_4, VAR_12,
          VAR_8->error_indication);
  break;
 case 128:
  FUNC_6(VAR_8->wps, VAR_5, VAR_12,
          VAR_8->error_indication);
  break;
 default:
  break;
 }



 VAR_8->state = VAR_1;

 VAR_11 = VAR_2;
_out:
 if (VAR_10)
  FUNC_1(VAR_10);

 return VAR_11;
}

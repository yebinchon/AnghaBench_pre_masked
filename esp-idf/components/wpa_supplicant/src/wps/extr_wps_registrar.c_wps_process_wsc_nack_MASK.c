
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wps_parse_attr {scalar_t__* msg_type; int * config_error; int * enrollee_nonce; int * registrar_nonce; } ;
struct wps_data {int state; int error_indication; TYPE_1__* wps; int nonce_e; int nonce_r; scalar_t__ ext_reg; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_2__ {scalar_t__ wps_upnp; } ;


 int VAR_0 ;




 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct wpabuf const*,struct wps_parse_attr*) ;

__attribute__((used)) static enum wps_process_res FUNC_5(struct wps_data *VAR_9,
       const struct wpabuf *VAR_10)
{
 struct wps_parse_attr VAR_11;
 int VAR_12;
 u16 VAR_13;

 FUNC_2(VAR_0, "WPS: Received WSC_NACK");

 VAR_12 = VAR_9->state;
 VAR_9->state = VAR_1;

 if (FUNC_4(VAR_10, &VAR_11) < 0)
  return VAR_2;

 if (VAR_11.msg_type == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: No Message Type attribute");
  return VAR_2;
 }

 if (*VAR_11.msg_type != VAR_8) {
  FUNC_2(VAR_0, "WPS: Invalid Message Type %d",
      *VAR_11.msg_type);
  return VAR_2;
 }
 if (VAR_11.registrar_nonce == ((void*)0) ||
     FUNC_1(VAR_9->nonce_r, VAR_11.registrar_nonce, VAR_7) != 0)
 {
  FUNC_2(VAR_0, "WPS: Mismatch in registrar nonce");
  return VAR_2;
 }

 if (VAR_11.enrollee_nonce == ((void*)0) ||
     FUNC_1(VAR_9->nonce_e, VAR_11.enrollee_nonce, VAR_7) != 0) {
  FUNC_2(VAR_0, "WPS: Mismatch in enrollee nonce");
  return VAR_2;
 }

 if (VAR_11.config_error == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: No Configuration Error attribute "
      "in WSC_NACK");
  return VAR_2;
 }

 VAR_13 = FUNC_0(VAR_11.config_error);
 FUNC_2(VAR_0, "WPS: Enrollee terminated negotiation with "
     "Configuration Error %d", VAR_13);

 switch (VAR_12) {
 case 130:
  FUNC_3(VAR_9->wps, VAR_3, VAR_13,
          VAR_9->error_indication);
  break;
 case 129:
  FUNC_3(VAR_9->wps, VAR_4, VAR_13,
          VAR_9->error_indication);
  break;
 case 128:
  FUNC_3(VAR_9->wps, VAR_5, VAR_13,
          VAR_9->error_indication);
  break;
 case 131:
  FUNC_3(VAR_9->wps, VAR_6, VAR_13,
          VAR_9->error_indication);
  break;
 default:
  break;
 }

 return VAR_2;
}

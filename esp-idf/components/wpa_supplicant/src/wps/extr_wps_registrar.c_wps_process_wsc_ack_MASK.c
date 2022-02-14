
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_parse_attr {scalar_t__* msg_type; int * enrollee_nonce; int * registrar_nonce; } ;
struct wps_data {int ext_reg; scalar_t__ state; TYPE_1__* wps; int nonce_e; int nonce_r; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_2__ {scalar_t__ upnp_msgs; scalar_t__ wps_upnp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (struct wpabuf const*,struct wps_parse_attr*) ;

__attribute__((used)) static enum wps_process_res FUNC_4(struct wps_data *VAR_7,
      const struct wpabuf *VAR_8)
{
 struct wps_parse_attr VAR_9;

 FUNC_2(VAR_0, "WPS: Received WSC_ACK");

 if (FUNC_3(VAR_8, &VAR_9) < 0)
  return VAR_3;

 if (VAR_9.msg_type == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: No Message Type attribute");
  return VAR_3;
 }

 if (*VAR_9.msg_type != VAR_6) {
  FUNC_2(VAR_0, "WPS: Invalid Message Type %d",
      *VAR_9.msg_type);
  return VAR_3;
 }
 if (VAR_9.registrar_nonce == ((void*)0) ||
     FUNC_0(VAR_7->nonce_r, VAR_9.registrar_nonce, VAR_4) != 0)
 {
  FUNC_2(VAR_0, "WPS: Mismatch in registrar nonce");
  return VAR_3;
 }

 if (VAR_9.enrollee_nonce == ((void*)0) ||
     FUNC_0(VAR_7->nonce_e, VAR_9.enrollee_nonce, VAR_4) != 0) {
  FUNC_2(VAR_0, "WPS: Mismatch in enrollee nonce");
  return VAR_3;
 }

 if (VAR_7->state == VAR_1) {
  FUNC_2(VAR_0, "WPS: No more registrars available - "
      "terminate negotiation");
 }

 return VAR_3;
}

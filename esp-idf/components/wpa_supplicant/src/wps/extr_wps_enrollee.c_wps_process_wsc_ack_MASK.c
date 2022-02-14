
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_parse_attr {scalar_t__* msg_type; int * enrollee_nonce; int * registrar_nonce; } ;
struct wps_data {scalar_t__ state; TYPE_1__* wps; int nonce_e; int nonce_r; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_2__ {scalar_t__ ap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static enum wps_process_res FUNC_6(struct wps_data *VAR_7,
      const struct wpabuf *VAR_8)
{
 struct wps_parse_attr *VAR_9;
 enum wps_process_res VAR_10;

 FUNC_3(VAR_0, "WPS: Received WSC_ACK");

 VAR_9 = (struct wps_parse_attr *)FUNC_2(sizeof(struct wps_parse_attr));
        if (VAR_9 == ((void*)0)) {
  VAR_10 = VAR_3;
  goto _out;
 }

 if (FUNC_4(VAR_8, VAR_9) < 0) {
  VAR_10 = VAR_3;
  goto _out;
 }

 if (VAR_9->msg_type == ((void*)0)) {
  FUNC_3(VAR_0, "WPS: No Message Type attribute");
  VAR_10 = VAR_3;
  goto _out;
 }

 if (*VAR_9->msg_type != VAR_6) {
  FUNC_3(VAR_0, "WPS: Invalid Message Type %d",
      *VAR_9->msg_type);
  VAR_10 = VAR_3;
  goto _out;
 }

 if (VAR_9->registrar_nonce == ((void*)0) ||
     FUNC_1(VAR_7->nonce_r, VAR_9->registrar_nonce, VAR_5) != 0)
 {
  FUNC_3(VAR_0, "WPS: Mismatch in registrar nonce");
  VAR_10 = VAR_3;
  goto _out;
 }

 if (VAR_9->enrollee_nonce == ((void*)0) ||
     FUNC_1(VAR_7->nonce_e, VAR_9->enrollee_nonce, VAR_5) != 0) {
  FUNC_3(VAR_0, "WPS: Mismatch in enrollee nonce");
  VAR_10 = VAR_3;
  goto _out;
 }

 if (VAR_7->state == VAR_1 && VAR_7->wps->ap) {
  FUNC_3(VAR_0, "WPS: External Registrar registration "
      "completed successfully");
  FUNC_5(VAR_7->wps);
  VAR_7->state = VAR_4;
  VAR_10 = VAR_2;
  goto _out;
 }

 VAR_10 = VAR_3;
_out:
 if (VAR_9)
  FUNC_0(VAR_9);

 return VAR_10;
}

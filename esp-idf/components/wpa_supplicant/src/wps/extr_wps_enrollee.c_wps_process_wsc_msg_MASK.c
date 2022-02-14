
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int* msg_type; int * enrollee_nonce; } ;
struct wps_data {int last_msg; int error_indication; int config_error; int wps; int state; int nonce_e; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;





 int VAR_8 ;
 int FUNC_1 (struct wps_parse_attr*) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wpabuf const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int const,int ,int ) ;
 scalar_t__ FUNC_8 (struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_9 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_10 (struct wps_data*,struct wps_parse_attr*) ;
 int FUNC_11 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_12 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_13 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_14 (struct wpabuf const*) ;
 int FUNC_15 (struct wpabuf const*) ;
 int FUNC_16 (struct wpabuf const*) ;
 int FUNC_17 (struct wpabuf const*) ;
 int FUNC_18 (struct wpabuf const*) ;

__attribute__((used)) static enum wps_process_res FUNC_19(struct wps_data *VAR_9,
      const struct wpabuf *VAR_10)
{
 struct wps_parse_attr *VAR_11;
 enum wps_process_res VAR_12 = VAR_6;

 FUNC_4(VAR_0, "WPS: Received WSC_MSG");

 VAR_11 = (struct wps_parse_attr *)FUNC_3(sizeof(struct wps_parse_attr));
        if (VAR_11 == ((void*)0)) {
  VAR_12 = VAR_7;
  goto _out;
 }

 if (FUNC_8(VAR_10, VAR_11) < 0) {
  VAR_12 = VAR_7;
  goto _out;
 }

 if (VAR_11->enrollee_nonce == ((void*)0) ||
     FUNC_2(VAR_9->nonce_e, VAR_11->enrollee_nonce, VAR_8) != 0) {
  FUNC_4(VAR_0, "WPS: Mismatch in enrollee nonce");
  VAR_12 = VAR_7;
  goto _out;
 }

 if (VAR_11->msg_type == ((void*)0)) {
  FUNC_4(VAR_0, "WPS: No Message Type attribute");
  VAR_9->state = VAR_5;
  VAR_12 = VAR_6;
  goto _out;
 }

 switch (*VAR_11->msg_type) {
 case 132:
                FUNC_0(VAR_1);
  if (FUNC_14(VAR_10) < 0) {
   VAR_12 = VAR_7;
   goto _out;
  }
  VAR_12 = FUNC_9(VAR_9, VAR_10, VAR_11);
  break;
 case 131:
  if (FUNC_15(VAR_10) < 0) {
   VAR_12 = VAR_7;
   goto _out;
  }
  VAR_12 = FUNC_10(VAR_9, VAR_11);
  break;
 case 130:
                FUNC_0(VAR_2);
  if (FUNC_16(VAR_10) < 0) {
   VAR_12 = VAR_7;
   goto _out;
  }
  VAR_12 = FUNC_11(VAR_9, VAR_10, VAR_11);
  if (VAR_12 == VAR_7 || VAR_9->state == VAR_5)
   FUNC_7(VAR_9->wps, 130, VAR_9->config_error,
           VAR_9->error_indication);
  break;
 case 129:
                FUNC_0(VAR_3);
  if (FUNC_17(VAR_10) < 0) {
   VAR_12 = VAR_7;
   goto _out;
  }
  VAR_12 = FUNC_12(VAR_9, VAR_10, VAR_11);
  if (VAR_12 == VAR_7 || VAR_9->state == VAR_5)
   FUNC_7(VAR_9->wps, 129, VAR_9->config_error,
           VAR_9->error_indication);
  break;
 case 128:
                FUNC_0(VAR_4);
  if (FUNC_18(VAR_10) < 0) {
   VAR_12 = VAR_7;
   goto _out;
  }
  VAR_12 = FUNC_13(VAR_9, VAR_10, VAR_11);
  if (VAR_12 == VAR_7 || VAR_9->state == VAR_5)
   FUNC_7(VAR_9->wps, 128, VAR_9->config_error,
           VAR_9->error_indication);
  break;
 default:
  FUNC_4(VAR_0, "WPS: Unsupported Message Type %d",
      *VAR_11->msg_type);
  VAR_12 = VAR_7;
  goto _out;
 }
 if (VAR_12 == VAR_6 && *VAR_11->msg_type != 131) {


  FUNC_6(VAR_9->last_msg);
  VAR_9->last_msg = FUNC_5(VAR_10);
 }

_out:
 if (VAR_11)
  FUNC_1(VAR_11);

 return VAR_12;
}

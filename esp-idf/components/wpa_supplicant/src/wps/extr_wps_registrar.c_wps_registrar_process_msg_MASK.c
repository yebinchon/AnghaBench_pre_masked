
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wps_parse_attr {scalar_t__* msg_type; } ;
struct wps_data {int ext_reg; int error_indication; int config_error; TYPE_1__* wps; int state; int mac_addr_e; } ;
struct wpabuf {int dummy; } ;
typedef enum wsc_op_code { ____Placeholder_wsc_op_code } wsc_op_code ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_3__ {scalar_t__ wps_upnp; int * upnp_msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (scalar_t__,int ,int ,struct wpabuf const*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct wpabuf const*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_5 (struct wps_data*,struct wpabuf const*) ;
 int FUNC_6 (struct wps_data*,struct wpabuf const*) ;
 int FUNC_7 (struct wps_data*,struct wpabuf const*) ;
 int FUNC_8 (struct wps_data*,struct wpabuf const*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct wpabuf const*) ;
 int FUNC_11 (struct wpabuf const*) ;
 int FUNC_12 (struct wpabuf const*) ;

enum wps_process_res FUNC_13(struct wps_data *VAR_8,
            enum wsc_op_code VAR_9,
            const struct wpabuf *VAR_10)
{
 enum wps_process_res VAR_11;

 FUNC_1(VAR_0, "WPS: Processing received message (len=%lu "
     "op_code=%d)",
     (unsigned long) FUNC_2(VAR_10), VAR_9);
 switch (VAR_9) {
 case 129:
  return FUNC_7(VAR_8, VAR_10);
 case 131:
  if (FUNC_10(VAR_10) < 0)
   return VAR_4;
  return FUNC_5(VAR_8, VAR_10);
 case 128:
  if (FUNC_12(VAR_10) < 0)
   return VAR_4;
  return FUNC_8(VAR_8, VAR_10);
 case 130:
  if (FUNC_11(VAR_10) < 0)
   return VAR_4;
  VAR_11 = FUNC_6(VAR_8, VAR_10);
  if (VAR_11 == VAR_4) {
   VAR_8->state = VAR_1;
   FUNC_3(VAR_8->wps, VAR_7,
           VAR_8->config_error,
           VAR_8->error_indication);
  }
  return VAR_11;
 default:
  FUNC_1(VAR_0, "WPS: Unsupported op_code %d", VAR_9);
  return VAR_4;
 }
}

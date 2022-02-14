
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_event_m2d {void* dev_password_id; void* config_error; int primary_dev_type; int dev_name_len; int dev_name; int serial_number_len; int serial_number; int model_number_len; int model_number; int model_name_len; int model_name; int manufacturer_len; int manufacturer; void* config_methods; } ;
union wps_event_data {struct wps_event_m2d m2d; } ;
struct wps_parse_attr {scalar_t__ dev_password_id; scalar_t__ config_error; int primary_dev_type; int dev_name_len; int dev_name; int serial_number_len; int serial_number; int model_number_len; int model_number; int model_name_len; int model_name; int manufacturer_len; int manufacturer; scalar_t__ config_methods; } ;
struct wps_data {scalar_t__ state; TYPE_1__* wps; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
typedef int data ;
struct TYPE_2__ {int cb_ctx; int (* event_cb ) (int ,int ,union wps_event_data*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (union wps_event_data*,int ,int) ;
 int FUNC_2 (int ,int ,union wps_event_data*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static enum wps_process_res FUNC_5(struct wps_data *VAR_6,
         struct wps_parse_attr *VAR_7)
{
 FUNC_4(VAR_0, "WPS: Received M2D");

 if (VAR_6->state != VAR_2) {
  FUNC_4(VAR_0, "WPS: Unexpected state (%d) for "
      "receiving M2D", VAR_6->state);
  VAR_6->state = VAR_3;
  return VAR_4;
 }

 FUNC_3(VAR_0, "WPS: Manufacturer",
     VAR_7->manufacturer, VAR_7->manufacturer_len);
 FUNC_3(VAR_0, "WPS: Model Name",
     VAR_7->model_name, VAR_7->model_name_len);
 FUNC_3(VAR_0, "WPS: Model Number",
     VAR_7->model_number, VAR_7->model_number_len);
 FUNC_3(VAR_0, "WPS: Serial Number",
     VAR_7->serial_number, VAR_7->serial_number_len);
 FUNC_3(VAR_0, "WPS: Device Name",
     VAR_7->dev_name, VAR_7->dev_name_len);

 if (VAR_6->wps->event_cb) {
  union wps_event_data VAR_8;
  struct wps_event_m2d *VAR_9 = &VAR_8.m2d;
  FUNC_1(&VAR_8, 0, sizeof(VAR_8));
  if (VAR_7->config_methods)
   VAR_9->config_methods =
    FUNC_0(VAR_7->config_methods);
  VAR_9->manufacturer = VAR_7->manufacturer;
  VAR_9->manufacturer_len = VAR_7->manufacturer_len;
  VAR_9->model_name = VAR_7->model_name;
  VAR_9->model_name_len = VAR_7->model_name_len;
  VAR_9->model_number = VAR_7->model_number;
  VAR_9->model_number_len = VAR_7->model_number_len;
  VAR_9->serial_number = VAR_7->serial_number;
  VAR_9->serial_number_len = VAR_7->serial_number_len;
  VAR_9->dev_name = VAR_7->dev_name;
  VAR_9->dev_name_len = VAR_7->dev_name_len;
  VAR_9->primary_dev_type = VAR_7->primary_dev_type;
  if (VAR_7->config_error)
   VAR_9->config_error =
    FUNC_0(VAR_7->config_error);
  if (VAR_7->dev_password_id)
   VAR_9->dev_password_id =
    FUNC_0(VAR_7->dev_password_id);
  VAR_6->wps->event_cb(VAR_6->wps->cb_ctx, VAR_5, &VAR_8);
 }

 VAR_6->state = VAR_1;
 return VAR_4;
}

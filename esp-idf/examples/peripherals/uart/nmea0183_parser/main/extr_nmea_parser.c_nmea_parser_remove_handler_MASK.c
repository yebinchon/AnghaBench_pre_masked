
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ nmea_parser_handle_t ;
struct TYPE_2__ {int event_loop_hdl; } ;
typedef TYPE_1__ esp_gps_t ;
typedef int esp_event_handler_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

esp_err_t FUNC_1(nmea_parser_handle_t VAR_2, esp_event_handler_t VAR_3)
{
    esp_gps_t *VAR_4 = (esp_gps_t *)VAR_2;
    return FUNC_0(VAR_4->event_loop_hdl, VAR_1, VAR_0, VAR_3);
}

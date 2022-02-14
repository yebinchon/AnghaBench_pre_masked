
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ nmea_parser_handle_t ;
struct TYPE_3__ {struct TYPE_3__* buffer; int uart_port; int event_loop_hdl; int tsk_hdl; } ;
typedef TYPE_1__ esp_gps_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

esp_err_t FUNC_4(nmea_parser_handle_t VAR_0)
{
    esp_gps_t *VAR_1 = (esp_gps_t *)VAR_0;
    FUNC_3(VAR_1->tsk_hdl);
    FUNC_0(VAR_1->event_loop_hdl);
    esp_err_t VAR_2 = FUNC_2(VAR_1->uart_port);
    FUNC_1(VAR_1->buffer);
    FUNC_1(VAR_1);
    return VAR_2;
}

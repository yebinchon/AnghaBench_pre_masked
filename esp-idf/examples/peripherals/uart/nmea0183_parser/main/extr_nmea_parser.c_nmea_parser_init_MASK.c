
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int flow_ctrl; int stop_bits; int parity; int data_bits; int baud_rate; } ;
typedef TYPE_2__ uart_config_t ;
typedef TYPE_3__* nmea_parser_handle_t ;
struct TYPE_13__ {int event_queue_size; int rx_pin; int stop_bits; int parity; int data_bits; int baud_rate; int uart_port; } ;
struct TYPE_16__ {TYPE_1__ uart; } ;
typedef TYPE_4__ nmea_parser_config_t ;
struct TYPE_15__ {int all_statements; struct TYPE_15__* buffer; int uart_port; int event_loop_hdl; int tsk_hdl; int event_queue; } ;
typedef TYPE_3__ esp_gps_t ;
struct TYPE_17__ {int * task_name; int queue_size; } ;
typedef TYPE_6__ esp_event_loop_args_t ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int *,int ) ;
 int FUNC_8 (int ,char,int,int,int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ,char*,int ,TYPE_3__*,int ,int *) ;

nmea_parser_handle_t FUNC_14(const nmea_parser_config_t *VAR_17)
{
    esp_gps_t *VAR_18 = FUNC_2(1, sizeof(esp_gps_t));
    if (!VAR_18) {
        FUNC_0(VAR_4, "calloc memory for esp_fps failed");
        goto err_gps;
    }
    VAR_18->buffer = FUNC_2(1, VAR_6);
    if (!VAR_18->buffer) {
        FUNC_0(VAR_4, "calloc memory for runtime buffer failed");
        goto err_buffer;
    }
    VAR_18->uart_port = VAR_17->uart.uart_port;
    VAR_18->all_statements &= 0xFE;

    uart_config_t VAR_19 = {
        .baud_rate = VAR_17->uart.baud_rate,
        .data_bits = VAR_17->uart.data_bits,
        .parity = VAR_17->uart.parity,
        .stop_bits = VAR_17->uart.stop_bits,
        .flow_ctrl = VAR_13
    };
    if (FUNC_10(VAR_18->uart_port, &VAR_19) != VAR_3) {
        FUNC_0(VAR_4, "config uart parameter failed");
        goto err_uart_config;
    }
    if (FUNC_12(VAR_18->uart_port, VAR_14, VAR_17->uart.rx_pin,
                     VAR_14, VAR_14) != VAR_3) {
        FUNC_0(VAR_4, "config uart gpio failed");
        goto err_uart_config;
    }
    if (FUNC_7(VAR_18->uart_port, VAR_0, 0,
                            VAR_17->uart.event_queue_size, &VAR_18->event_queue, 0) != VAR_3) {
        FUNC_0(VAR_4, "install uart driver failed");
        goto err_uart_install;
    }

    FUNC_8(VAR_18->uart_port, '\n', 1, 9, 0, 0);

    FUNC_11(VAR_18->uart_port, VAR_17->uart.event_queue_size);
    FUNC_9(VAR_18->uart_port);

    esp_event_loop_args_t VAR_20 = {
        .queue_size = VAR_5,
        .task_name = ((void*)0)
    };
    if (FUNC_3(&VAR_20, &VAR_18->event_loop_hdl) != VAR_3) {
        FUNC_0(VAR_4, "create event loop faild");
        goto err_eloop;
    }

    BaseType_t VAR_21 = FUNC_13(
                         VAR_15,
                         "nmea_parser",
                         VAR_2,
                         VAR_18,
                         VAR_1,
                         &VAR_18->tsk_hdl);
    if (VAR_21 != VAR_16) {
        FUNC_0(VAR_4, "create NMEA Parser task failed");
        goto err_task_create;
    }
    FUNC_1(VAR_4, "NMEA Parser init OK");
    return VAR_18;

err_task_create:
    FUNC_4(VAR_18->event_loop_hdl);
err_eloop:
err_uart_install:
    FUNC_6(VAR_18->uart_port);
err_uart_config:
err_buffer:
    FUNC_5(VAR_18->buffer);
err_gps:
    FUNC_5(VAR_18);
    return ((void*)0);
}

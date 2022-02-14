
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {char* name; int dispatch_method; int callback; TYPE_3__* arg; } ;
typedef TYPE_2__ esp_timer_create_args_t ;
typedef int esp_err_t ;
typedef scalar_t__ button_handle_t ;
struct TYPE_6__ {int * tmr; TYPE_3__* pbtn; int interval; int cb; void* arg; } ;
struct TYPE_8__ {int serial_thres_sec; TYPE_1__ press_serial_cb; } ;
typedef TYPE_3__ button_dev_t ;
typedef int button_cb ;
typedef int TickType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int **) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int ) ;
 int * FUNC_2 (char*,int,int ,TYPE_3__*,int ) ;

esp_err_t FUNC_3(button_handle_t VAR_6, uint32_t VAR_7, TickType_t VAR_8, button_cb VAR_9, void* VAR_10)
{
    button_dev_t* VAR_11 = (button_dev_t*) VAR_6;
    VAR_11->serial_thres_sec = VAR_7;

    if (VAR_11->press_serial_cb.tmr == ((void*)0)) {

        VAR_11->press_serial_cb.tmr = FUNC_2("btn_serial_tmr", VAR_11->serial_thres_sec*1000 / VAR_5,
                            VAR_3, VAR_11, VAR_2);
    }
    VAR_11->press_serial_cb.arg = VAR_10;
    VAR_11->press_serial_cb.cb = VAR_9;
    VAR_11->press_serial_cb.interval = VAR_8;
    VAR_11->press_serial_cb.pbtn = VAR_11;

    FUNC_1(VAR_11->press_serial_cb.tmr, VAR_11->serial_thres_sec*1000 / VAR_5, VAR_4);

    return VAR_0;
}

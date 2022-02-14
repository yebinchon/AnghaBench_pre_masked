
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int modem_mode_t ;
struct TYPE_6__ {int (* send_cmd ) (TYPE_1__*,char*,int ) ;} ;
typedef TYPE_1__ modem_dte_t ;
struct TYPE_7__ {int mode; int state; int handle_line; TYPE_1__* dte; } ;
typedef TYPE_2__ modem_dce_t ;
typedef int esp_err_t ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static esp_err_t FUNC_5(modem_dce_t *VAR_8, modem_mode_t VAR_9)
{
    modem_dte_t *VAR_10 = VAR_8->dte;
    switch (VAR_9) {
    case 129:
        VAR_8->handle_line = VAR_6;
        FUNC_0(VAR_10->send_cmd(VAR_10, "+++", VAR_3) == VAR_2, "send command failed", VAR_7);
        FUNC_0(VAR_8->state == VAR_4, "enter command mode failed", VAR_7);
        FUNC_1(VAR_0, "enter command mode ok");
        VAR_8->mode = 129;
        break;
    case 128:
        VAR_8->handle_line = VAR_5;
        FUNC_0(VAR_10->send_cmd(VAR_10, "ATD*99***1#\r", VAR_3) == VAR_2, "send command failed", VAR_7);
        FUNC_0(VAR_8->state == VAR_4, "enter ppp mode failed", VAR_7);
        FUNC_1(VAR_0, "enter ppp mode ok");
        VAR_8->mode = 128;
        break;
    default:
        FUNC_2(VAR_0, "unsupported working mode: %d", VAR_9);
        goto err;
        break;
    }
    return VAR_2;
err:
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int modem_flow_ctrl_t ;
struct TYPE_5__ {int flow_ctrl; scalar_t__ (* send_cmd ) (TYPE_1__*,char*,int ) ;} ;
typedef TYPE_1__ modem_dte_t ;
struct TYPE_6__ {scalar_t__ state; int handle_line; TYPE_1__* dte; } ;
typedef TYPE_2__ modem_dce_t ;
typedef scalar_t__ esp_err_t ;
typedef int command ;


 int FUNC_0 (int,char*,int ,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int,char*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,int ) ;

esp_err_t FUNC_4(modem_dce_t *VAR_7, modem_flow_ctrl_t VAR_8)
{
    modem_dte_t *VAR_9 = VAR_7->dte;
    char VAR_10[16];
    int VAR_11 = FUNC_2(VAR_10, sizeof(VAR_10), "AT+IFC=%d,%d\r", VAR_9->flow_ctrl, VAR_8);
    FUNC_0(VAR_11 < sizeof(VAR_10), "command too long: %s", VAR_5, VAR_10);
    VAR_7->handle_line = VAR_6;
    FUNC_0(VAR_9->send_cmd(VAR_9, VAR_10, VAR_3) == VAR_2, "send command failed", VAR_5);
    FUNC_0(VAR_7->state == VAR_4, "set flow control failed", VAR_5);
    FUNC_1(VAR_0, "set flow control ok");
    return VAR_2;
err:
    return VAR_1;
}

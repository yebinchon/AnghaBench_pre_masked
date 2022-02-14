
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* send_cmd ) (TYPE_1__*,char*,int ) ;} ;
typedef TYPE_1__ modem_dte_t ;
struct TYPE_6__ {scalar_t__ state; int handle_line; TYPE_1__* dte; } ;
typedef TYPE_2__ modem_dce_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,int ) ;

esp_err_t FUNC_3(modem_dce_t *VAR_7)
{
    modem_dte_t *VAR_8 = VAR_7->dte;
    VAR_7->handle_line = VAR_6;
    FUNC_0(VAR_8->send_cmd(VAR_8, "AT\r", VAR_3) == VAR_2, "send command failed", VAR_5);
    FUNC_0(VAR_7->state == VAR_4, "sync failed", VAR_5);
    FUNC_1(VAR_0, "sync ok");
    return VAR_2;
err:
    return VAR_1;
}

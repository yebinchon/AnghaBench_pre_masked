
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* send_cmd ) (TYPE_2__*,char*,int ) ;} ;
typedef TYPE_2__ modem_dte_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {scalar_t__ state; int handle_line; TYPE_2__* dte; } ;
struct TYPE_8__ {TYPE_1__ parent; } ;
typedef TYPE_3__ bg96_modem_dce_t ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static esp_err_t FUNC_3(bg96_modem_dce_t *VAR_7)
{
    modem_dte_t *VAR_8 = VAR_7->parent.dte;
    VAR_7->parent.handle_line = VAR_5;
    FUNC_0(VAR_8->send_cmd(VAR_8, "AT+CGMM\r", VAR_3) == VAR_2, "send command failed", VAR_6);
    FUNC_0(VAR_7->parent.state == VAR_4, "get module name failed", VAR_6);
    FUNC_1(VAR_0, "get module name ok");
    return VAR_2;
err:
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* scan_start ) (int ,int ,int ,int ,int *) ;int ctx; } ;
typedef TYPE_2__ wifi_prov_scan_handlers_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {int * resp_scan_start; int payload_case; TYPE_1__* cmd_scan_start; int status; } ;
typedef TYPE_3__ WiFiScanPayload ;
struct TYPE_6__ {int period_ms; int group_channels; int passive; int blocking; } ;
typedef int RespScanStart ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static esp_err_t FUNC_4(WiFiScanPayload *VAR_7,
                                        WiFiScanPayload *VAR_8, void *VAR_9)
{
    wifi_prov_scan_handlers_t *VAR_10 = (wifi_prov_scan_handlers_t *) VAR_9;
    if (!VAR_10) {
        FUNC_0(VAR_5, "Command invoked without handlers");
        return VAR_0;
    }

    RespScanStart *VAR_11 = (RespScanStart *) FUNC_1(sizeof(RespScanStart));
    if (!VAR_11) {
        FUNC_0(VAR_5, "Error allocating memory");
        return VAR_1;
    }

    FUNC_2(VAR_11);
    VAR_8->status = (VAR_10->scan_start(VAR_7->cmd_scan_start->blocking,
                                  VAR_7->cmd_scan_start->passive,
                                  VAR_7->cmd_scan_start->group_channels,
                                  VAR_7->cmd_scan_start->period_ms,
                                  &VAR_10->ctx) == VAR_2 ?
                            VAR_4 : VAR_3);
    VAR_8->payload_case = VAR_6;
    VAR_8->resp_scan_start = VAR_11;
    return VAR_2;
}

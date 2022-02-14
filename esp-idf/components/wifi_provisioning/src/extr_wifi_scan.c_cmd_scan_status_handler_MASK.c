
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* scan_status ) (int*,int *,int *) ;int ctx; } ;
typedef TYPE_1__ wifi_prov_scan_handlers_t ;
typedef int uint16_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {TYPE_3__* resp_scan_status; int payload_case; int status; } ;
typedef TYPE_2__ WiFiScanPayload ;
struct TYPE_9__ {int scan_finished; int result_count; } ;
typedef TYPE_3__ RespScanStatus ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int*,int *,int *) ;

__attribute__((used)) static esp_err_t FUNC_4(WiFiScanPayload *VAR_7,
                                         WiFiScanPayload *VAR_8, void *VAR_9)
{
    bool VAR_10 = 0;
    uint16_t VAR_11 = 0;

    wifi_prov_scan_handlers_t *VAR_12 = (wifi_prov_scan_handlers_t *) VAR_9;
    if (!VAR_12) {
        FUNC_0(VAR_5, "Command invoked without handlers");
        return VAR_0;
    }

    RespScanStatus *VAR_13 = (RespScanStatus *) FUNC_1(sizeof(RespScanStatus));
    if (!VAR_13) {
        FUNC_0(VAR_5, "Error allocating memory");
        return VAR_1;
    }

    FUNC_2(VAR_13);
    VAR_8->status = (VAR_12->scan_status(&VAR_10, &VAR_11, &VAR_12->ctx) == VAR_2 ?
                            VAR_4 : VAR_3);
    VAR_13->scan_finished = VAR_10;
    VAR_13->result_count = VAR_11;
    VAR_8->payload_case = VAR_6;
    VAR_8->resp_scan_status = VAR_13;
    return VAR_2;
}

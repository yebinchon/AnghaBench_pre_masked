
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sta; } ;
typedef TYPE_3__ wifi_config_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_7__ {int wifi_mode; } ;
struct TYPE_8__ {TYPE_1__ scheme; } ;
struct TYPE_10__ {scalar_t__ prov_state; int wifi_state; TYPE_2__ mgr_config; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,void*,int) ;
 int VAR_9 ;
 TYPE_5__* VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int) ;

esp_err_t FUNC_10(wifi_config_t *VAR_12)
{
    if (!VAR_11) {
        FUNC_1(VAR_4, "Provisioning manager not initialized");
        return VAR_0;
    }

    FUNC_0(VAR_11);
    if (!VAR_10) {
        FUNC_1(VAR_4, "Invalid state of Provisioning app");
        FUNC_2(VAR_11);
        return VAR_1;
    }
    if (VAR_10->prov_state >= VAR_6) {
        FUNC_1(VAR_4, "Wi-Fi credentials already received by provisioning app");
        FUNC_2(VAR_11);
        return VAR_1;
    }
    FUNC_3(VAR_12->sta, "Received");


    if (FUNC_6(VAR_10->mgr_config.scheme.wifi_mode) != VAR_3) {
        FUNC_1(VAR_4, "Failed to set Wi-Fi mode");
        FUNC_2(VAR_11);
        return VAR_1;
    }
    if (FUNC_7(VAR_8) != VAR_3) {
        FUNC_1(VAR_4, "Failed to set storage Wi-Fi");
        FUNC_2(VAR_11);
        return VAR_1;
    }


    if (FUNC_5(VAR_2, VAR_12) != VAR_3) {
        FUNC_1(VAR_4, "Failed to set Wi-Fi configuration");
        FUNC_2(VAR_11);
        return VAR_1;
    }

    if (FUNC_4() != VAR_3) {
        FUNC_1(VAR_4, "Failed to connect Wi-Fi");
        FUNC_2(VAR_11);
        return VAR_1;
    }

    FUNC_9(1000 / VAR_9);


    VAR_10->wifi_state = VAR_7;
    VAR_10->prov_state = VAR_6;

    FUNC_8(VAR_5, (void *)&VAR_12->sta, sizeof(VAR_12->sta));
    FUNC_2(VAR_11);

    return VAR_3;
}

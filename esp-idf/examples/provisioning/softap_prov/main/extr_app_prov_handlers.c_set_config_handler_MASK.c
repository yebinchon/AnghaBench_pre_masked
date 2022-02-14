
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wifi_prov_ctx_t ;
struct TYPE_8__ {int password; int ssid; } ;
typedef TYPE_2__ wifi_prov_config_set_data_t ;
struct TYPE_7__ {scalar_t__ password; scalar_t__ ssid; } ;
struct TYPE_9__ {TYPE_1__ sta; } ;
typedef TYPE_3__ wifi_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int **) ;
 TYPE_3__* FUNC_3 (int **) ;
 TYPE_3__* FUNC_4 (int **) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static esp_err_t FUNC_7(const wifi_prov_config_set_data_t *VAR_3, wifi_prov_ctx_t **VAR_4)
{
    wifi_config_t *VAR_5 = FUNC_3(VAR_4);
    if (VAR_5) {
        FUNC_2(VAR_4);
    }

    VAR_5 = FUNC_4(VAR_4);
    if (!VAR_5) {
        FUNC_0(VAR_2, "Unable to alloc wifi config");
        return VAR_0;
    }

    FUNC_1(VAR_2, "WiFi Credentials Received : \n\tssid %s \n\tpassword %s",
             VAR_3->ssid, VAR_3->password);






    FUNC_6((char *) VAR_5->sta.ssid, VAR_3->ssid, sizeof(VAR_5->sta.ssid));
    FUNC_5((char *) VAR_5->sta.password, VAR_3->password, sizeof(VAR_5->sta.password));
    return VAR_1;
}

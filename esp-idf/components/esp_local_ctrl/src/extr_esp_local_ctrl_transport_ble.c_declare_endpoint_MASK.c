
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int name; int uuid; } ;
typedef TYPE_2__ protocomm_ble_name_uuid_t ;
struct TYPE_9__ {TYPE_1__* ble; } ;
typedef TYPE_3__ esp_local_ctrl_transport_config_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int nu_lookup_count; TYPE_2__* nu_lookup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static esp_err_t FUNC_3(esp_local_ctrl_transport_config_t *VAR_4, const char *VAR_5, uint16_t VAR_6)
{
    if (!VAR_4 || !VAR_4->ble) {
        FUNC_0(VAR_3, "NULL configuration provided");
        return VAR_0;
    }

    protocomm_ble_name_uuid_t *VAR_7 = FUNC_1(VAR_4->ble->nu_lookup,
                                                   (VAR_4->ble->nu_lookup_count + 1)
                                                   * sizeof(protocomm_ble_name_uuid_t));
    if (!VAR_7) {
        FUNC_0(VAR_3, "Failed to allocate memory for new endpoint entry");
        return VAR_1;
    }
    VAR_4->ble->nu_lookup = VAR_7;
    VAR_7[VAR_4->ble->nu_lookup_count].uuid = VAR_6;
    VAR_7[VAR_4->ble->nu_lookup_count].name = FUNC_2(VAR_5);
    if (!VAR_7[VAR_4->ble->nu_lookup_count].name) {
        FUNC_0(VAR_3, "Failed to allocate memory for new endpoint name");
        return VAR_1;
    }
    VAR_4->ble->nu_lookup_count++;
    return VAR_2;
}

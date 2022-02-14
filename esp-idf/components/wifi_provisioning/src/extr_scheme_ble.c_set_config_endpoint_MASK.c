
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {char* name; int uuid; } ;
typedef TYPE_1__ protocomm_ble_name_uuid_t ;
struct TYPE_6__ {int nu_lookup_count; TYPE_1__* nu_lookup; } ;
typedef TYPE_2__ protocomm_ble_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static esp_err_t FUNC_3(void *VAR_4, const char *VAR_5, uint16_t VAR_6)
{
    if (!VAR_4) {
        FUNC_0(VAR_3, "Cannot set null configuration");
        return VAR_0;
    }

    if (!VAR_5) {
        FUNC_0(VAR_3, "EP name cannot be null");
        return VAR_0;
    }

    protocomm_ble_config_t *VAR_7 = (protocomm_ble_config_t *) VAR_4;

    char *VAR_8 = FUNC_2(VAR_5);
    if (!VAR_8) {
        FUNC_0(VAR_3, "Error allocating memory for EP name");
        return VAR_1;
    }

    protocomm_ble_name_uuid_t *VAR_9 = (
                FUNC_1(VAR_7->nu_lookup, (VAR_7->nu_lookup_count + 1) * sizeof(protocomm_ble_name_uuid_t)));
    if (!VAR_9) {
        FUNC_0(VAR_3, "Error allocating memory for EP-UUID lookup table");
        return VAR_1;
    }

    VAR_9[VAR_7->nu_lookup_count].name = VAR_8;
    VAR_9[VAR_7->nu_lookup_count].uuid = VAR_6;
    VAR_7->nu_lookup = VAR_9;
    VAR_7->nu_lookup_count += 1;
    return VAR_2;
}

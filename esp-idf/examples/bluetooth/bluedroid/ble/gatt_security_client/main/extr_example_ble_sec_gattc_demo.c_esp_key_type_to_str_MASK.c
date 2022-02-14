
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_ble_key_type_t ;
__attribute__((used)) static const char *FUNC_0(esp_ble_key_type_t VAR_0)
{
   const char *VAR_1 = ((void*)0);
   switch(VAR_0) {
    case 132:
        VAR_1 = "ESP_LE_KEY_NONE";
        break;
    case 130:
        VAR_1 = "ESP_LE_KEY_PENC";
        break;
    case 129:
        VAR_1 = "ESP_LE_KEY_PID";
        break;
    case 131:
        VAR_1 = "ESP_LE_KEY_PCSRK";
        break;
    case 128:
        VAR_1 = "ESP_LE_KEY_PLK";
        break;
    case 133:
        VAR_1 = "ESP_LE_KEY_LLK";
        break;
    case 135:
        VAR_1 = "ESP_LE_KEY_LENC";
        break;
    case 134:
        VAR_1 = "ESP_LE_KEY_LID";
        break;
    case 136:
        VAR_1 = "ESP_LE_KEY_LCSRK";
        break;
    default:
        VAR_1 = "INVALID BLE KEY TYPE";
        break;

    }
     return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_ble_auth_req_t ;
__attribute__((used)) static char *FUNC_0(esp_ble_auth_req_t VAR_0)
{
   char *VAR_1 = ((void*)0);
   switch(VAR_0) {
    case 134:
        VAR_1 = "ESP_LE_AUTH_NO_BOND";
        break;
    case 135:
        VAR_1 = "ESP_LE_AUTH_BOND";
        break;
    case 132:
        VAR_1 = "ESP_LE_AUTH_REQ_MITM";
        break;
    case 133:
        VAR_1 = "ESP_LE_AUTH_REQ_BOND_MITM";
        break;
    case 128:
        VAR_1 = "ESP_LE_AUTH_REQ_SC_ONLY";
        break;
    case 131:
        VAR_1 = "ESP_LE_AUTH_REQ_SC_BOND";
        break;
    case 130:
        VAR_1 = "ESP_LE_AUTH_REQ_SC_MITM";
        break;
    case 129:
        VAR_1 = "ESP_LE_AUTH_REQ_SC_MITM_BOND";
        break;
    default:
        VAR_1 = "INVALID BLE AUTH REQ";
        break;
   }

   return VAR_1;
}

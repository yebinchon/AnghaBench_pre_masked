
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTA_DM_DISC ;
typedef int tBTA_DM_CONN ;
typedef int esp_bt_discovery_mode_t ;
typedef int esp_bt_connection_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;






__attribute__((used)) static void FUNC_2(esp_bt_connection_mode_t VAR_6, esp_bt_discovery_mode_t VAR_7)
{
    tBTA_DM_DISC VAR_8;
    tBTA_DM_CONN VAR_9;

    switch (VAR_6) {
    case 129:
        VAR_9 = VAR_4;
        break;
    case 132:
        VAR_9 = VAR_0;
        break;
    default:
        FUNC_1("invalid connection mode (0x%x)", VAR_6);
        return;
    }

    switch (VAR_7) {
    case 128:
        VAR_8 = VAR_5;
        break;
    case 130:
        VAR_8 = VAR_3;
        break;
    case 131:
        VAR_8 = VAR_1;
        break;
    default:
        FUNC_1("invalid discovery mode (0x%x)", VAR_7);
        return;
    }

    FUNC_0(VAR_8, VAR_9, VAR_2, VAR_2);
    return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;
typedef int esp_event_base_t ;
typedef int esp_eth_handle_t ;


 int FUNC_0 (int ,char*,...) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, esp_event_base_t VAR_3,
                              int32_t VAR_4, void *VAR_5)
{
    uint8_t VAR_6[6] = {0};

    esp_eth_handle_t VAR_7 = *(esp_eth_handle_t *)VAR_5;

    switch (VAR_4) {
    case 131:
        FUNC_1(VAR_7, VAR_0, VAR_6);
        FUNC_0(VAR_1, "Ethernet Link Up");
        FUNC_0(VAR_1, "Ethernet HW Addr %02x:%02x:%02x:%02x:%02x:%02x",
                 VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5]);
        break;
    case 130:
        FUNC_0(VAR_1, "Ethernet Link Down");
        break;
    case 129:
        FUNC_0(VAR_1, "Ethernet Started");
        break;
    case 128:
        FUNC_0(VAR_1, "Ethernet Stopped");
        break;
    default:
        break;
    }
}

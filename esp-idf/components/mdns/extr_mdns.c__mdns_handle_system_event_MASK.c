
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mdns_if_t ;
typedef int int32_t ;
typedef int esp_netif_t ;
typedef int esp_netif_dhcp_status_t ;
typedef scalar_t__ esp_event_base_t ;


 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;




 int VAR_10 ;
 int FUNC_0 (size_t,int ,int *,int ,int) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (size_t) ;
 size_t FUNC_4 (int *) ;
 int VAR_11 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*) ;
 int * VAR_12 ;

__attribute__((used)) static void FUNC_7(esp_event_base_t VAR_13,
                                      int32_t VAR_14, esp_netif_t* VAR_15)
{
    if (!VAR_11) {
        return;
    }


    if (VAR_13 == VAR_9 && VAR_14 == VAR_10) {
        VAR_12[VAR_6] = FUNC_6("WIFI_STA_DEF");
    } else if (VAR_13 == VAR_9 && VAR_14 == 131) {
        VAR_12[VAR_4] = FUNC_6("WIFI_AP_DEF");




    }

    esp_netif_dhcp_status_t VAR_16;
    if (VAR_13 == VAR_9) {
        switch(VAR_14) {
            case 129:
                if (!FUNC_5(FUNC_3(VAR_6), &VAR_16)) {
                    if (VAR_16 == VAR_0) {
                        FUNC_2(VAR_6, VAR_7);
                    }
                }
                break;
            case 128:
                FUNC_1(VAR_6, VAR_7);
                FUNC_1(VAR_6, VAR_8);
                break;
            case 131:
                FUNC_2(VAR_4, VAR_7);
                break;
            case 130:
                FUNC_1(VAR_4, VAR_7);
                FUNC_1(VAR_4, VAR_8);
                break;
            default:
                break;
        }
    }
    else if (VAR_13 == VAR_3) {
        switch (VAR_14) {
            case 132:
                FUNC_2(VAR_6, VAR_7);
                FUNC_0(VAR_6, VAR_8, ((void*)0), 0, 1);
                break;





            case 133:
            {
                mdns_if_t VAR_17 = FUNC_4(VAR_15);
                FUNC_2(VAR_17, VAR_8);
                FUNC_0(VAR_17, VAR_7, ((void*)0), 0, 1);

            }
                break;
            default:
                break;
        }
    }
}

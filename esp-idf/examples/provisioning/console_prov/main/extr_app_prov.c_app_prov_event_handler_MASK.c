
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reason; } ;
typedef TYPE_1__ wifi_event_sta_disconnected_t ;
typedef scalar_t__ esp_event_base_t ;
struct TYPE_4__ {void* wifi_state; int wifi_disconnect_reason; scalar_t__ timer; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;







 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_11 ;

__attribute__((used)) static void FUNC_4(void* VAR_12, esp_event_base_t VAR_13,
                                   int VAR_14, void* VAR_15)
{


    if (!VAR_11) {
        return;
    }

    if (VAR_13 == VAR_3 && VAR_14 == VAR_5) {
        FUNC_1(VAR_2, "STA Start");




        VAR_11->wifi_state = VAR_9;
    } else if (VAR_13 == VAR_0 && VAR_14 == VAR_1) {
        FUNC_1(VAR_2, "STA Got IP");


        VAR_11->wifi_state = VAR_8;
        if (VAR_11 && VAR_11->timer) {
            FUNC_2(VAR_11->timer, 30000*1000U);
        }
    } else if (VAR_13 == VAR_3 && VAR_14 == VAR_4) {
        FUNC_0(VAR_2, "STA Disconnected");

        VAR_11->wifi_state = VAR_10;

        wifi_event_sta_disconnected_t* VAR_16 = (wifi_event_sta_disconnected_t*) VAR_15;
        FUNC_0(VAR_2, "Disconnect reason : %d", VAR_16->reason);


        switch (VAR_16->reason) {
        case 132:
        case 134:
        case 130:
        case 131:
        case 133:
        case 129:
            FUNC_1(VAR_2, "STA Auth Error");
            VAR_11->wifi_disconnect_reason = VAR_7;
            break;
        case 128:
            FUNC_1(VAR_2, "STA AP Not found");
            VAR_11->wifi_disconnect_reason = VAR_6;
            break;
        default:


            VAR_11->wifi_state = VAR_9;
            FUNC_3();
        }
    }
}

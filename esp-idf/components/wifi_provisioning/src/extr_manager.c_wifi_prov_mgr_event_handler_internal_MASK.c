
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wifi_prov_sta_fail_reason_t ;
struct TYPE_7__ {int reason; } ;
typedef TYPE_3__ wifi_event_sta_disconnected_t ;
typedef int reason ;
typedef scalar_t__ esp_event_base_t ;
struct TYPE_5__ {int no_auto_stop; } ;
struct TYPE_6__ {TYPE_1__ capabilities; } ;
struct TYPE_8__ {scalar_t__ prov_state; scalar_t__ wifi_state; int wifi_disconnect_reason; int timer; TYPE_2__ mgr_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;






 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,void*,int) ;
 TYPE_4__* VAR_18 ;
 int VAR_19 ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(
    void* VAR_20, esp_event_base_t VAR_21, int VAR_22, void* VAR_23)
{
    if (!VAR_19) {
        FUNC_2(VAR_2, "Provisioning manager not initialized");
        return;
    }
    FUNC_0(VAR_19);




    if (!VAR_18) {
        FUNC_4(VAR_19);
        return;
    }


    if (VAR_18->prov_state == VAR_11 &&
        VAR_21 == VAR_3 &&
        VAR_22 == VAR_4) {
        FUNC_8();
    }



    if (VAR_18->prov_state != VAR_9) {
        FUNC_4(VAR_19);
        return;
    }

    if (VAR_21 == VAR_3 && VAR_22 == VAR_6) {
        FUNC_3(VAR_2, "STA Start");




        VAR_18->wifi_state = VAR_16;
    } else if (VAR_21 == VAR_0 && VAR_22 == VAR_1) {
        FUNC_3(VAR_2, "STA Got IP");

        VAR_18->wifi_state = VAR_15;
        VAR_18->prov_state = VAR_12;



        if (!VAR_18->mgr_info.capabilities.no_auto_stop) {
            FUNC_1(VAR_2, "Starting 30s timer for stop_prov_timer_cb()");
            FUNC_5(VAR_18->timer, 30000 * 1000U);
        }


        FUNC_7(VAR_8, ((void*)0), 0);
    } else if (VAR_21 == VAR_3 && VAR_22 == VAR_5) {
        FUNC_2(VAR_2, "STA Disconnected");

        VAR_18->wifi_state = VAR_17;

        wifi_event_sta_disconnected_t* VAR_24 = (wifi_event_sta_disconnected_t*) VAR_23;
        FUNC_2(VAR_2, "Disconnect reason : %d", VAR_24->reason);


        switch (VAR_24->reason) {
        case 131:
        case 133:
        case 130:
        case 132:
        case 129:
            FUNC_2(VAR_2, "STA Auth Error");
            VAR_18->wifi_disconnect_reason = VAR_14;
            break;
        case 128:
            FUNC_2(VAR_2, "STA AP Not found");
            VAR_18->wifi_disconnect_reason = VAR_13;
            break;
        default:


            VAR_18->wifi_state = VAR_16;
            FUNC_6();
        }



        if (VAR_18->wifi_state == VAR_17) {
            VAR_18->prov_state = VAR_10;
            wifi_prov_sta_fail_reason_t VAR_25 = VAR_18->wifi_disconnect_reason;

            FUNC_7(VAR_7, (void *)&VAR_25, sizeof(VAR_25));
        }
    }

    FUNC_4(VAR_19);
}

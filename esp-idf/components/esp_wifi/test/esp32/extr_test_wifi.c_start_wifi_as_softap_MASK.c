
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nvs_enable; } ;
typedef TYPE_2__ wifi_init_config_t ;
struct TYPE_7__ {int channel; int ssid_hidden; int max_connection; int beacon_interval; int authmode; int ssid_len; int password; int ssid; } ;
struct TYPE_9__ {TYPE_1__ ap; } ;
typedef TYPE_3__ wifi_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int * VAR_5 ;
 int * FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void)
{
    wifi_init_config_t VAR_6 = FUNC_1();
    VAR_6.nvs_enable = 0;

    wifi_config_t VAR_7 = {
        .ap.ssid = VAR_1,
        .ap.password = VAR_0,
        .ap.ssid_len = 0,
        .ap.channel = 1,
        .ap.authmode = VAR_2,
        .ap.ssid_hidden = 0,
        .ap.max_connection = 4,
        .ap.beacon_interval = 100,
    };

    FUNC_6();


    FUNC_7();

    if (VAR_5 == ((void*)0)) {
        VAR_5 = FUNC_8();
    }

    FUNC_0(FUNC_2(&VAR_6));
    FUNC_0(FUNC_4(VAR_4));
    FUNC_0(FUNC_3(VAR_3, &VAR_7));
    FUNC_0(FUNC_5());
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wifi_prov_security_t ;
struct TYPE_3__ {int scheme_event_handler; int scheme; } ;
typedef TYPE_1__ wifi_prov_mgr_config_t ;
typedef int wifi_init_config_t ;
typedef int uint8_t ;
typedef int service_name ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_11 ;
 int FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int) ;
 int VAR_14 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (TYPE_1__) ;
 scalar_t__ FUNC_15 (int*) ;
 scalar_t__ FUNC_16 (int ,char const*,char*,char const*) ;
 int VAR_15 ;
 int FUNC_17 (int*) ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int ,int,int,int ) ;

void FUNC_20(void)
{

    esp_err_t VAR_16 = FUNC_10();
    if (VAR_16 == VAR_1 || VAR_16 == VAR_0) {


        FUNC_0(FUNC_9());


        FUNC_0(FUNC_10());
    }


    FUNC_6();


    FUNC_0(FUNC_4());
    VAR_14 = FUNC_18();


    FUNC_0(FUNC_3(VAR_8, VAR_2, &VAR_11, ((void*)0)));
    FUNC_0(FUNC_3(VAR_7, VAR_2, &VAR_11, ((void*)0)));
    FUNC_0(FUNC_3(VAR_3, VAR_4, &VAR_11, ((void*)0)));


    FUNC_5();
    wifi_init_config_t VAR_17 = FUNC_2();
    FUNC_0(FUNC_7(&VAR_17));


    wifi_prov_mgr_config_t VAR_18 = {


        .scheme = VAR_15,
        .scheme_event_handler = VAR_9
    };



    FUNC_0(FUNC_14(VAR_18));

    bool VAR_19 = 0;

    FUNC_0(FUNC_15(&VAR_19));


    if (!VAR_19) {
        FUNC_1(VAR_5, "Starting provisioning");






        char VAR_20[12];
        FUNC_8(VAR_20, sizeof(VAR_20));







        wifi_prov_security_t VAR_21 = VAR_10;





        const char *VAR_22 = "abcd1234";






        const char *VAR_23 = ((void*)0);
        uint8_t VAR_24[] = {


            0x21, 0x43, 0x65, 0x87, 0x09, 0xba, 0xdc, 0xfe,
            0xef, 0xcd, 0xab, 0x90, 0x78, 0x56, 0x34, 0x12
        };
        FUNC_17(VAR_24);


        FUNC_0(FUNC_16(VAR_21, VAR_22, VAR_20, VAR_23));






    } else {
        FUNC_1(VAR_5, "Already provisioned, starting Wi-Fi STA");



        FUNC_13();


        FUNC_12();
    }


    FUNC_19(VAR_14, VAR_6, 0, 1, VAR_12);


    while (1) {
        FUNC_1(VAR_5, "Hello World!");
        FUNC_11(1000 / VAR_13);
    }
}

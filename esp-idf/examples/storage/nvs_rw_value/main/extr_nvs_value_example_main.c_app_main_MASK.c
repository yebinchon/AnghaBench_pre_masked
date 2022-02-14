
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvs_handle_t ;
typedef int int32_t ;
typedef int esp_err_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 char* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,int*) ;
 int FUNC_9 (char*,int ,int *) ;
 int FUNC_10 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_11 (char*,...) ;
 int VAR_4 ;
 int FUNC_12 (int) ;

void FUNC_13(void)
{

    esp_err_t VAR_5 = FUNC_7();
    if (VAR_5 == VAR_1 || VAR_5 == VAR_0) {


        FUNC_0(FUNC_6());
        VAR_5 = FUNC_7();
    }
    FUNC_0( VAR_5 );


    FUNC_11("\n");
    FUNC_11("Opening Non-Volatile Storage (NVS) handle... ");
    nvs_handle_t VAR_6;
    VAR_5 = FUNC_9("storage", VAR_2, &VAR_6);
    if (VAR_5 != 128) {
        FUNC_11("Error (%s) opening NVS handle!\n", FUNC_1(VAR_5));
    } else {
        FUNC_11("Done\n");


        FUNC_11("Reading restart counter from NVS ... ");
        int32_t VAR_7 = 0;
        VAR_5 = FUNC_8(VAR_6, "restart_counter", &VAR_7);
        switch (VAR_5) {
            case 128:
                FUNC_11("Done\n");
                FUNC_11("Restart counter = %d\n", VAR_7);
                break;
            case 129:
                FUNC_11("The value is not initialized yet!\n");
                break;
            default :
                FUNC_11("Error (%s) reading!\n", FUNC_1(VAR_5));
        }


        FUNC_11("Updating restart counter in NVS ... ");
        VAR_7++;
        VAR_5 = FUNC_10(VAR_6, "restart_counter", VAR_7);
        FUNC_11((VAR_5 != 128) ? "Failed!\n" : "Done\n");





        FUNC_11("Committing updates in NVS ... ");
        VAR_5 = FUNC_5(VAR_6);
        FUNC_11((VAR_5 != 128) ? "Failed!\n" : "Done\n");


        FUNC_4(VAR_6);
    }

    FUNC_11("\n");


    for (int VAR_8 = 10; VAR_8 >= 0; VAR_8--) {
        FUNC_11("Restarting in %d seconds...\n", VAR_8);
        FUNC_12(1000 / VAR_3);
    }
    FUNC_11("Restarting now.\n");
    FUNC_3(VAR_4);
    FUNC_2();
}

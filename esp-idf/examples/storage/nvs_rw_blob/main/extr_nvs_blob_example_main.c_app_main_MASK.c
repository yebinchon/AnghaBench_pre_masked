
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int VAR_5 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int VAR_6 ;
 int FUNC_13 (int) ;

void FUNC_14(void)
{
    esp_err_t VAR_7 = FUNC_8();
    if (VAR_7 == VAR_1 || VAR_7 == VAR_0) {


        FUNC_0(FUNC_7());
        VAR_7 = FUNC_8();
    }
    FUNC_0( VAR_7 );

    VAR_7 = FUNC_9();
    if (VAR_7 != VAR_2) FUNC_10("Error (%s) reading data from NVS!\n", FUNC_1(VAR_7));

    VAR_7 = FUNC_11();
    if (VAR_7 != VAR_2) FUNC_10("Error (%s) saving restart counter to NVS!\n", FUNC_1(VAR_7));

    FUNC_5(VAR_4);
    FUNC_6(VAR_4, VAR_3);




    while (1) {
        if (FUNC_4(VAR_4) == 0) {
            FUNC_13(1000 / VAR_5);
            if(FUNC_4(VAR_4) == 0) {
                VAR_7 = FUNC_12();
                if (VAR_7 != VAR_2) FUNC_10("Error (%s) saving run time blob to NVS!\n", FUNC_1(VAR_7));
                FUNC_10("Restarting...\n");
                FUNC_3(VAR_6);
                FUNC_2();
            }
        }
        FUNC_13(200 / VAR_5);
    }
}

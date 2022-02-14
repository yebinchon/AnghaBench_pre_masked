
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int *,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int,int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    uint16_t VAR_5 = 0, VAR_6 = 0;
    FUNC_6();
    uint8_t* VAR_7 = (uint8_t*) FUNC_3(VAR_0);
    uint8_t* VAR_8 = (uint8_t*) FUNC_3(VAR_0);

    FUNC_11("Slave_ready");
    FUNC_10("Master_started");
    FUNC_5("Start recieve loop.\r\n");
    for(int VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {

        FUNC_1(VAR_7, VAR_0);

        esp_err_t VAR_10 = FUNC_4("Send ", VAR_7, VAR_0);
        FUNC_0(VAR_10 == VAR_1);
        FUNC_9(VAR_4, (char*)VAR_7, VAR_0);

        int VAR_11 = FUNC_8(VAR_4, VAR_8, VAR_0, (VAR_3 * 2));

        if (VAR_11 > 2) {

            esp_err_t VAR_12 = FUNC_4("Received ", VAR_8, VAR_11);
            if (VAR_12 == VAR_1) {
                VAR_6++;
                FUNC_5("Received: %d\r\n", VAR_6);
            } else {
                VAR_5++;
                FUNC_5("Errors: %d\r\n", VAR_5);
            }
        }
        else {
            FUNC_5("Incorrect answer from slave.\r\n");
            VAR_5++;
        }
    }

    FUNC_2(VAR_7);
    FUNC_7(VAR_4);
    FUNC_0(VAR_5 <= 1);
    FUNC_5("Test completed. Received packets = %d, errors = %d\r\n", (uint16_t)VAR_6, (uint16_t)VAR_5);
}

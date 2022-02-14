
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
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int *,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    FUNC_5();
    uint8_t* VAR_5 = (uint8_t*) FUNC_2(VAR_0);
    uint16_t VAR_6 = 0, VAR_7 = 0;
    FUNC_4("Start recieve loop.\r\n");
    FUNC_10("Slave_ready");
    FUNC_11("Master_started");
    for(int VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {

        int VAR_9 = FUNC_7(VAR_4, VAR_5, VAR_0, (VAR_3 * 2));

        if (VAR_9 > 2) {
            esp_err_t VAR_10 = FUNC_3("Received ", VAR_5, VAR_9);


            if (VAR_10 == VAR_1) {
                FUNC_9(VAR_4, (char*)VAR_5, VAR_9);
                VAR_7++;
            } else {
                FUNC_4("Incorrect packet received.\r\n");
                VAR_6++;
            }
        } else {
            FUNC_4("Incorrect data packet[%d] received.\r\n", VAR_8);
            VAR_6++;
        }
    }
    FUNC_4("Test completed. Received packets = %d, errors = %d\r\n", VAR_7, VAR_6);

    FUNC_8(VAR_4, VAR_3);
    FUNC_1(VAR_5);
    FUNC_6(VAR_4);
    FUNC_0(VAR_6 < 2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int i2c_cmd_handle_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (char*,...) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_11(int VAR_10, char **VAR_11)
{
    FUNC_6();
    FUNC_4(VAR_7, VAR_5, VAR_3, VAR_4, 0);
    uint8_t VAR_12;
    FUNC_10("     0  1  2  3  4  5  6  7  8  9  a  b  c  d  e  f\r\n");
    for (int VAR_13 = 0; VAR_13 < 128; VAR_13 += 16) {
        FUNC_10("%02x: ", VAR_13);
        for (int VAR_14 = 0; VAR_14 < 16; VAR_14++) {
            FUNC_0(VAR_9);
            VAR_12 = VAR_13 + VAR_14;
            i2c_cmd_handle_t VAR_15 = FUNC_1();
            FUNC_7(VAR_15);
            FUNC_9(VAR_15, (VAR_12 << 1) | VAR_6, VAR_0);
            FUNC_8(VAR_15);
            esp_err_t VAR_16 = FUNC_5(VAR_7, VAR_15, 50 / VAR_8);
            FUNC_2(VAR_15);
            if (VAR_16 == VAR_2) {
                FUNC_10("%02x ", VAR_12);
            } else if (VAR_16 == VAR_1) {
                FUNC_10("UU ");
            } else {
                FUNC_10("-- ");
            }
        }
        FUNC_10("\r\n");
    }

    FUNC_3(VAR_7);
    return 0;
}

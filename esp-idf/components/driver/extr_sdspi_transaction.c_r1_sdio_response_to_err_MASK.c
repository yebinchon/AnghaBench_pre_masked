
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_1(uint8_t VAR_13, int VAR_14, esp_err_t *VAR_15)
{
    if (VAR_13 & VAR_10) {
        FUNC_0(VAR_12, "cmd=%d, R1 response not found", VAR_14);
        *VAR_15 = VAR_5;
    } else if (VAR_13 & VAR_7) {
        FUNC_0(VAR_12, "cmd=%d, R1 response: command CRC error", VAR_14);
        *VAR_15 = VAR_1;
    } else if (VAR_13 & VAR_9) {
        FUNC_0(VAR_12, "cmd=%d, R1 response: command not supported", VAR_14);
        *VAR_15 = VAR_4;
    } else if (VAR_13 & VAR_11) {
        FUNC_0(VAR_12, "cmd=%d, R1 response: size error", VAR_14);
        *VAR_15 = VAR_3;
    } else if (VAR_13 & VAR_6) {
        FUNC_0(VAR_12, "cmd=%d, R1 response: function number error", VAR_14);
        *VAR_15 = VAR_0;
    } else if (VAR_13 & VAR_8) {

    } else if (VAR_13 != 0) {
        FUNC_0(VAR_12, "cmd=%d, R1 response: unexpected value 0x%02x", VAR_14, VAR_13);
        *VAR_15 = VAR_2;
    }
}

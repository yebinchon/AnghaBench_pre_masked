
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
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_1(uint8_t VAR_16, int VAR_17, esp_err_t *VAR_18)
{
    if (VAR_16 & VAR_13) {
        FUNC_0(VAR_15, "cmd=%d, R1 response not found", VAR_17);
        *VAR_18 = VAR_6;
    } else if (VAR_16 & VAR_8) {
        FUNC_0(VAR_15, "cmd=%d, R1 response: command CRC error", VAR_17);
        *VAR_18 = VAR_1;
    } else if (VAR_16 & VAR_12) {
        FUNC_0(VAR_15, "cmd=%d, R1 response: command not supported", VAR_17);
        *VAR_18 = VAR_5;
    } else if (VAR_16 & VAR_7) {
        FUNC_0(VAR_15, "cmd=%d, R1 response: alignment error", VAR_17);
        *VAR_18 = VAR_0;
    } else if (VAR_16 & VAR_14) {
        FUNC_0(VAR_15, "cmd=%d, R1 response: size error", VAR_17);
        *VAR_18 = VAR_3;
    } else if ((VAR_16 & VAR_9) ||
               (VAR_16 & VAR_10)) {
        *VAR_18 = VAR_4;
    } else if (VAR_16 & VAR_11) {

    } else if (VAR_16 != 0) {
        FUNC_0(VAR_15, "cmd=%d, R1 response: unexpected value 0x%02x", VAR_17, VAR_16);
        *VAR_18 = VAR_2;
    }
}

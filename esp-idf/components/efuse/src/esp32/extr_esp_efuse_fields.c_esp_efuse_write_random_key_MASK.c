
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int raw ;
typedef scalar_t__ esp_err_t ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__*,int) ;

void FUNC_7(uint32_t VAR_4)
{
    uint32_t VAR_5[8];
    uint8_t VAR_6[24];

    if (FUNC_5(VAR_0) == VAR_1) {
        FUNC_3(VAR_5, sizeof(VAR_5));
    } else {
        FUNC_3(VAR_6, sizeof(VAR_6));
        esp_err_t VAR_7 = FUNC_6(VAR_6, VAR_5, sizeof(VAR_6));
        (void) VAR_7;
        FUNC_2(VAR_7 == VAR_2);
    }

    FUNC_0(VAR_3, "Writing random values to address 0x%08x", VAR_4);
    for (int VAR_8 = 0; VAR_8 < 8; VAR_8++) {
        FUNC_0(VAR_3, "EFUSE_BLKx_WDATA%d_REG = 0x%08x", VAR_8, VAR_5[VAR_8]);
        FUNC_1(VAR_4 + 4*VAR_8, VAR_5[VAR_8]);
    }
    FUNC_4(VAR_5, sizeof(VAR_5));
    FUNC_4(VAR_6, sizeof(VAR_6));
}

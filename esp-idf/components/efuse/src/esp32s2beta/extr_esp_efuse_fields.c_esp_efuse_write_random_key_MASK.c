
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int raw ;
typedef int buf ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,int) ;

void FUNC_4(uint32_t VAR_1)
{
    uint32_t VAR_2[8];
    uint8_t VAR_3[24];

    FUNC_2(VAR_2, sizeof(VAR_2));

    FUNC_0(VAR_0, "Writing random values to address 0x%08x", VAR_1);
    for (int VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        FUNC_0(VAR_0, "EFUSE_BLKx_WDATA%d_REG = 0x%08x", VAR_4, VAR_2[VAR_4]);
        FUNC_1(VAR_1 + 4*VAR_4, VAR_2[VAR_4]);
    }
    FUNC_3(VAR_2, sizeof(VAR_2));
    FUNC_3(VAR_3, sizeof(VAR_3));
}

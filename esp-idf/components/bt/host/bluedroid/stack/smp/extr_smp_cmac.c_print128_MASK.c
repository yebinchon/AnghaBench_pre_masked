
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef scalar_t__ BT_OCTET16 ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(BT_OCTET16 VAR_1, const UINT8 *VAR_2)
{

    UINT8 *VAR_3 = (UINT8 *)VAR_1;
    UINT8 VAR_4;

    FUNC_0("%s(MSB ~ LSB) = ", VAR_2);

    for (VAR_4 = 0; VAR_4 < 4; VAR_4 ++) {
        FUNC_0("%02x %02x %02x %02x",
                          VAR_3[VAR_0 - VAR_4 * 4 - 1], VAR_3[VAR_0 - VAR_4 * 4 - 2],
                          VAR_3[VAR_0 - VAR_4 * 4 - 3], VAR_3[VAR_0 - VAR_4 * 4 - 4]);
    }

}

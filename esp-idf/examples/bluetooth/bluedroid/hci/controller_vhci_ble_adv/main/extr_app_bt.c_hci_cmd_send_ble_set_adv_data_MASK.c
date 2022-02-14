
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    char *VAR_1 = "ESP-BLE-HELLO";
    uint8_t VAR_2 = (uint8_t)FUNC_2(VAR_1);
    uint8_t VAR_3[31] = {0x02, 0x01, 0x06, 0x0, 0x09};
    uint8_t VAR_4;

    VAR_3[3] = VAR_2 + 1;
    for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        VAR_3[5 + VAR_5] = (uint8_t)VAR_1[VAR_5];
    }
    VAR_4 = 5 + VAR_2;

    uint16_t VAR_6 = FUNC_1(VAR_0, VAR_4, (uint8_t *)VAR_3);
    FUNC_0(VAR_0, VAR_6);
}

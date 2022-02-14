
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8_t ;


 int FUNC_0 (char*,int) ;
 size_t* VAR_0 ;

u8_t FUNC_1(const u8_t *VAR_1, u8_t VAR_2)
{
    u8_t VAR_3 = 0xff;

    while (VAR_2--) {
        VAR_3 = VAR_0[VAR_3 ^ *VAR_1++];
    }

    FUNC_0("fcs 0x%02x", 0xff - VAR_3);

    return 0xff - VAR_3;
}

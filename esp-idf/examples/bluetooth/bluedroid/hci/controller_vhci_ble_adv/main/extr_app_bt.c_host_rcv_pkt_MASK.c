
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_0, uint16_t VAR_1)
{
    FUNC_0("host rcv pkt: ");
    for (uint16_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        FUNC_0("%02x", VAR_0[VAR_2]);
    }
    FUNC_0("\n");
    return 0;
}

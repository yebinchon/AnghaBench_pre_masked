
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static bool FUNC_1(uint8_t VAR_0, bool VAR_1) {
    uint8_t VAR_2;
    for(VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        FUNC_0(!(VAR_0 & 0x80), (VAR_0 & 0x80));
        VAR_0 <<= 1;
    }
    FUNC_0(!VAR_1, VAR_1);
    return FUNC_0(1, 1);
}

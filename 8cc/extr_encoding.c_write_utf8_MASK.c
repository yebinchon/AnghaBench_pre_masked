
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Buffer ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int) ;

void FUNC_2(Buffer *VAR_0, uint32_t VAR_1) {
    if (VAR_1 < 0x80) {
        FUNC_0(VAR_0, VAR_1);
        return;
    }
    if (VAR_1 < 0x800) {
        FUNC_0(VAR_0, 0xC0 | (VAR_1 >> 6));
        FUNC_0(VAR_0, 0x80 | (VAR_1 & 0x3F));
        return;
    }
    if (VAR_1 < 0x10000) {
        FUNC_0(VAR_0, 0xE0 | (VAR_1 >> 12));
        FUNC_0(VAR_0, 0x80 | ((VAR_1 >> 6) & 0x3F));
        FUNC_0(VAR_0, 0x80 | (VAR_1 & 0x3F));
        return;
    }
    if (VAR_1 < 0x200000) {
        FUNC_0(VAR_0, 0xF0 | (VAR_1 >> 18));
        FUNC_0(VAR_0, 0x80 | ((VAR_1 >> 12) & 0x3F));
        FUNC_0(VAR_0, 0x80 | ((VAR_1 >> 6) & 0x3F));
        FUNC_0(VAR_0, 0x80 | (VAR_1 & 0x3F));
        return;
    }
    FUNC_1("invalid UCS character: \\U%08x", VAR_1);
}

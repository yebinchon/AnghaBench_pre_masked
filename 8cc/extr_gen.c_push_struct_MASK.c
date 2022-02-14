
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(int VAR_2) {
    VAR_0;
    int VAR_3 = FUNC_0(VAR_2, 8);
    FUNC_1("sub $%d, #rsp", VAR_3);
    FUNC_1("mov #rcx, -8(#rsp)");
    FUNC_1("mov #r11, -16(#rsp)");
    FUNC_1("mov #rax, #rcx");
    int VAR_4 = 0;
    for (; VAR_4 < VAR_2; VAR_4 += 8) {
        FUNC_1("movq %d(#rcx), #r11", VAR_4);
        FUNC_1("mov #r11, %d(#rsp)", VAR_4);
    }
    for (; VAR_4 < VAR_2; VAR_4 += 4) {
        FUNC_1("movl %d(#rcx), #r11", VAR_4);
        FUNC_1("movl #r11d, %d(#rsp)", VAR_4);
    }
    for (; VAR_4 < VAR_2; VAR_4++) {
        FUNC_1("movb %d(#rcx), #r11", VAR_4);
        FUNC_1("movb #r11b, %d(#rsp)", VAR_4);
    }
    FUNC_1("mov -8(#rsp), #rcx");
    FUNC_1("mov -16(#rsp), #r11");
    VAR_1 += VAR_3;
    return VAR_3;
}

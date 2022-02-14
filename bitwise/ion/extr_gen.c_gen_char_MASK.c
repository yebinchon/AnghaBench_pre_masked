
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;
 int FUNC_0 (char*,unsigned char) ;
 scalar_t__ FUNC_1 (char) ;

void FUNC_2(char VAR_1) {
    if (VAR_0[(unsigned char)VAR_1]) {
        FUNC_0("'\\%c'", VAR_0[(unsigned char)VAR_1]);
    } else if (FUNC_1(VAR_1)) {
        FUNC_0("'%c'", VAR_1);
    } else {
        FUNC_0("'\\x%X'", (unsigned char)VAR_1);
    }
}

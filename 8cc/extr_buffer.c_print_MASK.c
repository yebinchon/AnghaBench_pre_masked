
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Buffer ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char) ;

__attribute__((used)) static void FUNC_3(Buffer *VAR_0, char VAR_1) {
    char *VAR_2 = FUNC_2(VAR_1);
    if (VAR_2) {
        FUNC_0(VAR_0, "%s", VAR_2);
    } else if (FUNC_1(VAR_1)) {
        FUNC_0(VAR_0, "%c", VAR_1);
    } else {
        FUNC_0(VAR_0, "\\x%02x", VAR_1);
    }
}

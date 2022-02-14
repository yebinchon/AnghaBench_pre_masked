
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Type ;


 int FUNC_0 (char*,char const*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *,char*) ;

void FUNC_3(const char *VAR_0, Type *VAR_1) {
    if (FUNC_1(VAR_1) == 0) {
        FUNC_0("&(TypeInfo){%s, .size = 0, .align = 0", VAR_0);
    } else {
        const char *VAR_2 = FUNC_2(VAR_1, "");
        FUNC_0("&(TypeInfo){%s, .size = sizeof(%s), .align = alignof(%s)", VAR_0, VAR_2, VAR_2);
    }
}

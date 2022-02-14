
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Type ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int *,char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(Type *VAR_1, int VAR_2) {
    VAR_0;
    FUNC_0("mov (#rsp), #rcx");
    char *VAR_3 = FUNC_1(VAR_1, 'c');
    if (VAR_2)
        FUNC_0("mov #%s, %d(#rax)", VAR_3, VAR_2);
    else
        FUNC_0("mov #%s, (#rax)", VAR_3);
    FUNC_2("rax");
}

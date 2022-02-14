
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char const** FUNC_1 (char**) ;
 char const* VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;
 char** VAR_1 ;
 char const* VAR_2 ;
 char const* FUNC_4 (char*) ;

void FUNC_5(void) {
    FUNC_2();
    FUNC_0(FUNC_3(VAR_0));
    FUNC_0(FUNC_3(VAR_2));
    for (const char **VAR_3 = VAR_1; VAR_3 != FUNC_1(VAR_1); VAR_3++) {
        FUNC_0(FUNC_3(*VAR_3));
    }
    FUNC_0(!FUNC_3(FUNC_4("foo")));
}

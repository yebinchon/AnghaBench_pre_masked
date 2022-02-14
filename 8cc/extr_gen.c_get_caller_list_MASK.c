
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Buffer ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char) ;
 int VAR_0 ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static char *FUNC_6() {
    Buffer *VAR_1 = FUNC_3();
    for (int VAR_2 = 0; VAR_2 < FUNC_5(VAR_0); VAR_2++) {
        if (VAR_2 > 0)
            FUNC_1(VAR_1, " -> ");
        FUNC_1(VAR_1, "%s", FUNC_4(VAR_0, VAR_2));
    }
    FUNC_2(VAR_1, '\0');
    return FUNC_0(VAR_1);
}

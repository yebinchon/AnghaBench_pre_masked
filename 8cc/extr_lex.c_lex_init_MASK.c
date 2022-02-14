
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 () ;
 int * VAR_2 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(char *VAR_3) {
    FUNC_7(VAR_0, FUNC_3());
    if (!FUNC_4(VAR_3, "-")) {
        FUNC_5(FUNC_2(VAR_2, "-"));
        return;
    }
    FILE *VAR_4 = FUNC_1(VAR_3, "r");
    if (!VAR_4)
        FUNC_0("Cannot open %s: %s", VAR_3, FUNC_6(VAR_1));
    FUNC_5(FUNC_2(VAR_4, VAR_3));
}

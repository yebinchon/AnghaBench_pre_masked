
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,void*) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(char *VAR_1, char *VAR_2, bool VAR_3) {
    char *VAR_4 = FUNC_2(FUNC_1("%s/%s", VAR_1, VAR_2));
    if (FUNC_5(VAR_0, VAR_4))
        return 1;
    if (FUNC_3(VAR_4))
        return 1;
    FILE *VAR_5 = FUNC_0(VAR_4, "r");
    if (!VAR_5)
        return 0;
    if (VAR_3)
        FUNC_6(VAR_0, VAR_4, (void *)1);
    FUNC_7(FUNC_4(VAR_5, VAR_4));
    return 1;
}

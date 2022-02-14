
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 char** FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char**) ;
 char** FUNC_3 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(char *VAR_2, int VAR_3) {
    if (!VAR_0)
        return;
    char **VAR_4 = FUNC_1(VAR_1, VAR_2);
    if (!VAR_4) {
        VAR_4 = FUNC_3(VAR_2);
        if (!VAR_4)
            return;
        FUNC_2(VAR_1, VAR_2, VAR_4);
    }
    int VAR_5 = 0;
    for (char **VAR_6 = VAR_4; *VAR_6; VAR_6++)
        VAR_5++;
    FUNC_0("# %s", VAR_4[VAR_3 - 1]);
}

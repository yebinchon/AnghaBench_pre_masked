
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, char VAR_1) {
    char *VAR_2 = FUNC_1("%s", VAR_0);
    char *VAR_3 = VAR_2 + FUNC_2(VAR_2) - 1;
    if (*VAR_3 != 'c')
        FUNC_0("filename suffix is not .c");
    *VAR_3 = VAR_1;
    return VAR_2;
}

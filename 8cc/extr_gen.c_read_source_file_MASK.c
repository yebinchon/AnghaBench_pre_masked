
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (int ,struct stat*) ;
 char* FUNC_5 (int) ;
 char** FUNC_6 (char*) ;

__attribute__((used)) static char **FUNC_7(char *VAR_0) {
    FILE *VAR_1 = FUNC_2(VAR_0, "r");
    if (!VAR_1)
        return ((void*)0);
    struct stat VAR_2;
    FUNC_4(FUNC_1(VAR_1), &VAR_2);
    char *VAR_3 = FUNC_5(VAR_2.st_size + 1);
    if (FUNC_3(VAR_3, 1, VAR_2.st_size, VAR_1) != VAR_2.st_size) {
        FUNC_0(VAR_1);
        return ((void*)0);
    }
    FUNC_0(VAR_1);
    VAR_3[VAR_2.st_size] = '\0';
    return FUNC_6(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 char** VAR_0 ;
 int VAR_1 ;

int FUNC_3(const char *VAR_2) {
    FILE *VAR_3;
    int VAR_4;

    VAR_3 = FUNC_1(VAR_2,"w");
    if (VAR_3 == ((void*)0)) return -1;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
        FUNC_2(VAR_3,"%s\n",VAR_0[VAR_4]);
    FUNC_0(VAR_3);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** FUNC_1 (int) ;
 int FUNC_2 (char**,char**,int) ;
 int FUNC_3 (char**,int ,int) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_3) {
    char *VAR_4;

    if (VAR_2 == 0) return 0;


    if (VAR_0 == ((void*)0)) {
        VAR_0 = FUNC_1(sizeof(char*)*VAR_2);
        if (VAR_0 == ((void*)0)) return 0;
        FUNC_3(VAR_0,0,(sizeof(char*)*VAR_2));
    }


    if (VAR_1 && !FUNC_4(VAR_0[VAR_1-1], VAR_3)) return 0;



    VAR_4 = FUNC_5(VAR_3);
    if (!VAR_4) return 0;
    if (VAR_1 == VAR_2) {
        FUNC_0(VAR_0[0]);
        FUNC_2(VAR_0,VAR_0+1,sizeof(char*)*(VAR_2-1));
        VAR_1--;
    }
    VAR_0[VAR_1] = VAR_4;
    VAR_1++;
    return 1;
}

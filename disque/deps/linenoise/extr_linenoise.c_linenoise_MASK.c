
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,int,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_5 (char*) ;
 size_t FUNC_6 (char*) ;

char *FUNC_7(const char *VAR_3) {
    char VAR_4[VAR_0];
    int VAR_5;

    if (FUNC_2()) {
        size_t VAR_6;

        FUNC_4("%s",VAR_3);
        FUNC_0(VAR_2);
        if (FUNC_1(VAR_4,VAR_0,VAR_1) == ((void*)0)) return ((void*)0);
        VAR_6 = FUNC_6(VAR_4);
        while(VAR_6 && (VAR_4[VAR_6-1] == '\n' || VAR_4[VAR_6-1] == '\r')) {
            VAR_6--;
            VAR_4[VAR_6] = '\0';
        }
        return FUNC_5(VAR_4);
    } else {
        VAR_5 = FUNC_3(VAR_4,VAR_0,VAR_3);
        if (VAR_5 == -1) return ((void*)0);
        return FUNC_5(VAR_4);
    }
}

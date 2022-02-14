
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int *,int) ;

size_t FUNC_6(void) {
    char VAR_0[1024];
    size_t VAR_1 = 0;
    FILE *VAR_2 = FUNC_2("/proc/self/smaps","r");

    if (!VAR_2) return 0;
    while(FUNC_1(VAR_0,sizeof(VAR_0),VAR_2) != ((void*)0)) {
        if (FUNC_4(VAR_0,"Private_Dirty:",14) == 0) {
            char *VAR_3 = FUNC_3(VAR_0,'k');
            if (VAR_3) {
                *VAR_3 = '\0';
                VAR_1 += FUNC_5(VAR_0+14,((void*)0),10) * 1024;
            }
        }
    }
    FUNC_0(VAR_2);
    return VAR_1;
}

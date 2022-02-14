
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;

int FUNC_4(void) {
    FILE *VAR_0 = FUNC_3("/proc/sys/vm/overcommit_memory","r");
    char VAR_1[64];

    if (!VAR_0) return -1;
    if (FUNC_2(VAR_1,64,VAR_0) == ((void*)0)) {
        FUNC_1(VAR_0);
        return -1;
    }
    FUNC_1(VAR_0);

    return FUNC_0(VAR_1);
}

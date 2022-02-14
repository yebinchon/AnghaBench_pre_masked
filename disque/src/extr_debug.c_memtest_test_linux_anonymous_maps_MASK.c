
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,void*,size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (void*,size_t) ;
 int FUNC_5 (void*,size_t) ;
 int FUNC_6 (char*,unsigned long,unsigned long) ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 size_t FUNC_9 (char*,int *,int) ;

int FUNC_10(void) {
    FILE *VAR_1 = FUNC_3("/proc/self/maps","r");
    char VAR_2[1024];
    size_t VAR_3, VAR_4, VAR_5;
    size_t VAR_6[VAR_0];
    size_t VAR_7[VAR_0];
    int VAR_8 = 0, VAR_9;
    uint64_t VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

    while(FUNC_2(VAR_2,sizeof(VAR_2),VAR_1) != ((void*)0)) {
        char *VAR_13, *VAR_14, *VAR_15 = VAR_2;

        VAR_13 = VAR_15;
        VAR_15 = FUNC_7(VAR_15,'-');
        if (!VAR_15) continue;
        *VAR_15++ = '\0';
        VAR_14 = VAR_15;
        VAR_15 = FUNC_7(VAR_15,' ');
        if (!VAR_15) continue;
        *VAR_15++ = '\0';
        if (FUNC_8(VAR_15,"stack") ||
            FUNC_8(VAR_15,"vdso") ||
            FUNC_8(VAR_15,"vsyscall")) continue;
        if (!FUNC_8(VAR_15,"00:00")) continue;
        if (!FUNC_8(VAR_15,"rw")) continue;

        VAR_3 = FUNC_9(VAR_13,((void*)0),16);
        VAR_4 = FUNC_9(VAR_14,((void*)0),16);
        VAR_5 = VAR_4-VAR_3;

        VAR_6[VAR_8] = VAR_3;
        VAR_7[VAR_8] = VAR_5;
        FUNC_6("Testing %lx %lu\n", (unsigned long) VAR_6[VAR_8],
                                    (unsigned long) VAR_7[VAR_8]);
        VAR_8++;
    }



    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        VAR_10 = FUNC_0(VAR_10,(void*)VAR_6[VAR_9],VAR_7[VAR_9]);
    }



    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        FUNC_4((void*)VAR_6[VAR_9],VAR_7[VAR_9]);
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        FUNC_5((void*)VAR_6[VAR_9],VAR_7[VAR_9]);
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        FUNC_5((void*)VAR_6[VAR_9],VAR_7[VAR_9]);
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        FUNC_4((void*)VAR_6[VAR_9],VAR_7[VAR_9]);


    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        VAR_11 = FUNC_0(VAR_11,(void*)VAR_6[VAR_9],VAR_7[VAR_9]);


    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        FUNC_5((void*)VAR_6[VAR_9],VAR_7[VAR_9]);
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        FUNC_5((void*)VAR_6[VAR_9],VAR_7[VAR_9]);


    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        VAR_12 = FUNC_0(VAR_12,(void*)VAR_6[VAR_9],VAR_7[VAR_9]);




    FUNC_1(VAR_1);


    return VAR_10 != VAR_11 || VAR_11 != VAR_12;
}

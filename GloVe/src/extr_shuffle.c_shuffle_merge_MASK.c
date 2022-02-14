
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int CREC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 char* VAR_2 ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,int,int,int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,long) ;
 int FUNC_9 (char*,char*,char*,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int *,long,int *) ;

int FUNC_11(int VAR_6) {
    long VAR_7, VAR_8, VAR_9, VAR_10 = 0;
    int VAR_11 = 0;
    CREC *VAR_12;
    char VAR_13[VAR_0];
    FILE **VAR_14, *VAR_15 = VAR_4;

    VAR_12 = FUNC_6(sizeof(CREC) * VAR_1);
    VAR_14 = FUNC_6(sizeof(FILE) * VAR_6);
    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
        FUNC_9(VAR_13,"%s_%04d.bin",VAR_2, VAR_11);
        VAR_14[VAR_11] = FUNC_2(VAR_13, "rb");
        if (VAR_14[VAR_11] == ((void*)0)) {
            FUNC_3(VAR_3, "Unable to open file %s.\n",VAR_13);
            return 1;
        }
    }
    if (VAR_5 > 0) FUNC_3(VAR_3, "Merging temp files: processed %ld lines.", VAR_10);

    while (1) {
        VAR_7 = 0;

        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
            if (FUNC_1(VAR_14[VAR_8])) continue;
            for (VAR_9 = 0; VAR_9 < VAR_1 / VAR_6; VAR_9++){
                FUNC_4(&VAR_12[VAR_7], sizeof(CREC), 1, VAR_14[VAR_8]);
                if (FUNC_1(VAR_14[VAR_8])) break;
                VAR_7++;
            }
        }
        if (VAR_7 == 0) break;
        VAR_10 += VAR_7;
        FUNC_8(VAR_12, VAR_7-1);
        FUNC_10(VAR_12,VAR_7,VAR_15);
        if (VAR_5 > 0) FUNC_3(VAR_3, "\033[31G%ld lines.", VAR_10);
    }
    FUNC_3(VAR_3, "\033[0GMerging temp files: processed %ld lines.", VAR_10);
    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
        FUNC_0(VAR_14[VAR_11]);
        FUNC_9(VAR_13,"%s_%04d.bin",VAR_2, VAR_11);
        FUNC_7(VAR_13);
    }
    FUNC_3(VAR_3, "\n\n");
    FUNC_5(VAR_12);
    return 0;
}

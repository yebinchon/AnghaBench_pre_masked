
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
 int * FUNC_6 (int) ;
 int FUNC_7 (int *,long) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*,char*,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int *,long,int *) ;

int FUNC_11() {
    long VAR_6 = 0, VAR_7 = 0;
    int VAR_8 = 0;
    char VAR_9[VAR_0];
    CREC *VAR_10;
    FILE *VAR_11 = VAR_4, *VAR_12;
    VAR_10 = FUNC_6(sizeof(CREC) * VAR_1);

    FUNC_3(VAR_3,"SHUFFLING COOCCURRENCES\n");
    if (VAR_5 > 0) FUNC_3(VAR_3,"array size: %lld\n", VAR_1);
    FUNC_9(VAR_9,"%s_%04d.bin",VAR_2, VAR_8);
    VAR_12 = FUNC_2(VAR_9,"w");
    if (VAR_12 == ((void*)0)) {
        FUNC_3(VAR_3, "Unable to open file %s.\n",VAR_9);
        return 1;
    }
    if (VAR_5 > 1) FUNC_3(VAR_3, "Shuffling by chunks: processed 0 lines.");

    while (1) {
        if (VAR_6 >= VAR_1) {
            FUNC_7(VAR_10, VAR_6-2);
            VAR_7 += VAR_6;
            if (VAR_5 > 1) FUNC_3(VAR_3, "\033[22Gprocessed %ld lines.", VAR_7);
            FUNC_10(VAR_10,VAR_6,VAR_12);
            FUNC_0(VAR_12);
            VAR_8++;
            FUNC_9(VAR_9,"%s_%04d.bin",VAR_2, VAR_8);
            VAR_12 = FUNC_2(VAR_9,"w");
            if (VAR_12 == ((void*)0)) {
                FUNC_3(VAR_3, "Unable to open file %s.\n",VAR_9);
                return 1;
            }
            VAR_6 = 0;
        }
        FUNC_4(&VAR_10[VAR_6], sizeof(CREC), 1, VAR_11);
        if (FUNC_1(VAR_11)) break;
        VAR_6++;
    }
    FUNC_7(VAR_10, VAR_6-2);
    FUNC_10(VAR_10,VAR_6,VAR_12);
    VAR_7 += VAR_6;
    if (VAR_5 > 1) FUNC_3(VAR_3, "\033[22Gprocessed %ld lines.\n", VAR_7);
    if (VAR_5 > 1) FUNC_3(VAR_3, "Wrote %d temporary file(s).\n", VAR_8 + 1);
    FUNC_0(VAR_12);
    FUNC_5(VAR_10);
    return FUNC_8(VAR_8 + 1);
}

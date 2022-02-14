
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int id; } ;
typedef int FILE ;
typedef TYPE_1__ CRECID ;
typedef int CREC ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 char* VAR_0 ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_1__*,int,int,int *) ;
 int FUNC_5 (TYPE_1__*,int,int,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__,int) ;
 void* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_1__,TYPE_1__*,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,char*,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

int FUNC_11(int VAR_4) {
    int VAR_5, VAR_6;
    long long VAR_7 = 0;
    CRECID *VAR_8, VAR_9, VAR_10;
    char VAR_11[200];
    FILE **VAR_12, *VAR_13;
    VAR_12 = FUNC_7(sizeof(FILE) * VAR_4);
    VAR_8 = FUNC_7(sizeof(CRECID) * VAR_4);
    VAR_13 = VAR_2;
    if (VAR_3 > 1) FUNC_3(VAR_1, "Merging cooccurrence files: processed 0 lines.");


    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        FUNC_10(VAR_11,"%s_%04d.bin",VAR_0,VAR_5);
        VAR_12[VAR_5] = FUNC_2(VAR_11,"rb");
        if (VAR_12[VAR_5] == ((void*)0)) {FUNC_3(VAR_1, "Unable to open file %s.\n",VAR_11); return 1;}
        FUNC_4(&VAR_9, sizeof(CREC), 1, VAR_12[VAR_5]);
        VAR_9.id = VAR_5;
        FUNC_6(VAR_8,VAR_9,VAR_5+1);
    }


    VAR_6 = VAR_4;
    VAR_10 = VAR_8[0];
    VAR_5 = VAR_8[0].id;
    FUNC_0(VAR_8, VAR_6);
    FUNC_4(&VAR_9, sizeof(CREC), 1, VAR_12[VAR_5]);
    if (FUNC_1(VAR_12[VAR_5])) VAR_6--;
    else {
        VAR_9.id = VAR_5;
        FUNC_6(VAR_8, VAR_9, VAR_6);
    }


    while (VAR_6 > 0) {
        VAR_7 += FUNC_8(VAR_8[0], &VAR_10, VAR_13);
        if ((VAR_7%100000) == 0) if (VAR_3 > 1) FUNC_3(VAR_1,"\033[39G%lld lines.",VAR_7);
        VAR_5 = VAR_8[0].id;
        FUNC_0(VAR_8, VAR_6);
        FUNC_4(&VAR_9, sizeof(CREC), 1, VAR_12[VAR_5]);
        if (FUNC_1(VAR_12[VAR_5])) VAR_6--;
        else {
            VAR_9.id = VAR_5;
            FUNC_6(VAR_8, VAR_9, VAR_6);
        }
    }
    FUNC_5(&VAR_10, sizeof(CREC), 1, VAR_13);
    FUNC_3(VAR_1,"\033[0GMerging cooccurrence files: processed %lld lines.\n",++VAR_7);
    for (VAR_5=0;VAR_5<VAR_4;VAR_5++) {
        FUNC_10(VAR_11,"%s_%04d.bin",VAR_0,VAR_5);
        FUNC_9(VAR_11);
    }
    FUNC_3(VAR_1,"\n");
    return 0;
}

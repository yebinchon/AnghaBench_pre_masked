
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_cf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 char* FUNC_1 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int VAR_5 ;
 int FUNC_5 (char*,char*) ;

int FUNC_6(int *VAR_6, char *VAR_7[]) {
    int VAR_8, VAR_9, VAR_10 = VAR_3;
    char *VAR_11 = ((void*)0);

    if (VAR_1)
        FUNC_2(VAR_5, "ide: init\n");

    for (VAR_8 = VAR_9 = 1; VAR_8 < *VAR_6; VAR_8++) {
        int VAR_12 = VAR_8 + 1 < *VAR_6;

        if (!FUNC_5(VAR_7[VAR_8], "-ide" )) {
            if (!VAR_12) {
                FUNC_0("Missing argument for '%s'", VAR_7[VAR_8]);
                return VAR_0;
            }
            VAR_11 = FUNC_1(VAR_7[++VAR_8]);
        } else if (!FUNC_5(VAR_7[VAR_8], "-ide_debug")) {
            VAR_1 = 1;
        } else if (!FUNC_5(VAR_7[VAR_8], "-ide_cf")) {
            VAR_4.is_cf = 1;
        } else {
             if (!FUNC_5(VAR_7[VAR_8], "-help")) {
                 FUNC_0("\t-ide <file>      Enable IDE emulation");
                 FUNC_0("\t-ide_debug       Enable IDE Debug Output");
                 FUNC_0("\t-ide_cf          Enable CF emulation");
             }
             VAR_7[VAR_9++] = VAR_7[VAR_8];
        }
    }
    *VAR_6 = VAR_9;

    if (VAR_11) {
        VAR_2 = VAR_10 = FUNC_4(&VAR_4, VAR_11);
        FUNC_3(VAR_11);
    }

    return VAR_10;
}

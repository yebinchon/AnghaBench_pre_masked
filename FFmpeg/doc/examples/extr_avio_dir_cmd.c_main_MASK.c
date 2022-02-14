
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*) ;

int FUNC_10(int VAR_3, char *VAR_4[])
{
    const char *VAR_5 = ((void*)0);
    int VAR_6;

    FUNC_2(VAR_0);

    if (VAR_3 < 2) {
        FUNC_9(VAR_4[0]);
        return 1;
    }

    FUNC_4();

    VAR_5 = VAR_4[1];
    if (FUNC_8(VAR_5, "list") == 0) {
        if (VAR_3 < 3) {
            FUNC_1(((void*)0), VAR_1, "Missing argument for list operation.\n");
            VAR_6 = FUNC_0(VAR_2);
        } else {
            VAR_6 = FUNC_6(VAR_4[2]);
        }
    } else if (FUNC_8(VAR_5, "del") == 0) {
        if (VAR_3 < 3) {
            FUNC_1(((void*)0), VAR_1, "Missing argument for del operation.\n");
            VAR_6 = FUNC_0(VAR_2);
        } else {
            VAR_6 = FUNC_5(VAR_4[2]);
        }
    } else if (FUNC_8(VAR_5, "move") == 0) {
        if (VAR_3 < 4) {
            FUNC_1(((void*)0), VAR_1, "Missing argument for move operation.\n");
            VAR_6 = FUNC_0(VAR_2);
        } else {
            VAR_6 = FUNC_7(VAR_4[2], VAR_4[3]);
        }
    } else {
        FUNC_1(((void*)0), VAR_1, "Invalid operation %s\n", VAR_5);
        VAR_6 = FUNC_0(VAR_2);
    }

    FUNC_3();

    return VAR_6 < 0 ? 1 : 0;
}

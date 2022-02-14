
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int Vector ;
typedef int Node ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,char*,scalar_t__,char*,int ,char*) ;
 scalar_t__ FUNC_9 () ;
 int VAR_6 ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 () ;
 scalar_t__ VAR_7 ;
 int FUNC_13 () ;
 int FUNC_14 (int,char**) ;
 int FUNC_15 (char*) ;
 int FUNC_16 () ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (int ) ;
 int * FUNC_19 () ;
 scalar_t__ FUNC_20 (int ,char) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int *) ;
 int VAR_8 ;
 int * FUNC_23 (int *,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (scalar_t__,int*,int ) ;

int FUNC_26(int VAR_9, char **VAR_10) {
    FUNC_22(VAR_8, ((void*)0));
    if (FUNC_0(VAR_3))
        FUNC_15("atexit");
    FUNC_14(VAR_9, VAR_10);
    FUNC_10(VAR_6);
    FUNC_5();
    FUNC_13();
    FUNC_21(FUNC_12());
    if (FUNC_3(VAR_1) > 0)
        FUNC_18(FUNC_2(VAR_1));

    if (VAR_2)
        FUNC_16();

    Vector *VAR_11 = FUNC_19();
    for (int VAR_12 = 0; VAR_12 < FUNC_24(VAR_11); VAR_12++) {
        Node *VAR_13 = FUNC_23(VAR_11, VAR_12);
        if (VAR_5)
            FUNC_17("%s", FUNC_11(VAR_13));
        else
            FUNC_6(VAR_13);
    }

    FUNC_4();

    if (!VAR_5 && !VAR_4) {
        if (!VAR_7)
            VAR_7 = FUNC_20(FUNC_1(VAR_6), 'o');
        pid_t VAR_14 = FUNC_9();
        if (VAR_14 < 0) FUNC_15("fork");
        if (VAR_14 == 0) {
            FUNC_8("as", "as", "-o", VAR_7, "-c", VAR_0, (char *)((void*)0));
            FUNC_15("execl failed");
        }
        int VAR_15;
        FUNC_25(VAR_14, &VAR_15, 0);
        if (VAR_15 < 0)
            FUNC_7("as failed");
    }
    return 0;
}

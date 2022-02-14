
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zmq_msg_t ;
typedef int FILE ;
typedef int AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char**) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,char*,...) ;
 char* FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,char*) ;
 int FUNC_9 (int,char**,char*) ;
 int FUNC_10 (char*,int ,int) ;
 char* VAR_5 ;
 int FUNC_11 (char*,char*) ;
 int * VAR_6 ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*,char const*) ;
 int FUNC_18 (void*) ;
 void* FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,void*,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (void*,char*,int ,int ) ;
 void* FUNC_26 (void*,int ) ;
 int FUNC_27 (int ) ;

int FUNC_28(int VAR_7, char **VAR_8)
{
    AVBPrint VAR_9;
    char *VAR_10, *VAR_11;
    int VAR_12;
    int VAR_13, VAR_14 = 0;
    void *VAR_15, *VAR_16;
    const char *VAR_17 = "tcp://localhost:5555";
    const char *VAR_18 = ((void*)0);
    FILE *VAR_19 = ((void*)0);
    zmq_msg_t VAR_20;

    while ((VAR_12 = FUNC_9(VAR_7, VAR_8, "b:hi:")) != -1) {
        switch (VAR_12) {
        case 'b':
            VAR_17 = VAR_5;
            break;
        case 'h':
            FUNC_15();
            return 0;
        case 'i':
            VAR_18 = VAR_5;
            break;
        case '?':
            return 1;
        }
    }

    if (!VAR_18 || !FUNC_12(VAR_18, "-")) {
        VAR_18 = "stdin";
        VAR_19 = VAR_6;
    } else {
        VAR_19 = FUNC_8(VAR_18, "r");
    }
    if (!VAR_19) {
        FUNC_5(((void*)0), VAR_1,
               "Impossible to open input file '%s': %s\n", VAR_18, FUNC_13(VAR_4));
        return 1;
    }

    VAR_15 = FUNC_19();
    if (!VAR_15) {
        FUNC_5(((void*)0), VAR_1,
               "Could not create ZMQ context: %s\n", FUNC_27(VAR_4));
        return 1;
    }

    VAR_16 = FUNC_26(VAR_15, VAR_3);
    if (!VAR_16) {
        FUNC_5(((void*)0), VAR_1,
               "Could not create ZMQ socket: %s\n", FUNC_27(VAR_4));
        VAR_14 = 1;
        goto end;
    }

    if (FUNC_17(VAR_16, VAR_17) == -1) {
        FUNC_5(((void*)0), VAR_1, "Could not bind ZMQ responder to address '%s': %s\n",
               VAR_17, FUNC_27(VAR_4));
        VAR_14 = 1;
        goto end;
    }


    FUNC_2(&VAR_9, 1, VAR_0);
    while ((VAR_12 = FUNC_7(VAR_19)) != VAR_2)
        FUNC_0(&VAR_9, VAR_12, 1);
    FUNC_0(&VAR_9, 0, 1);

    if (!FUNC_3(&VAR_9)) {
        FUNC_5(((void*)0), VAR_1, "Could not allocate a buffer for the source string\n");
        FUNC_1(&VAR_9, ((void*)0));
        VAR_14 = 1;
        goto end;
    }
    FUNC_1(&VAR_9, &VAR_10);

    if (FUNC_25(VAR_16, VAR_10, FUNC_14(VAR_10), 0) == -1) {
        FUNC_5(((void*)0), VAR_1, "Could not send message: %s\n", FUNC_27(VAR_4));
        VAR_14 = 1;
        goto end;
    }

    if (FUNC_22(&VAR_20) == -1) {
        FUNC_5(((void*)0), VAR_1,
               "Could not initialize receiving message: %s\n", FUNC_27(VAR_4));
        VAR_14 = 1;
        goto end;
    }

    if (FUNC_23(&VAR_20, VAR_16, 0) == -1) {
        FUNC_5(((void*)0), VAR_1,
               "Could not receive message: %s\n", FUNC_27(VAR_4));
        FUNC_20(&VAR_20);
        VAR_14 = 1;
        goto end;
    }

    VAR_13 = FUNC_24(&VAR_20) + 1;
    VAR_11 = FUNC_6(VAR_13);
    if (!VAR_11) {
        FUNC_5(((void*)0), VAR_1,
               "Could not allocate receiving message buffer\n");
        FUNC_20(&VAR_20);
        VAR_14 = 1;
        goto end;
    }
    FUNC_10(VAR_11, FUNC_21(&VAR_20), VAR_13 - 1);
    VAR_11[VAR_13-1] = 0;
    FUNC_11("%s\n", VAR_11);
    FUNC_20(&VAR_20);
    FUNC_4(VAR_11);

end:
    FUNC_16(VAR_16);
    FUNC_18(VAR_15);
    return VAR_14;
}

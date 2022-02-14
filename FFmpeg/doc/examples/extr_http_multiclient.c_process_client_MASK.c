
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int buf ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (int *,char*,int ,char**) ;
 int FUNC_4 (int *,char*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,char const*,int ,int *,int *) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int ,char*) ;
 int VAR_6 ;
 int FUNC_12 (char*,char const*) ;
 scalar_t__ FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(AVIOContext *VAR_7, const char *VAR_8)
{
    AVIOContext *VAR_9 = ((void*)0);
    uint8_t VAR_10[1024];
    int VAR_11, VAR_12, VAR_13;
    uint8_t *VAR_14 = ((void*)0);
    while ((VAR_11 = FUNC_7(VAR_7)) > 0) {
        FUNC_3(VAR_7, "resource", VAR_5, &VAR_14);


        if (VAR_14 && FUNC_13(VAR_14))
            break;
        FUNC_1(&VAR_14);
    }
    if (VAR_11 < 0)
        goto end;
    FUNC_2(VAR_7, VAR_4, "resource=%p\n", VAR_14);
    if (VAR_14 && VAR_14[0] == '/' && !FUNC_12((VAR_14 + 1), VAR_8)) {
        VAR_13 = 200;
    } else {
        VAR_13 = VAR_1;
    }
    if ((VAR_11 = FUNC_4(VAR_7, "reply_code", VAR_13, VAR_5)) < 0) {
        FUNC_2(VAR_7, VAR_3, "Failed to set reply_code: %s.\n", FUNC_0(VAR_11));
        goto end;
    }
    FUNC_2(VAR_7, VAR_4, "Set reply code to %d\n", VAR_13);

    while ((VAR_11 = FUNC_7(VAR_7)) > 0);

    if (VAR_11 < 0)
        goto end;

    FUNC_11(VAR_6, "Handshake performed.\n");
    if (VAR_13 != 200)
        goto end;
    FUNC_11(VAR_6, "Opening input file.\n");
    if ((VAR_11 = FUNC_8(&VAR_9, VAR_8, VAR_2, ((void*)0), ((void*)0))) < 0) {
        FUNC_2(VAR_9, VAR_3, "Failed to open input: %s: %s.\n", VAR_8,
               FUNC_0(VAR_11));
        goto end;
    }
    for(;;) {
        VAR_12 = FUNC_9(VAR_9, VAR_10, sizeof(VAR_10));
        if (VAR_12 < 0) {
            if (VAR_12 == VAR_0)
                break;
            FUNC_2(VAR_9, VAR_3, "Error reading from input: %s.\n",
                   FUNC_0(VAR_12));
            break;
        }
        FUNC_10(VAR_7, VAR_10, VAR_12);
        FUNC_6(VAR_7);
    }
end:
    FUNC_11(VAR_6, "Flushing client\n");
    FUNC_6(VAR_7);
    FUNC_11(VAR_6, "Closing client\n");
    FUNC_5(VAR_7);
    FUNC_11(VAR_6, "Closing input\n");
    FUNC_5(VAR_9);
    FUNC_1(&VAR_14);
}

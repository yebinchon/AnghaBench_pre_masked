
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,char*,char*,int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char const*,int ,int *,int **) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int *,char const*) ;
 int VAR_4 ;

int FUNC_14(int VAR_5, char **VAR_6)
{
    AVDictionary *VAR_7 = ((void*)0);
    AVIOContext *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    const char *VAR_10, *VAR_11;
    int VAR_12, VAR_13;
    FUNC_3(VAR_2);
    if (VAR_5 < 3) {
        FUNC_12("usage: %s input http://hostname[:port]\n"
               "API example program to serve http to multiple clients.\n"
               "\n", VAR_6[0]);
        return 1;
    }

    VAR_10 = VAR_6[1];
    VAR_11 = VAR_6[2];

    FUNC_4();

    if ((VAR_12 = FUNC_1(&VAR_7, "listen", "2", 0)) < 0) {
        FUNC_10(VAR_4, "Failed to set listen mode for server: %s\n", FUNC_2(VAR_12));
        return VAR_12;
    }
    if ((VAR_12 = FUNC_7(&VAR_9, VAR_11, VAR_1, ((void*)0), &VAR_7)) < 0) {
        FUNC_10(VAR_4, "Failed to open server: %s\n", FUNC_2(VAR_12));
        return VAR_12;
    }
    FUNC_10(VAR_4, "Entering main loop.\n");
    for(;;) {
        if ((VAR_12 = FUNC_5(VAR_9, &VAR_8)) < 0)
            goto end;
        FUNC_10(VAR_4, "Accepted client, forking process.\n");


        VAR_13 = FUNC_9();
        if (VAR_13 < 0) {
            FUNC_11("Fork failed");
            VAR_12 = FUNC_0(VAR_3);
            goto end;
        }
        if (VAR_13 == 0) {
            FUNC_10(VAR_4, "In child.\n");
            FUNC_13(VAR_8, VAR_10);
            FUNC_6(VAR_9);
            FUNC_8(0);
        }
        if (VAR_13 > 0)
            FUNC_6(VAR_8);
    }
end:
    FUNC_6(VAR_9);
    if (VAR_12 < 0 && VAR_12 != VAR_0) {
        FUNC_10(VAR_4, "Some errors occurred: %s\n", FUNC_2(VAR_12));
        return 1;
    }
    return 0;
}

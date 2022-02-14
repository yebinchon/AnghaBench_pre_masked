
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_line ;
typedef int line ;
typedef int filename ;
typedef int OptionsContext ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char const*,int *,char*) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,char**) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,int,int *) ;
 int * FUNC_7 (char*,int,char const*,int,char const*) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *,char*,char*) ;
 scalar_t__ FUNC_10 (int *,char*,char*) ;
 int FUNC_11 (int *,char*,char*) ;
 int FUNC_12 (int *,char*,char*) ;
 int VAR_3 ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char const*,char*,int ) ;

__attribute__((used)) static int FUNC_17(void *VAR_4, const char *VAR_5, const char *VAR_6)
{
    OptionsContext *VAR_7 = VAR_4;
    FILE *VAR_8=((void*)0);
    char VAR_9[1000], VAR_10[1000], VAR_11[1000];
    const char *VAR_12 = ((void*)0);

    VAR_11[0] = *VAR_5;
    VAR_11[1] = 0;
    FUNC_0(VAR_2, VAR_3, VAR_12, ((void*)0), VAR_11);

    if (!(VAR_8 = FUNC_7(VAR_9, sizeof(VAR_9), VAR_6, *VAR_5 == 'f', VAR_12))) {
        if(!FUNC_16(VAR_6, "libx264-lossless", FUNC_15("libx264-lossless"))){
            FUNC_1(((void*)0), VAR_1, "Please use -preset <speed> -qp 0\n");
        }else
            FUNC_1(((void*)0), VAR_1, "File for preset '%s' not found\n", VAR_6);
        FUNC_4(1);
    }

    while (FUNC_6(VAR_10, sizeof(VAR_10), VAR_8)) {
        char *VAR_13 = VAR_11, *VAR_14, *VAR_15;

        if (FUNC_14(VAR_10, "#\n\r") == 0)
            continue;
        FUNC_2(VAR_11, VAR_10, sizeof(VAR_11));
        if (!FUNC_3(VAR_13, "=", &VAR_14) ||
            !FUNC_3(VAR_14, "\r\n", &VAR_15)) {
            FUNC_1(((void*)0), VAR_1, "%s: Invalid syntax: '%s'\n", VAR_9, VAR_10);
            FUNC_4(1);
        }
        FUNC_1(((void*)0), VAR_0, "ffpreset[%s]: set '%s' = '%s'\n", VAR_9, VAR_13, VAR_14);

        if (!FUNC_13(VAR_13, "acodec")) FUNC_8 (VAR_7, VAR_13, VAR_14);
        else if (!FUNC_13(VAR_13, "vcodec")) FUNC_12 (VAR_7, VAR_13, VAR_14);
        else if (!FUNC_13(VAR_13, "scodec")) FUNC_11(VAR_7, VAR_13, VAR_14);
        else if (!FUNC_13(VAR_13, "dcodec")) FUNC_9 (VAR_7, VAR_13, VAR_14);
        else if (FUNC_10(VAR_7, VAR_13, VAR_14) < 0) {
            FUNC_1(((void*)0), VAR_1, "%s: Invalid option or argument: '%s', parsed as '%s' = '%s'\n",
                   VAR_9, VAR_10, VAR_13, VAR_14);
            FUNC_4(1);
        }
    }

    FUNC_5(VAR_8);

    return 0;
}

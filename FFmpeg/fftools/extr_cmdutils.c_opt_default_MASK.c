
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwsContext {int dummy; } ;
typedef struct SwsContext SwrContext ;
typedef int opt_stripped ;
typedef int AVOption ;
typedef int AVClass ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int) ;
 int VAR_8 ;
 int FUNC_2 (int *,char const*,char const*,int ) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct SwsContext*,char const*,char const*,int ) ;
 int FUNC_6 (char*,char const*,int ) ;
 int * FUNC_7 () ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_10 (int const**,char const*,int *,int ,int) ;
 int VAR_11 ;
 char* FUNC_11 (char const*,char) ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (char const*) ;
 struct SwsContext* FUNC_14 () ;
 int FUNC_15 (struct SwsContext**) ;
 int * FUNC_16 () ;
 int VAR_12 ;
 struct SwsContext* FUNC_17 () ;
 int VAR_13 ;
 int FUNC_18 (struct SwsContext*) ;
 int * FUNC_19 () ;

int FUNC_20(void *VAR_14, const char *VAR_15, const char *VAR_16)
{
    const AVOption *VAR_17;
    int VAR_18 = 0;
    char VAR_19[128];
    const char *VAR_20;
    const AVClass *VAR_21 = FUNC_7(), *VAR_22 = FUNC_8();
    if (!FUNC_12(VAR_15, "debug") || !FUNC_12(VAR_15, "fdebug"))
        FUNC_4(VAR_1);

    if (!(VAR_20 = FUNC_11(VAR_15, ':')))
        VAR_20 = VAR_15 + FUNC_13(VAR_15);
    FUNC_6(VAR_19, VAR_15, FUNC_1(sizeof(VAR_19), VAR_20 - VAR_15 + 1));

    if ((VAR_17 = FUNC_10(&VAR_21, VAR_19, ((void*)0), 0,
                         VAR_5 | VAR_6)) ||
        ((VAR_15[0] == 'v' || VAR_15[0] == 'a' || VAR_15[0] == 's') &&
         (VAR_17 = FUNC_10(&VAR_21, VAR_15 + 1, ((void*)0), 0, VAR_6)))) {
        FUNC_2(&VAR_9, VAR_15, VAR_16, VAR_8);
        VAR_18 = 1;
    }
    if ((VAR_17 = FUNC_10(&VAR_22, VAR_15, ((void*)0), 0,
                         VAR_5 | VAR_6))) {
        FUNC_2(&VAR_10, VAR_15, VAR_16, VAR_8);
        if (VAR_18)
            FUNC_3(((void*)0), VAR_3, "Routing option %s to both codec and muxer layer\n", VAR_15);
        VAR_18 = 1;
    }
    if (!VAR_18 && !FUNC_12(VAR_15, "sws_flags")) {
        FUNC_3(((void*)0), VAR_4, "Ignoring %s %s, due to disabled swscale\n", VAR_15, VAR_16);
        VAR_18 = 1;
    }
    if (VAR_18)
        return 0;
    return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int name2 ;
struct TYPE_4__ {char* scale_sws_opts; } ;
typedef TYPE_1__ AVFilterGraph ;
typedef int AVFilterContext ;
typedef int AVFilter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*,char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*,int ,char*,...) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*) ;
 int * FUNC_7 (TYPE_1__*,int const*,char const*) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (char*,int,char*,char const*,int) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*,char*) ;

__attribute__((used)) static int FUNC_12(AVFilterContext **VAR_3, AVFilterGraph *VAR_4, int VAR_5,
                         const char *VAR_6, const char *VAR_7, void *VAR_8)
{
    const AVFilter *VAR_9;
    char VAR_10[30];
    const char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    char *VAR_13 = ((void*)0);
    int VAR_14, VAR_15;

    FUNC_4(VAR_10, VAR_6, sizeof(VAR_10));

    for (VAR_15 = 0; VAR_10[VAR_15]; VAR_15++) {
        if (VAR_10[VAR_15] == '@' && VAR_6[VAR_15+1]) {
            VAR_10[VAR_15] = 0;
            VAR_11 = VAR_6;
            VAR_12 = VAR_10;
            break;
        }
    }

    if (!VAR_11) {
        FUNC_9(VAR_10, sizeof(VAR_10), "Parsed_%s_%d", VAR_6, VAR_5);
        VAR_11 = VAR_10;
        VAR_12 = VAR_6;
    }

    VAR_9 = FUNC_6(VAR_12);

    if (!VAR_9) {
        FUNC_3(VAR_8, VAR_0,
               "No such filter: '%s'\n", VAR_12);
        return FUNC_0(VAR_1);
    }

    *VAR_3 = FUNC_7(VAR_4, VAR_9, VAR_11);
    if (!*VAR_3) {
        FUNC_3(VAR_8, VAR_0,
               "Error creating filter '%s'\n", VAR_12);
        return FUNC_0(VAR_2);
    }

    if (!FUNC_10(VAR_12, "scale") && (!VAR_7 || !FUNC_11(VAR_7, "flags")) &&
        VAR_4->scale_sws_opts) {
        if (VAR_7) {
            VAR_13 = FUNC_1("%s:%s",
                    VAR_7, VAR_4->scale_sws_opts);
            if (!VAR_13)
                return FUNC_0(VAR_2);
            VAR_7 = VAR_13;
        } else
            VAR_7 = VAR_4->scale_sws_opts;
    }

    VAR_14 = FUNC_8(*VAR_3, VAR_7);
    if (VAR_14 < 0) {
        FUNC_3(VAR_8, VAR_0,
               "Error initializing filter '%s'", VAR_12);
        if (VAR_7)
            FUNC_3(VAR_8, VAR_0, " with args '%s'", VAR_7);
        FUNC_3(VAR_8, VAR_0, "\n");
        FUNC_5(*VAR_3);
        *VAR_3 = ((void*)0);
    }

    FUNC_2(VAR_13);
    return VAR_14;
}

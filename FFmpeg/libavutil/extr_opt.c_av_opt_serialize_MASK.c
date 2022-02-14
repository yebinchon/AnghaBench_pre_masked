
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ type; int flags; int * name; } ;
typedef TYPE_1__ AVOption ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int *,char const*,int ,int ) ;
 int FUNC_3 (int *,char**) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (void*,int ,char*) ;
 int FUNC_7 (void*,int *,int ,int **) ;
 scalar_t__ FUNC_8 (void*,TYPE_1__ const*) ;
 TYPE_1__* FUNC_9 (void*,TYPE_1__ const*) ;

int FUNC_10(void *VAR_7, int VAR_8, int VAR_9, char **VAR_10,
                     const char VAR_11, const char VAR_12)
{
    const AVOption *VAR_13 = ((void*)0);
    uint8_t *VAR_14;
    AVBPrint VAR_15;
    int VAR_16, VAR_17 = 0;
    const char VAR_18[] = {VAR_12, VAR_11, '\0'};

    if (VAR_12 == '\0' || VAR_11 == '\0' || VAR_12 == VAR_11 ||
        VAR_12 == '\\' || VAR_11 == '\\') {
        FUNC_6(VAR_7, VAR_2, "Invalid separator(s) found.");
        return FUNC_0(VAR_6);
    }

    if (!VAR_7 || !VAR_10)
        return FUNC_0(VAR_6);

    *VAR_10 = ((void*)0);
    FUNC_4(&VAR_15, 64, VAR_0);

    while ((VAR_13 = FUNC_9(VAR_7, VAR_13))) {
        if (VAR_13->type == VAR_5)
            continue;
        if ((VAR_9 & VAR_3) && VAR_13->flags != VAR_8)
            continue;
        else if (((VAR_13->flags & VAR_8) != VAR_8))
            continue;
        if (VAR_9 & VAR_4 && FUNC_8(VAR_7, VAR_13) > 0)
            continue;
        if ((VAR_16 = FUNC_7(VAR_7, VAR_13->name, 0, &VAR_14)) < 0) {
            FUNC_3(&VAR_15, ((void*)0));
            return VAR_16;
        }
        if (VAR_14) {
            if (VAR_17++)
                FUNC_1(&VAR_15, &VAR_12, 1);
            FUNC_2(&VAR_15, VAR_13->name, VAR_18, VAR_1, 0);
            FUNC_1(&VAR_15, &VAR_11, 1);
            FUNC_2(&VAR_15, VAR_14, VAR_18, VAR_1, 0);
            FUNC_5(&VAR_14);
        }
    }
    FUNC_3(&VAR_15, VAR_10);
    return 0;
}

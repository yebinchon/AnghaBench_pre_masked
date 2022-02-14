
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,char*,char*,int) ;
 int FUNC_2 (void*,int ,char*,char const*) ;
 int FUNC_3 (char const**,char*,int ,int ,char**,char**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (char const*,int ) ;

int FUNC_5(void *VAR_6, char *VAR_7,
                               AVDictionary **VAR_8, char **VAR_9)
{
    const char *VAR_10;
    char *VAR_11, *VAR_12;
    int VAR_13;

    if (!FUNC_4(VAR_7, VAR_5)) {
        *VAR_9 = VAR_7;
        return 0;
    }
    VAR_10 = VAR_7 + 1;
    if (FUNC_4(VAR_10, VAR_3)) {
        *VAR_9 = (char *)VAR_10 + 1;
        return 0;
    }
    while (1) {
        VAR_13 = FUNC_3(&VAR_10, "=", VAR_4, 0, &VAR_11, &VAR_12);
        if (VAR_13 < 0) {
            FUNC_2(VAR_6, VAR_2, "No option found near \"%s\"\n", VAR_10);
            goto fail;
        }
        VAR_13 = FUNC_1(VAR_8, VAR_11, VAR_12,
                          VAR_0 | VAR_1);
        if (VAR_13 < 0)
            goto fail;
        if (FUNC_4(VAR_10, VAR_3))
            break;
        VAR_10++;
    }
    *VAR_9 = (char *)VAR_10 + 1;
    return 0;

fail:
    FUNC_0(VAR_8);
    return VAR_13;
}

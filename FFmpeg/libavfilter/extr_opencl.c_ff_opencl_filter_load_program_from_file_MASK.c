
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int *,int ,char*,char const*) ;
 int FUNC_3 (char**,size_t) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,char const**,int) ;
 int * FUNC_7 (char const*,char*) ;
 size_t FUNC_8 (char*,int,size_t,int *) ;
 int FUNC_9 (char*,size_t,char*,char const*) ;

int FUNC_10(AVFilterContext *VAR_5,
                                            const char *VAR_6)
{
    FILE *VAR_7;
    char *VAR_8 = ((void*)0);
    size_t VAR_9, VAR_10, VAR_11;
    const char *VAR_12;
    int VAR_13;

    VAR_7 = FUNC_7(VAR_6, "r");
    if (!VAR_7) {
        FUNC_2(VAR_5, VAR_0, "Unable to open program "
               "source file \"%s\".\n", VAR_6);
        return FUNC_0(VAR_3);
    }

    VAR_10 = 1 << 16;
    VAR_9 = 0;

    VAR_13 = FUNC_3(&VAR_8, VAR_10);
    if (VAR_13 < 0)
        goto fail;

    VAR_13 = FUNC_9(VAR_8, VAR_10, "#line 1 \"%s\"\n", VAR_6);
    if (VAR_13 < 0) {
        VAR_13 = FUNC_0(VAR_4);
        goto fail;
    }
    if (VAR_13 > VAR_10 / 2) {
        VAR_13 = FUNC_0(VAR_1);
        goto fail;
    }
    VAR_9 = VAR_13;

    while (1) {
        VAR_11 = FUNC_8(VAR_8 + VAR_9, 1, VAR_10 - VAR_9 - 1, VAR_7);
        if (VAR_11 == 0 && FUNC_5(VAR_7)) {
            VAR_13 = FUNC_0(VAR_2);
            goto fail;
        }
        VAR_9 += VAR_11;
        if (VAR_9 < VAR_10)
            break;
        VAR_10 <<= 1;
        VAR_13 = FUNC_3(&VAR_8, VAR_10);
        if (VAR_13 < 0)
            goto fail;
    }
    VAR_8[VAR_9] = 0;

    VAR_12 = VAR_8;

    VAR_13 = FUNC_6(VAR_5, &VAR_12, 1);
fail:
    FUNC_4(VAR_7);
    FUNC_1(&VAR_8);
    return VAR_13;
}

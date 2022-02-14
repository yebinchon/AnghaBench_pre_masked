
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (int *,int ,char*,char const*) ;
 char* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(int VAR_2, const char *VAR_3)
{
    const char *VAR_4, *VAR_5;
    char *VAR_6 = ((void*)0);
    int VAR_7 = 0;

    if (!VAR_3) {
        VAR_7 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_6 = FUNC_5(VAR_3);
    VAR_4 = FUNC_1(VAR_3);
    VAR_5 = FUNC_2(VAR_6);

    if (VAR_2 > 1 && !FUNC_6(VAR_4, "%v") && !FUNC_6(VAR_5, "%v")) {
        FUNC_4(((void*)0), VAR_0, "More than 1 variant streams are present, %%v is expected "
               "either in the filename or in the sub-directory name of file %s\n", VAR_3);
        VAR_7 = FUNC_0(VAR_1);
        goto fail;
    }

    if (FUNC_6(VAR_4, "%v") && FUNC_6(VAR_5, "%v")) {
        FUNC_4(((void*)0), VAR_0, "%%v is expected either in the filename or "
               "in the sub-directory name of file %s, but only in one of them\n", VAR_3);
        VAR_7 = FUNC_0(VAR_1);
        goto fail;
    }

fail:
    FUNC_3(&VAR_6);
    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBSFList ;
typedef int AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 int * FUNC_2 () ;
 int FUNC_3 (int **,int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char*,char**) ;
 int FUNC_8 (char*,int *) ;

int FUNC_9(const char *VAR_1, AVBSFContext **VAR_2)
{
    AVBSFList *VAR_3;
    char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    int VAR_8;

    if (!VAR_1)
        return FUNC_1(VAR_2);

    VAR_3 = FUNC_2();
    if (!VAR_3)
        return FUNC_0(VAR_0);

    if (!(VAR_6 = VAR_5 = FUNC_6(VAR_1))) {
        VAR_8 = FUNC_0(VAR_0);
        goto end;
    }

    while (1) {
        VAR_4 = FUNC_7(VAR_5, ",", &VAR_7);
        if (!VAR_4)
            break;

        VAR_8 = FUNC_8(VAR_4, VAR_3);
        if (VAR_8 < 0)
            goto end;

        VAR_5 = ((void*)0);
    }

    VAR_8 = FUNC_3(&VAR_3, VAR_2);
end:
    if (VAR_8 < 0)
        FUNC_4(&VAR_3);
    FUNC_5(VAR_6);
    return VAR_8;
}

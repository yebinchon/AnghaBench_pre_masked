
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVDictionary ;
typedef int AVBSFList ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int **) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,char*,char*,char*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_7(const char *VAR_2, AVBSFList *VAR_3)
{
    char *VAR_4, *VAR_5, *VAR_6;
    AVDictionary *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (!(VAR_6 = FUNC_5(VAR_2)))
        return FUNC_0(VAR_1);

    VAR_4 = FUNC_6(VAR_6, "=", &VAR_5);
    if (!VAR_4) {
        VAR_8 = FUNC_0(VAR_0);
        goto end;
    }

    if (VAR_5) {
        VAR_8 = FUNC_3(&VAR_7, VAR_5, "=", ":", 0);
        if (VAR_8 < 0)
            goto end;
    }

    VAR_8 = FUNC_1(VAR_3, VAR_4, &VAR_7);

    FUNC_2(&VAR_7);
end:
    FUNC_4(VAR_6);
    return VAR_8;
}

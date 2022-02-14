
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVExpr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*,int ,int *,int *,int *,int *,int ,void*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (void*,int ,char*,char const*,char const*) ;
 char* FUNC_6 (char const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(AVExpr **VAR_3, char **VAR_4,
                    const char *VAR_5, const char *VAR_6, void *VAR_7)
{
    int VAR_8;
    AVExpr *VAR_9;
    char *VAR_10;

    VAR_10 = FUNC_6(VAR_5);
    if (!VAR_10)
        return FUNC_0(VAR_1);
    VAR_8 = FUNC_2(&VAR_9, VAR_5, VAR_2,
                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_7);
    if (VAR_8 < 0) {
        FUNC_5(VAR_7, VAR_0,
               "Error when evaluating the expression '%s' for %s\n",
               VAR_5, VAR_6);
        FUNC_3(VAR_10);
        return VAR_8;
    }

    if (*VAR_3)
        FUNC_1(*VAR_3);
    *VAR_3 = VAR_9;
    FUNC_4(VAR_4);
    *VAR_4 = VAR_10;

    return 0;
}

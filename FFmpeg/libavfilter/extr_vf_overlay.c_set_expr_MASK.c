
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVExpr ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*,int ,int *,int *,int *,int *,int ,void*) ;
 int FUNC_2 (void*,int ,char*,char const*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(AVExpr **VAR_2, const char *VAR_3, const char *VAR_4, void *VAR_5)
{
    int VAR_6;
    AVExpr *VAR_7 = ((void*)0);

    if (*VAR_2)
        VAR_7 = *VAR_2;
    VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_1,
                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_5);
    if (VAR_6 < 0) {
        FUNC_2(VAR_5, VAR_0,
               "Error when evaluating the expression '%s' for %s\n",
               VAR_3, VAR_4);
        *VAR_2 = VAR_7;
        return VAR_6;
    }

    FUNC_0(VAR_7);
    return 0;
}

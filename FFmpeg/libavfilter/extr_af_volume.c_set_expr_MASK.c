
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVExpr ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*,int ,int *,int *,int *,int *,int ,void*) ;
 int FUNC_2 (void*,int ,char*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(AVExpr **VAR_2, const char *VAR_3, void *VAR_4)
{
    int VAR_5;
    AVExpr *VAR_6 = ((void*)0);

    if (*VAR_2)
        VAR_6 = *VAR_2;
    VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_1,
                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_4);
    if (VAR_5 < 0) {
        FUNC_2(VAR_4, VAR_0,
               "Error when evaluating the volume expression '%s'\n", VAR_3);
        *VAR_2 = VAR_6;
        return VAR_5;
    }

    FUNC_0(VAR_6);
    return 0;
}

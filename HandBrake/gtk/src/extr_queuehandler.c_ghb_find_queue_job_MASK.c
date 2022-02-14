
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gint ;
typedef int GhbValue ;


 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;

gint
FUNC_4(GhbValue *VAR_0, gint VAR_1, GhbValue **VAR_2)
{
    GhbValue *VAR_3, *VAR_4;
    gint VAR_5, VAR_6;
    gint VAR_7;

    if (VAR_2 != ((void*)0))
    {
        *VAR_2 = ((void*)0);
    }
    if (VAR_1 == 0)
        return -1;

    VAR_6 = FUNC_1(VAR_0);
    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    {
        VAR_3 = FUNC_0(VAR_0, VAR_5);
        VAR_4 = FUNC_2(VAR_3, "uiSettings");
        VAR_7 = FUNC_3(VAR_4, "job_unique_id");
        if (VAR_7 == VAR_1)
        {
            if (VAR_2 != ((void*)0))
            {
                *VAR_2 = VAR_3;
            }
            return VAR_5;
        }
    }
    return -1;
}

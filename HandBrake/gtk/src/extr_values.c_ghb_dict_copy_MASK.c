
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GhbValue ;
typedef int GhbDictIter ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,int *,char const**,int **) ;
 int FUNC_3 (int *,char const*,int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

void
FUNC_6(GhbValue *VAR_1, const GhbValue *VAR_2)
{
    GhbDictIter VAR_3;
    const char *VAR_4;
    GhbValue *VAR_5, *VAR_6;

    VAR_3 = FUNC_1(VAR_2);
    while (FUNC_2(VAR_2, &VAR_3, &VAR_4, &VAR_5))
    {
        VAR_6 = FUNC_0(VAR_1, VAR_4);
        if (FUNC_5(VAR_5) == VAR_0)
        {
            if (VAR_6 == ((void*)0) || FUNC_5(VAR_6) != VAR_0)
            {
                VAR_6 = FUNC_4(VAR_5);
                FUNC_3(VAR_1, VAR_4, VAR_6);
            }
            else if (FUNC_5(VAR_6) == VAR_0)
            {
                FUNC_6(VAR_6, VAR_5);
            }
        }
        else
        {
            FUNC_3(VAR_1, VAR_4, FUNC_4(VAR_5));
        }
    }
}

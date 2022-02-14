
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signal_user_data_t ;
typedef int GhbValue ;


 int FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,char const*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **) ;

void
FUNC_8(
    GhbValue *VAR_1,
    const char *VAR_2,
    signal_user_data_t *VAR_3)
{
    GhbValue *VAR_4;

    if (VAR_0)
    {
        FUNC_7(&VAR_1);
        return;
    }

    VAR_4 = FUNC_1(VAR_3, ((void*)0));
    if (VAR_4 != ((void*)0))
    {
        if (VAR_1 != ((void*)0))
            FUNC_4(VAR_4, VAR_2, VAR_1);
        else
            FUNC_3(VAR_4, VAR_2);
        FUNC_0(VAR_3, VAR_4, ((void*)0));
        FUNC_6(VAR_3);
        FUNC_2(VAR_3);
        FUNC_5(VAR_3);
    }
    else
    {
        FUNC_7(&VAR_1);
    }
}

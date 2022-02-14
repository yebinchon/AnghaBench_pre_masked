
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signal_user_data_t ;
typedef int GhbValue ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static GhbValue*
FUNC_7(GhbValue *VAR_0, const char *VAR_1, signal_user_data_t *VAR_2)
{
    GhbValue *VAR_3;

    VAR_3 = FUNC_5(VAR_2, ((void*)0));
    if (VAR_3 != ((void*)0))
    {
        if (VAR_0 != ((void*)0))
            FUNC_1(VAR_3, VAR_1, VAR_0);
        else
            FUNC_0(VAR_3, VAR_1);
        FUNC_6(VAR_2, VAR_3);
        FUNC_3(VAR_2);
        FUNC_2(VAR_2);
    }
    else
    {
        FUNC_4(&VAR_0);
    }
    return VAR_3;
}

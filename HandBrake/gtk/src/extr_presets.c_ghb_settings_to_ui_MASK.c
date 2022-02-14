
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signal_user_data_t ;
typedef int gchar ;
typedef int GhbValue ;
typedef int GhbDictIter ;


 int * FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int const**,int **) ;
 int FUNC_3 (int *,int *,int const*,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int ** VAR_0 ;

void
FUNC_6(signal_user_data_t *VAR_1, GhbValue *VAR_2)
{
    GhbDictIter VAR_3;
    const gchar *VAR_4;
    GhbValue *VAR_5;
    int VAR_6;
    GhbValue *VAR_7 = FUNC_4(VAR_2);

    if (VAR_2 == ((void*)0))
        return;

    for (VAR_6 = 0; VAR_0[VAR_6] != ((void*)0); VAR_6++)
    {
        VAR_4 = VAR_0[VAR_6];
        VAR_5 = FUNC_0(VAR_7, VAR_4);
        if (VAR_5 != ((void*)0))
            FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
    }

    VAR_3 = FUNC_1(VAR_7);


    while (FUNC_2(VAR_7, &VAR_3, &VAR_4, &VAR_5))
    {
        FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
    }
    FUNC_5(&VAR_7);
}

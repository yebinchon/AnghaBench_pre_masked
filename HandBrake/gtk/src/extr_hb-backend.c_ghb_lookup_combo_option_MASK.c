
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GhbValue ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (int **) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int const*,int const*,int ) ;

char*
FUNC_4(const gchar *VAR_1, const GhbValue *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return ((void*)0);
    GhbValue *VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_0);
    const char *VAR_4 = FUNC_2(VAR_3);
    char *VAR_5 = ((void*)0);
    if (VAR_4 != ((void*)0))
    {
        VAR_5 = FUNC_0(VAR_4);
    }
    FUNC_1(&VAR_3);
    return VAR_5;
}

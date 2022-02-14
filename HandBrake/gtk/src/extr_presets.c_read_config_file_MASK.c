
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GhbValue ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int *,int const*) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static GhbValue*
FUNC_6(const gchar *VAR_1)
{
    gchar *VAR_2, *VAR_3;
    GhbValue *VAR_4 = ((void*)0);

    VAR_2 = FUNC_3(((void*)0));
    VAR_3 = FUNC_2 ("%s/%s", VAR_2, VAR_1);
    FUNC_1(VAR_2);
    if (FUNC_0(VAR_3, VAR_0))
    {
        VAR_4 = FUNC_4(VAR_3);
        if (VAR_4 == ((void*)0))
            VAR_4 = FUNC_5(VAR_3);
    }
    FUNC_1(VAR_3);
    return VAR_4;
}

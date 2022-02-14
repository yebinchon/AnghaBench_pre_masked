
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GhbValue ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ) ;
 int * FUNC_1 (int const*) ;
 int * FUNC_2 (int const*) ;

GhbValue*
FUNC_3(const gchar *VAR_1)
{
    GhbValue *VAR_2 = ((void*)0);

    if (FUNC_0(VAR_1, VAR_0))
    {
        VAR_2 = FUNC_1(VAR_1);
        if (VAR_2 == ((void*)0))
            VAR_2 = FUNC_2(VAR_1);
    }
    return VAR_2;
}

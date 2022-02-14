
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GhbValue ;


 int FUNC_0 (char*,int const*) ;
 int * FUNC_1 (int const*,int const*) ;

GhbValue*
FUNC_2(const GhbValue *VAR_0, const gchar *VAR_1)
{
    GhbValue *VAR_2;
    VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2 == ((void*)0))
        FUNC_0("returning null (%s)", VAR_1);
    return VAR_2;
}

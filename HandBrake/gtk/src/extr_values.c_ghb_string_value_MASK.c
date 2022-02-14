
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GhbValue ;


 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const*) ;

GhbValue*
FUNC_2(const gchar *VAR_0)
{
    static GhbValue *VAR_1 = ((void*)0);
    if (VAR_1 == ((void*)0))
        VAR_1 = FUNC_0(VAR_0);
    else
        FUNC_1(VAR_1, VAR_0);
    return VAR_1;
}

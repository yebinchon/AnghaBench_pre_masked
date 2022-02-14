
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint64 ;
typedef int GhbValue ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

GhbValue*
FUNC_2(gint64 VAR_0)
{
    static GhbValue *VAR_1 = ((void*)0);
    if (VAR_1 == ((void*)0))
        VAR_1 = FUNC_0(VAR_0);
    else
        FUNC_1(VAR_1, VAR_0);
    return VAR_1;
}

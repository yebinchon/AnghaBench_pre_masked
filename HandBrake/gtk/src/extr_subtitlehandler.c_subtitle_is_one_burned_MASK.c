
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static gboolean FUNC_4(GhbValue *VAR_2)
{
    GhbValue *VAR_3, *VAR_4;
    int VAR_5, VAR_6;

    VAR_3 = FUNC_3(VAR_2);
    if (VAR_3 == ((void*)0))
        return VAR_0;

    VAR_5 = FUNC_1(VAR_3);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        VAR_4 = FUNC_0(VAR_3, VAR_6);
        if (FUNC_2(VAR_4, "Burn"))
        {
            return VAR_1;
        }
    }
    return VAR_0;
}

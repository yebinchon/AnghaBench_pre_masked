
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gint ;
typedef int GhbValue ;


 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(GhbValue *VAR_1, gint VAR_2)
{
    GhbValue *VAR_3;
    GhbValue *VAR_4;
    gint VAR_5, VAR_6;

    VAR_3 = FUNC_3(VAR_1);
    VAR_6 = FUNC_1(VAR_3);
    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    {
        if (VAR_5 != VAR_2)
        {
            VAR_4 = FUNC_0(VAR_3, VAR_5);
            FUNC_2(VAR_4, "Burn", VAR_0);
        }
    }
}

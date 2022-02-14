
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gint ;
typedef int GhbValue ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static gint
FUNC_4(GhbValue *VAR_1)
{
    gint VAR_2, VAR_3, VAR_4;
    GhbValue *VAR_5, *VAR_6;
    gint VAR_7;

    VAR_2 = 0;
    VAR_4 = FUNC_1(VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    {

        VAR_5 = FUNC_0(VAR_1, VAR_3);
        VAR_6 = FUNC_2(VAR_5, "uiSettings");
        VAR_7 = FUNC_3(VAR_6, "job_status");
        if (VAR_7 == VAR_0)
        {
            VAR_2++;
        }
    }
    return VAR_2;
}

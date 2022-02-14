
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int globals; int prefs; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gboolean ;
typedef int GhbValue ;
typedef int GSourceFunc ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *) ;

gboolean
FUNC_9(signal_user_data_t *VAR_5)
{
    FUNC_7(VAR_5, VAR_5->globals);
    FUNC_7(VAR_5, VAR_5->prefs);




    if (VAR_3 != ((void*)0))
    {

        FUNC_4(VAR_5->globals, "scan_source", VAR_3);
        FUNC_0((GSourceFunc)VAR_4, VAR_5);
    }
    else
    {
        GhbValue *VAR_6 = FUNC_2(VAR_5->prefs, "default_source");
        FUNC_3(VAR_5->globals, "scan_source", FUNC_8(VAR_6));
    }

    if (VAR_2 != ((void*)0))
    {
        FUNC_6(VAR_5, VAR_2, VAR_1);
    }
    else
    {
        FUNC_5(VAR_5);
    }


    FUNC_1(VAR_5);

    return VAR_0;
}

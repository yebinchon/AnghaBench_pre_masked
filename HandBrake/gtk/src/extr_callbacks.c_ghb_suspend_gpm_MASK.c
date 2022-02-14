
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int message; } ;
typedef int GVariant ;
typedef TYPE_1__ GError ;
typedef int GDBusProxy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,int *,int ,int,int *,TYPE_1__**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int * FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8()
{

    GDBusProxy *VAR_4;
    GError *VAR_5 = ((void*)0);
    GVariant *VAR_6;


    FUNC_2("ghb_suspend_gpm()");
    VAR_4 = FUNC_7(VAR_2,
                            VAR_1, VAR_0);
    if (VAR_4 == ((void*)0))
        return;

    VAR_6 = FUNC_1(VAR_4, "Suspend", ((void*)0),
                                 VAR_3, -1, ((void*)0), &VAR_5);
    if (!VAR_6)
    {
        if (VAR_5 != ((void*)0))
        {
            FUNC_6("Suspend failed: %s", VAR_5->message);
            FUNC_3(VAR_5);
        }
        else
            FUNC_6("Suspend failed");
    }
    else
    {
        FUNC_5(VAR_6);
    }
    FUNC_4(FUNC_0(VAR_4));

}

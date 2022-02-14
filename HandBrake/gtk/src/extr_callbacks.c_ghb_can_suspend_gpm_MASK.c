
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_4__ {int message; } ;
typedef int GVariant ;
typedef TYPE_1__ GError ;
typedef int GDBusProxy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int * FUNC_1 (int *,char*,int *,int ,int,int *,TYPE_1__**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int * FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static gboolean
FUNC_9()
{
    gboolean VAR_6 = VAR_0;

    GDBusProxy *VAR_7;
    GError *VAR_8 = ((void*)0);
    GVariant *VAR_9;


    FUNC_2("ghb_can_suspend_gpm()");
    VAR_7 = FUNC_8(VAR_3,
                            VAR_2, VAR_1);
    if (VAR_7 == ((void*)0))
        return VAR_0;

    VAR_9 = FUNC_1(VAR_7, "CanSuspend", ((void*)0),
                                 VAR_4, -1, ((void*)0), &VAR_8);
    if (!VAR_9)
    {
        if (VAR_8 != ((void*)0))
        {
            FUNC_7("CanSuspend failed: %s", VAR_8->message);
            FUNC_3(VAR_8);
        }
        else
            FUNC_7("CanSuspend failed");

        VAR_6 = VAR_5;
    }
    else
    {
        FUNC_5(VAR_9, "(b)", &VAR_6);
        FUNC_6(VAR_9);
    }
    FUNC_4(FUNC_0(VAR_7));

    return VAR_6;
}

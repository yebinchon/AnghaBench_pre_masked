
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gchar ;
typedef int gboolean ;
struct TYPE_4__ {scalar_t__ timeout; int dlg; int action; int msg; TYPE_3__* ud; } ;
typedef TYPE_1__ countdown_t ;
struct TYPE_5__ {int app; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static gboolean
FUNC_9(countdown_t *VAR_2)
{
    gchar *VAR_3;

    VAR_2->timeout--;
    if (VAR_2->timeout == 0)
    {
        FUNC_5(VAR_0);
        FUNC_8(VAR_2->ud);

        FUNC_6();
        FUNC_2(FUNC_0(VAR_2->ud->app));
        return VAR_0;
    }
    VAR_3 = FUNC_4(FUNC_1("%s\n\n%s in %d seconds ..."),
                            VAR_2->msg, VAR_2->action, VAR_2->timeout);
    FUNC_7(VAR_2->dlg, VAR_3);
    FUNC_3(VAR_3);
    return VAR_1;
}

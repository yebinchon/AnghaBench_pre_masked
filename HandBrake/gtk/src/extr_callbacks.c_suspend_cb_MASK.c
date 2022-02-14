
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gchar ;
typedef int gboolean ;
struct TYPE_3__ {scalar_t__ timeout; int dlg; int action; int msg; } ;
typedef TYPE_1__ countdown_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static gboolean
FUNC_7(countdown_t *VAR_2)
{
    gchar *VAR_3;

    VAR_2->timeout--;
    if (VAR_2->timeout == 0)
    {
        FUNC_6 (FUNC_0(VAR_2->dlg));
        FUNC_4();
        return VAR_0;
    }
    VAR_3 = FUNC_3(FUNC_1("%s\n\n%s in %d seconds ..."),
                            VAR_2->msg, VAR_2->action, VAR_2->timeout);
    FUNC_5(VAR_2->dlg, VAR_3);
    FUNC_2(VAR_3);
    return VAR_1;
}

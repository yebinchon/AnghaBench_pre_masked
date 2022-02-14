
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int builder; int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
typedef int gchar ;
typedef int GtkLabel ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(signal_user_data_t *VAR_0)
{
    GtkLabel *VAR_1;
    gint VAR_2;
    gchar *VAR_3;

    VAR_2 = FUNC_6(VAR_0->queue);
    if (VAR_2 == 1)
    {
        VAR_3 = FUNC_4(FUNC_2("%d encode pending"), VAR_2);
    }
    else
    {
        VAR_3 = FUNC_4(FUNC_2("%d encodes pending"), VAR_2);
    }
    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "pending_status"));
    FUNC_5(VAR_1, VAR_3);
    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "queue_status_label"));
    FUNC_5(VAR_1, VAR_3);
    FUNC_3(VAR_3);

    FUNC_7(VAR_0);
}

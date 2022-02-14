
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queue; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int GtkListBoxRow ;
typedef int GtkListBox ;
typedef int GhbValue ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;

void FUNC_7(signal_user_data_t * VAR_0)
{
    GtkListBox * VAR_1;
    GtkListBoxRow * VAR_2;
    gint VAR_3;
    GhbValue * VAR_4;

    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "queue_list"));
    VAR_2 = FUNC_4(VAR_1);
    if (VAR_2 != ((void*)0))
    {

        VAR_3 = FUNC_5(VAR_2);
        if (VAR_3 < 0 || VAR_3 >= FUNC_3(VAR_0->queue))
        {
            return;
        }
        VAR_4 = FUNC_2(VAR_0->queue, VAR_3);
        FUNC_6(VAR_4, VAR_0);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GtkListBoxRow ;
typedef int GtkListBox ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;

void
FUNC_7(signal_user_data_t *VAR_0, int VAR_1,
                               gboolean VAR_2)
{
    GtkListBox * VAR_3;
    GtkListBoxRow * VAR_4;
    GtkWidget * VAR_5;

    int VAR_6 = FUNC_4(VAR_0->queue);
    if (VAR_1 < 0 || VAR_1 >= VAR_6)
    {

        return;
    }

    VAR_3 = FUNC_1(FUNC_0(VAR_0->builder, "queue_list"));
    VAR_4 = FUNC_5(VAR_3, VAR_1);
    if (VAR_4 == ((void*)0))
    {
        return;
    }
    VAR_5 = FUNC_3(FUNC_2(VAR_4), "queue_item_progress");
    FUNC_6(VAR_5, VAR_2);
}

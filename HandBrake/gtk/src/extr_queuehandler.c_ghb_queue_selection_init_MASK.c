
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkListBoxRow ;
typedef int GtkListBox ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(signal_user_data_t * VAR_0)
{
    GtkListBox * VAR_1;
    GtkListBoxRow * VAR_2;

    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "queue_list"));
    VAR_2 = FUNC_3(VAR_1);
    if (VAR_2 == ((void*)0))
    {
        VAR_2 = FUNC_2(VAR_1, 0);
        if (VAR_2 != ((void*)0))
        {
            FUNC_4(VAR_1, VAR_2);
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_8__ {scalar_t__ depth; } ;
typedef TYPE_2__ hb_preset_index_t ;
typedef int GtkTreeView ;
typedef int GtkTreeStore ;
typedef int GtkTreePath ;
typedef int GtkTreeIter ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int,int,int,int ,int) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 () ;

void
FUNC_11(signal_user_data_t *VAR_0)
{
    hb_preset_index_t *VAR_1;

    VAR_1 = FUNC_10();
    if (VAR_1 == ((void*)0) || VAR_1->depth == 0)
        return;

    GtkTreeView *VAR_2;
    GtkTreeStore *VAR_3;
    GtkTreePath *VAR_4;
    GtkTreeIter VAR_5;

    VAR_2 = FUNC_3(FUNC_0(VAR_0->builder, "presets_list"));
    VAR_3 = FUNC_2(FUNC_9(VAR_2));
    VAR_4 = FUNC_5(VAR_1);
    if (VAR_4)
    {
        if (FUNC_6(FUNC_1(VAR_3), &VAR_5, VAR_4))
        {
            FUNC_8(VAR_3, &VAR_5,
                        1, 400,
                        2, 0 ,
                        -1);
        }
        FUNC_7(VAR_4);
    }
    FUNC_4(VAR_1);
}

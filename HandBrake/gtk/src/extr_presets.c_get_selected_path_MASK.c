
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int hb_preset_index_t ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int **,int *) ;
 int * FUNC_4 (int *) ;

hb_preset_index_t *
FUNC_5(signal_user_data_t *VAR_0)
{
    GtkTreeView *VAR_1;
    GtkTreeSelection *VAR_2;
    GtkTreeModel *VAR_3;
    GtkTreeIter VAR_4;

    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "presets_list"));
    VAR_2 = FUNC_4(VAR_1);
    if (FUNC_3(VAR_2, &VAR_3, &VAR_4))
    {
        return FUNC_2(VAR_3, &VAR_4);
    }
    return ((void*)0);
}

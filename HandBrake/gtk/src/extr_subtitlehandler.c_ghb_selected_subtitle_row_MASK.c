
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int **,int *) ;
 int * FUNC_6 (int *) ;

gint
FUNC_7(signal_user_data_t *VAR_0)
{
    GtkTreeView *VAR_1;
    GtkTreePath *VAR_2;
    GtkTreeSelection *VAR_3;
    GtkTreeModel *VAR_4;
    GtkTreeIter VAR_5;
    gint *VAR_6;
    gint VAR_7 = -1;

    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "subtitle_list_view"));
    VAR_3 = FUNC_6(VAR_1);
    if (FUNC_5(VAR_3, &VAR_4, &VAR_5))
    {

        VAR_2 = FUNC_2(VAR_4, &VAR_5);
        VAR_6 = FUNC_4(VAR_2);
        VAR_7 = VAR_6[0];
        FUNC_3(VAR_2);
    }
    return VAR_7;
}

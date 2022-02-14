
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GhbValue ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int **,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_5(signal_user_data_t *VAR_0, GhbValue *VAR_1)
{
    GtkTreeView *VAR_2;
    GtkTreeSelection *VAR_3;
    GtkTreeModel *VAR_4;
    GtkTreeIter VAR_5;

    VAR_2 = FUNC_1(FUNC_0(VAR_0->builder, "subtitle_list_view"));
    VAR_3 = FUNC_3(VAR_2);
    if (FUNC_2(VAR_3, &VAR_4, &VAR_5))
    {
        FUNC_4(VAR_4, &VAR_5, VAR_0->settings, VAR_1);
    }
}

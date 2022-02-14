
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_preset_index_t ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (int *) ;
 int * FUNC_4 (int*,int) ;

hb_preset_index_t*
FUNC_5(GtkTreeModel *VAR_0, GtkTreeIter *VAR_1)
{
    GtkTreePath *VAR_2;
    int *VAR_3, VAR_4;
    hb_preset_index_t *VAR_5;

    VAR_2 = FUNC_0(VAR_0, VAR_1);
    VAR_3 = FUNC_3(VAR_2);
    VAR_4 = FUNC_2(VAR_2);
    VAR_5 = FUNC_4(VAR_3, VAR_4);
    FUNC_1(VAR_2);

    return VAR_5;
}

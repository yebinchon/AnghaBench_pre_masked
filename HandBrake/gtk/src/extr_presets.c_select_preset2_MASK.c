
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int app; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_10__ {scalar_t__ depth; } ;
typedef TYPE_2__ hb_preset_index_t ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GSimpleAction ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int *,int ,int ,int ) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_17(signal_user_data_t *VAR_2, hb_preset_index_t *VAR_3)
{
    GtkTreeView *VAR_4;
    GtkTreeSelection *VAR_5;
    GtkTreeModel *VAR_6;
    GtkTreeIter VAR_7;
    GtkTreePath *VAR_8;

    if (VAR_3 == ((void*)0) || VAR_3->depth == 0)
        return;

    VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "presets_list"));
    VAR_5 = FUNC_13 (VAR_4);
    VAR_6 = FUNC_12 (VAR_4);
    VAR_8 = FUNC_6(VAR_3);
    if (VAR_8 != ((void*)0))
    {
        FUNC_11(VAR_4, VAR_8);
        if (FUNC_7(VAR_6, &VAR_7, VAR_8))
        {
            FUNC_10(VAR_5, &VAR_7);
        }
        else
        {
            if (FUNC_8(VAR_6, &VAR_7))
                FUNC_10(VAR_5, &VAR_7);
        }

        FUNC_14(VAR_4, VAR_8, ((void*)0), VAR_0, 0, 0);
        FUNC_9(VAR_8);
    }
    FUNC_16(VAR_2, VAR_3);

    int VAR_9 = FUNC_15(VAR_3);
    GSimpleAction * VAR_10;

    VAR_10 = FUNC_3(FUNC_4(
                             FUNC_2(VAR_2->app), "preset-rename"));
    FUNC_5(VAR_10, VAR_9 == VAR_1);
    VAR_10 = FUNC_3(FUNC_4(
                             FUNC_2(VAR_2->app), "preset-save"));
    FUNC_5(VAR_10, VAR_9 == VAR_1);
}

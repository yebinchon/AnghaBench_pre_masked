
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GhbValue ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,TYPE_1__*,int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int const*,scalar_t__) ;
 scalar_t__ FUNC_5 (int const*) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int **,int *) ;
 int * FUNC_11 (int *) ;

void
FUNC_12(signal_user_data_t *VAR_0)
{
    GtkTreeView *VAR_1;
    GtkTreePath *VAR_2;
    GtkTreeSelection *VAR_3;
    GtkTreeModel *VAR_4;
    GtkTreeIter VAR_5;
    gint *VAR_6;
    gint VAR_7;
    GhbValue *VAR_8 = ((void*)0);
    const GhbValue *VAR_9;

    FUNC_3("ghb_audio_list_refresh_selected ()");
    VAR_1 = FUNC_1(FUNC_0(VAR_0->builder, "audio_list_view"));
    VAR_3 = FUNC_11 (VAR_1);
    if (FUNC_10(VAR_3, &VAR_4, &VAR_5))
    {

        VAR_2 = FUNC_7 (VAR_4, &VAR_5);
        VAR_6 = FUNC_9 (VAR_2);
        VAR_7 = VAR_6[0];
        FUNC_8(VAR_2);
        if (VAR_7 < 0) return;

        VAR_9 = FUNC_6(VAR_0->settings);
        if (VAR_7 >= FUNC_5(VAR_9))
            return;

        VAR_8 = FUNC_4(VAR_9, VAR_7);
        FUNC_2(VAR_4, &VAR_5, VAR_0, VAR_8);
    }
}

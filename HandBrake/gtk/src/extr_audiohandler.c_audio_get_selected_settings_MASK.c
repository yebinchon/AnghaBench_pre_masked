
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GhbValue ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int **,int *) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static GhbValue*
FUNC_10(signal_user_data_t *VAR_0, int *VAR_1)
{
    GtkTreeView *VAR_2;
    GtkTreePath *VAR_3;
    GtkTreeSelection *VAR_4;
    GtkTreeModel *VAR_5;
    GtkTreeIter VAR_6;
    gint *VAR_7;
    gint VAR_8;
    GhbValue *VAR_9 = ((void*)0);
    const GhbValue *VAR_10;

    VAR_2 = FUNC_1(FUNC_0(VAR_0->builder, "audio_list_view"));
    VAR_4 = FUNC_9 (VAR_2);
    if (FUNC_8(VAR_4, &VAR_5, &VAR_6))
    {

        VAR_3 = FUNC_5 (VAR_5, &VAR_6);
        VAR_7 = FUNC_7 (VAR_3);
        VAR_8 = VAR_7[0];
        FUNC_6(VAR_3);

        if (VAR_8 < 0) return ((void*)0);

        VAR_10 = FUNC_4(VAR_0->settings);
        if (VAR_8 >= FUNC_3(VAR_10))
            return ((void*)0);

        VAR_9 = FUNC_2(VAR_10, VAR_8);
        if (VAR_1 != ((void*)0))
            *VAR_1 = VAR_8;
    }
    return VAR_9;
}

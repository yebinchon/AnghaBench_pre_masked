
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
typedef scalar_t__ gboolean ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GhbValue ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int **,int *) ;
 int * FUNC_11 (int *) ;

__attribute__((used)) static GhbValue*
FUNC_12(signal_user_data_t *VAR_0, int *VAR_1)
{
    GtkTreeView *VAR_2;
    GtkTreeSelection *VAR_3;
    GtkTreeModel *VAR_4;
    GtkTreeIter VAR_5;
    GhbValue *VAR_6 = ((void*)0);

    VAR_2 = FUNC_1(FUNC_0(VAR_0->builder, "subtitle_list_view"));
    VAR_3 = FUNC_11(VAR_2);
    if (FUNC_10(VAR_3, &VAR_4, &VAR_5))
    {
        GhbValue *VAR_7, *VAR_8;
        gboolean VAR_9;
        gint VAR_10, *VAR_11;
        GtkTreePath *VAR_12;


        VAR_12 = FUNC_7(VAR_4, &VAR_5);
        VAR_11 = FUNC_9(VAR_12);
        VAR_10 = VAR_11[0];
        FUNC_8(VAR_12);

        VAR_8 = FUNC_6(VAR_0->settings);
        VAR_9 = FUNC_4(VAR_8, "Enable");
        if (VAR_9)
        {
            if (VAR_10 == 0)
            {
                if (VAR_1 != ((void*)0))
                    *VAR_1 = -1;
                return VAR_8;
            }
            VAR_10--;
        }

        VAR_7 = FUNC_5(VAR_0->settings);
        if (VAR_10 < 0 || VAR_10 >= FUNC_3(VAR_7))
            return ((void*)0);

        VAR_6 = FUNC_2(VAR_7, VAR_10);
        if (VAR_1 != ((void*)0))
            *VAR_1 = VAR_10;
    }
    return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkWidget ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef scalar_t__ GtkResponseType ;
typedef int GhbValue ;


 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int **) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (TYPE_1__*,int *) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_18(GtkTreeView *VAR_1, GtkTreePath *VAR_2, signal_user_data_t *VAR_3)
{
    GtkTreeModel *VAR_4;
    GtkTreeSelection *VAR_5;
    GtkTreeIter VAR_6;

    VAR_5 = FUNC_13(VAR_1);
    VAR_4 = FUNC_12(VAR_1);
    if (FUNC_10(VAR_2) > 1) return;
    if (FUNC_9(VAR_4, &VAR_6, VAR_2))
    {
        GhbValue *VAR_7, *VAR_8;

        FUNC_11(VAR_5, &VAR_6);


        VAR_8 = FUNC_6(FUNC_4(VAR_3->settings));


        GtkResponseType VAR_9;
        GtkWidget *VAR_10 = FUNC_0(VAR_3->builder, "subtitle_dialog");
        VAR_9 = FUNC_8(FUNC_1(VAR_10));
        FUNC_14(VAR_10);
        if (VAR_9 != VAR_0)
        {
            FUNC_2(FUNC_3(VAR_3->settings),
                         "Subtitle", VAR_8);
            VAR_7 = FUNC_15(VAR_3, ((void*)0));
            if (VAR_7 != ((void*)0))
            {
                FUNC_17(VAR_3, VAR_7);
            }
            FUNC_16(VAR_3);
        }
        else
        {
            FUNC_7(&VAR_8);
        }
        FUNC_5(VAR_3);
    }
}

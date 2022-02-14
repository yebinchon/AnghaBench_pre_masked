
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
typedef int gchar ;
typedef int GtkTreeView ;
typedef int GtkTreeStore ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,int *,int ,int **,int,int *,int) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *,int *) ;
 int FUNC_12 (int *,int *,int ,int *,int,int ,int) ;
 int * FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(signal_user_data_t *VAR_0)
{
    GtkTreeView * VAR_1;
    GtkTreeModel * VAR_2;
    GtkTreeStore * VAR_3;
    GtkTreeIter VAR_4;

    VAR_1 = FUNC_3(FUNC_0(VAR_0->builder, "audio_avail_lang"));
    VAR_3 = FUNC_2(FUNC_13(VAR_1));
    VAR_1 = FUNC_3(FUNC_0(VAR_0->builder, "audio_selected_lang"));
    VAR_2 = FUNC_13(VAR_1);
    if (FUNC_7(VAR_2, &VAR_4))
    {
        do
        {
            gchar * VAR_5;
            gint VAR_6;
            GtkTreeIter VAR_7, VAR_8;

            FUNC_6(VAR_2, &VAR_4, 0, &VAR_5, 1, &VAR_6, -1);
            if (FUNC_5(FUNC_1(VAR_3), &VAR_8, VAR_6))
            {
                FUNC_11(VAR_3, &VAR_7, ((void*)0), &VAR_8);
            }
            else
            {
                FUNC_9(VAR_3, &VAR_7, ((void*)0));
            }
            FUNC_12(VAR_3, &VAR_7, 0, VAR_5, 1, VAR_6, -1);
            FUNC_4(VAR_5);
        } while (FUNC_8(VAR_2, &VAR_4));
    }
    FUNC_10(FUNC_2(VAR_2));
}

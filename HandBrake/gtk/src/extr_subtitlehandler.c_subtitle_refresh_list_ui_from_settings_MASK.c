
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef scalar_t__ gboolean ;
typedef int GtkWidget ;
typedef int GtkTreeView ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GhbValue ;


 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int *,scalar_t__) ;
 int FUNC_11 (int ,int *,int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_15(signal_user_data_t *VAR_0, GhbValue *VAR_1)
{
    GtkTreeView *VAR_2;
    GtkTreeModel *VAR_3;
    GtkTreeIter VAR_4;
    GhbValue *VAR_5, *VAR_6;
    GhbValue *VAR_7;
    gint VAR_8, VAR_9, VAR_10;
    gboolean VAR_11;

    VAR_2 = FUNC_2(FUNC_0(VAR_0->builder, "subtitle_list_view"));
    VAR_3 = FUNC_12(VAR_2);

    VAR_10 = FUNC_9(VAR_3, ((void*)0));

    VAR_5 = FUNC_7(VAR_1);
    VAR_6 = FUNC_8(VAR_1);
    VAR_11 = FUNC_6(VAR_6, "Enable");
    VAR_9 = FUNC_5(VAR_5);
    if (VAR_9 + VAR_11 != VAR_10)
    {
        FUNC_3(VAR_0->builder);
        for (VAR_8 = 0; VAR_8 < VAR_9 + VAR_11; VAR_8++)
        {
            FUNC_11(FUNC_1(VAR_3), &VAR_4, ((void*)0));
        }
    }

    GtkWidget *VAR_12 = FUNC_0(VAR_0->builder, "subtitle_add_fas");
    FUNC_13(VAR_12, !VAR_11);
    if (VAR_11)
    {

        FUNC_10(VAR_3, &VAR_4, ((void*)0), 0);
        FUNC_14(VAR_3, &VAR_4, VAR_0->settings, VAR_6);
    }
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    {
        FUNC_10(VAR_3, &VAR_4, ((void*)0), VAR_8 + VAR_11);
        VAR_7 = FUNC_4(VAR_5, VAR_8);
        FUNC_14(VAR_3, &VAR_4, VAR_0->settings, VAR_7);
    }
}

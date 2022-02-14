
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int GtkTreeView ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GhbValue ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,TYPE_1__*,int *) ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int *,scalar_t__) ;
 int FUNC_10 (int ,int *,int *) ;
 int * FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(signal_user_data_t *VAR_0)
{
    GhbValue *VAR_1;
    GhbValue *VAR_2;
    gint VAR_3, VAR_4, VAR_5;
    GtkTreeView *VAR_6;
    GtkTreeModel *VAR_7;
    GtkTreeIter VAR_8;

    VAR_6 = FUNC_2(FUNC_0(VAR_0->builder, "audio_list_view"));
    VAR_7 = FUNC_11(VAR_6);

    VAR_5 = FUNC_8(VAR_7, ((void*)0));

    VAR_1 = FUNC_7(VAR_0->settings);
    VAR_4 = FUNC_5(VAR_1);
    if (VAR_4 != VAR_5)
    {
        FUNC_6(VAR_0->builder);
        for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
        {
            FUNC_10(FUNC_1(VAR_7), &VAR_8, ((void*)0));
        }
    }
    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    {
        FUNC_9(VAR_7, &VAR_8, ((void*)0), VAR_3);
        VAR_2 = FUNC_4(VAR_1, VAR_3);
        FUNC_3(VAR_7, &VAR_8, VAR_0, VAR_2);
    }
}

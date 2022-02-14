
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int iso639_lang_t ;
typedef int gint ;
typedef int gchar ;
typedef int GtkTreeView ;
typedef int GtkTreeStore ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GhbValue ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,int *) ;
 scalar_t__ FUNC_10 (int *,int *,int) ;
 int * FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int ,int **,int,int *,int) ;
 int FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *,int ,int *,int,int ,int) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,int const*) ;

__attribute__((used)) static void FUNC_20(signal_user_data_t *VAR_0)
{
    GhbValue * VAR_1;
    GtkTreeView * VAR_2;
    GtkTreeModel * VAR_3;
    GtkTreeStore * VAR_4;
    int VAR_5, VAR_6;

    VAR_2 = FUNC_2(FUNC_0(VAR_0->builder, "subtitle_avail_lang"));
    VAR_3 = FUNC_17(VAR_2);
    VAR_2 = FUNC_2(FUNC_0(VAR_0->builder, "subtitle_selected_lang"));
    VAR_4 = FUNC_1(FUNC_17(VAR_2));


    FUNC_18(VAR_0);

    VAR_1 = FUNC_8(VAR_0->settings, "SubtitleLanguageList");
    if (VAR_1 == ((void*)0))
    {
        VAR_1 = FUNC_6();
        FUNC_9(VAR_0->settings, "SubtitleLanguageList", VAR_1);
    }

    VAR_6 = FUNC_5(VAR_1);
    for (VAR_5 = 0; VAR_5 < VAR_6; )
    {
        GhbValue * VAR_7 = FUNC_4(VAR_1, VAR_5);
        int VAR_8 = FUNC_12(VAR_7);
        GtkTreeIter VAR_9;

        if (VAR_5 == 0)
        {
            const iso639_lang_t *VAR_10;
            VAR_10 = FUNC_11(VAR_8);
            FUNC_19(VAR_0, VAR_10);
        }
        if (FUNC_10(VAR_3, &VAR_9, VAR_8))
        {
            gchar * VAR_11;
            gint VAR_12;
            GtkTreeIter VAR_13;

            FUNC_13(VAR_3, &VAR_9, 0, &VAR_11, 1, &VAR_12, -1);
            FUNC_14(VAR_4, &VAR_13, ((void*)0));
            FUNC_16(VAR_4, &VAR_13, 0, VAR_11, 1, VAR_12, -1);
            FUNC_3(VAR_11);
            FUNC_15(FUNC_1(VAR_3), &VAR_9);
            VAR_5++;
        }
        else
        {


            FUNC_7(VAR_1, VAR_5);
            VAR_6--;
        }
    }
    if (VAR_6 == 0)
    {
        FUNC_19(VAR_0, ((void*)0));
    }
}

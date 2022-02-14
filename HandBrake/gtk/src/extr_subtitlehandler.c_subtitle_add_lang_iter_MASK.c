
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_9__ {int iso639_2; } ;
typedef TYPE_2__ iso639_lang_t ;
typedef int GtkTreeView ;
typedef int GtkTreeStore ;
typedef int GtkTreeSelection ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GhbValue ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (int ,char*) ;
 TYPE_2__* FUNC_9 (int) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int *,int ,char**,int,int*,int) ;
 int * FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *,int ,char*,int,int,int) ;
 int * FUNC_18 (int *) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *,int *,int *,int ,int ,int ) ;
 int FUNC_21 (TYPE_1__*,TYPE_2__ const*) ;

void
FUNC_22(GtkTreeModel *VAR_1, GtkTreeIter *VAR_2,
                       signal_user_data_t *VAR_3)
{
    GtkTreeView * VAR_4;
    GtkTreeStore * VAR_5;
    GtkTreeIter VAR_6;
    GtkTreePath * VAR_7;
    char * VAR_8;
    int VAR_9;
    const iso639_lang_t * VAR_10;
    GhbValue * VAR_11, * VAR_12;
    GtkTreeSelection * VAR_13;

    VAR_4 = FUNC_3(FUNC_0(VAR_3->builder, "subtitle_selected_lang"));
    VAR_5 = FUNC_2(FUNC_18(VAR_4));
    VAR_13 = FUNC_19(VAR_4);


    FUNC_11(VAR_1, VAR_2, 0, &VAR_8, 1, &VAR_9, -1);
    FUNC_15(VAR_5, &VAR_6, ((void*)0));
    FUNC_17(VAR_5, &VAR_6, 0, VAR_8, 1, VAR_9, -1);
    FUNC_4(VAR_8);



    VAR_7 = FUNC_12(FUNC_1(VAR_5), &VAR_6);
    FUNC_14(VAR_13, &VAR_6);
    FUNC_20(VAR_4, VAR_7, ((void*)0), VAR_0, 0, 0);
    FUNC_13(VAR_7);


    FUNC_16(FUNC_2(VAR_1), VAR_2);


    VAR_10 = FUNC_9(VAR_9);
    VAR_11 = FUNC_10(VAR_10->iso639_2);
    VAR_12 = FUNC_8(VAR_3->settings, "SubtitleLanguageList");
    if (FUNC_6(VAR_12) == 0)
    {
        FUNC_21(VAR_3, VAR_10);
    }
    FUNC_5(VAR_12, VAR_11);
    FUNC_7(VAR_3);
}

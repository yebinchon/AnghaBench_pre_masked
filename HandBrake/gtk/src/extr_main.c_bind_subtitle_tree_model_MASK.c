
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkTreeViewColumn ;
typedef int GtkTreeView ;
typedef int GtkTreeStore ;
typedef int GtkTreeSelection ;
typedef int GtkCellRenderer ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int * FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,int ,TYPE_1__*) ;
 int * FUNC_8 () ;
 int * FUNC_9 (int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *,char*,int) ;
 int * FUNC_12 () ;
 int * FUNC_13 (int ,int *,char*,int,int *) ;
 int FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int ) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_21(signal_user_data_t *VAR_7)
{
    GtkCellRenderer *VAR_8;
    GtkCellRenderer *VAR_9;
    GtkCellRenderer *VAR_10;
    GtkCellRenderer *VAR_11;
    GtkCellRenderer *VAR_12;
    GtkTreeViewColumn *VAR_13;
    GtkTreeStore *VAR_14;
    GtkTreeView *VAR_15;
    GtkTreeSelection *VAR_16;

    FUNC_6("bind_subtitle_tree_model()\n");
    VAR_15 = FUNC_2(FUNC_0(VAR_7->builder, "subtitle_list_view"));
    VAR_16 = FUNC_19(VAR_15);
    VAR_14 = FUNC_9(6, VAR_2, VAR_2,
                                      VAR_2, VAR_2,
                                      VAR_2, VAR_1);
    FUNC_20(VAR_15, FUNC_1(VAR_14));

    VAR_8 = FUNC_8();
    VAR_9 = FUNC_8();
    VAR_10 = FUNC_8();
    VAR_11 = FUNC_5();
    VAR_12 = FUNC_5();

    VAR_13 = FUNC_12();
    FUNC_17(VAR_13, 12);
    FUNC_18(VAR_13, FUNC_4("Track Information"));
    FUNC_14(VAR_13, VAR_8, VAR_0);
    FUNC_11(VAR_13, VAR_8, "markup", 0);
    FUNC_11(VAR_13, VAR_8, "yalign", 5);
    FUNC_14(VAR_13, VAR_9, VAR_0);
    FUNC_11(VAR_13, VAR_9, "text", 1);
    FUNC_14(VAR_13, VAR_10, VAR_3);
    FUNC_11(VAR_13, VAR_10, "markup", 2);
    FUNC_11(VAR_13, VAR_10, "yalign", 5);
    FUNC_10(VAR_15, FUNC_3(VAR_13));
    FUNC_15(VAR_13, VAR_3);
    FUNC_16(VAR_13, 400);

    VAR_13 = FUNC_13(
                                    FUNC_4(""), VAR_11, "icon-name", 3, ((void*)0));
    FUNC_10(VAR_15, FUNC_3(VAR_13));

    VAR_13 = FUNC_13(
                                    FUNC_4(""), VAR_12, "icon-name", 4, ((void*)0));
    FUNC_10(VAR_15, FUNC_3(VAR_13));

    FUNC_7(VAR_16, "changed", VAR_5, VAR_7);
    FUNC_7(VAR_11, "clicked", VAR_4, VAR_7);
    FUNC_7(VAR_12, "clicked", VAR_6, VAR_7);
}

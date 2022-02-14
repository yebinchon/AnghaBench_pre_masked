
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int prefs; int settings; int builder; int globals; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int gchar ;
typedef scalar_t__ gboolean ;
typedef int GtkWidget ;


 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (TYPE_1__*,int *,scalar_t__,int ) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int ,int const*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_17 (int const*,int *) ;

__attribute__((used)) static void
FUNC_18(gboolean VAR_2, signal_user_data_t *VAR_3)
{
    GtkWidget *VAR_4;
    const gchar *VAR_5;
    gint VAR_6;

    FUNC_3("source_browse_clicked_cb ()");
    VAR_5 = FUNC_6(VAR_3->globals, "scan_source");
    GtkWidget *VAR_7;
    VAR_7 = FUNC_0(VAR_3->builder, "single_title_box");
    if (VAR_2)
        FUNC_15(VAR_7);
    else
        FUNC_14(VAR_7);
    VAR_4 = FUNC_0(VAR_3->builder, "source_dialog");
    FUNC_16(VAR_3, VAR_4);

    FUNC_15(VAR_4);
    FUNC_13(FUNC_2(VAR_4), VAR_5);

    VAR_6 = FUNC_11(FUNC_1 (VAR_4));
    FUNC_14(VAR_4);
    if (VAR_6 == VAR_0)
    {
        gchar *VAR_8;

        VAR_8 = FUNC_12 (FUNC_2 (VAR_4));
        if (VAR_8 != ((void*)0))
        {
            gint VAR_9;

            if (VAR_2)
                VAR_9 = FUNC_5(VAR_3->settings, "single_title");
            else
                VAR_9 = 0;



            if (FUNC_17(VAR_5, VAR_8) != 0)
            {
                FUNC_7(VAR_3->prefs, "default_source", VAR_8);
                FUNC_10(VAR_3->prefs, "default_source");
                FUNC_9(VAR_8, VAR_3);
            }
            FUNC_8(VAR_3, VAR_8, VAR_9, VAR_1);
            FUNC_4(VAR_8);
        }
    }
}

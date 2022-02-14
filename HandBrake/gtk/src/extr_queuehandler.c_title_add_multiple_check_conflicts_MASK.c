
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int settings_array; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GtkToggleButton ;
typedef int GtkListBox ;
typedef int GhbValue ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,int) ;
 int * FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_13(signal_user_data_t *VAR_1)
{
    gint VAR_2, VAR_3;
    GhbValue *VAR_4;
    GtkWidget *VAR_5;
    GtkListBox *VAR_6;
    GtkToggleButton *VAR_7;
    gboolean VAR_8;
    gboolean VAR_9 = VAR_0;

    VAR_6 = FUNC_1(FUNC_0(VAR_1->builder, "title_add_multiple_list"));
    VAR_2 = FUNC_6(VAR_1->settings_array);
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
        VAR_5 = FUNC_3(FUNC_8(VAR_6, VAR_3));
        VAR_7 = FUNC_2(FUNC_4(VAR_5, "title_selected"));

        VAR_4 = FUNC_5(VAR_1->settings_array, VAR_3);
        VAR_8 = FUNC_12(VAR_1->settings_array, VAR_3);
        FUNC_7(VAR_4, "title_selected", VAR_0);
        FUNC_9(VAR_7, VAR_0);
        FUNC_11(FUNC_3(VAR_5), VAR_8);
        VAR_9 |= !VAR_8;
    }
    FUNC_10(VAR_1, VAR_9);
}

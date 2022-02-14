
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gchar ;
struct TYPE_7__ {struct TYPE_7__* next; int data; } ;
typedef int GtkWidget ;
typedef int GtkComboBoxText ;
typedef TYPE_2__ GList ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(
    signal_user_data_t *VAR_0,
    GtkWidget *VAR_1)
{
    GtkComboBoxText *VAR_2;
    GList *VAR_3, *VAR_4;

    FUNC_7("source_dialog_extra_widgets ()");
    VAR_2 = FUNC_2(FUNC_0(VAR_0->builder, "source_device"));
    FUNC_14(FUNC_3(
                FUNC_11(FUNC_1(VAR_2))));

    VAR_4 = VAR_3 = FUNC_5();
    FUNC_13 (VAR_2, FUNC_4("Not Selected"));
    while (VAR_4 != ((void*)0))
    {
        gchar *VAR_5 = FUNC_10(VAR_4->data);
        FUNC_13(VAR_2, VAR_5);
        FUNC_8(VAR_5);
        FUNC_6(VAR_4->data);
        VAR_4 = VAR_4->next;
    }
    FUNC_9(VAR_3);
    FUNC_12(FUNC_1(VAR_2), 0);
}

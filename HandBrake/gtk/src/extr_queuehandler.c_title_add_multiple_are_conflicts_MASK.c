
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings_array; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GtkListBox ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static gboolean
FUNC_7(signal_user_data_t *VAR_2)
{
    GtkListBox *VAR_3;
    GtkWidget *VAR_4;
    gint VAR_5, VAR_6;

    VAR_3 = FUNC_1(FUNC_0(VAR_2->builder, "title_add_multiple_list"));
    VAR_5 = FUNC_3(VAR_2->settings_array);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        VAR_4 = FUNC_2(FUNC_4(VAR_3, VAR_6));
        if (!FUNC_6(VAR_2->settings_array, VAR_6))
        {
            FUNC_5(FUNC_2(VAR_4), VAR_0);
            return VAR_1;
        }
        FUNC_5(FUNC_2(VAR_4), VAR_1);
    }
    return VAR_0;
}

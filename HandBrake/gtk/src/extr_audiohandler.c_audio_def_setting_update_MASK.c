
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
typedef int GtkWidget ;
typedef int GtkListBoxRow ;
typedef int GhbValue ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(signal_user_data_t *VAR_1, GtkWidget *VAR_2)
{
    GtkListBoxRow *VAR_3 = FUNC_0(VAR_2);
    gint VAR_4 = FUNC_5(VAR_3);

    GhbValue *VAR_5 = FUNC_3(VAR_1->settings, "AudioList");
    int VAR_6 = FUNC_2(VAR_5);
    if (!VAR_0 && VAR_4 >= 0 && VAR_4 < VAR_6)
    {
        GhbValue *VAR_7 = FUNC_1(VAR_5, VAR_4);
        FUNC_4(VAR_7, VAR_2);
    }
}

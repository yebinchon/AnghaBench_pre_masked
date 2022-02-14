
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gchar ;
typedef int GtkWidget ;
typedef int GhbValue ;
typedef int GObject ;


 int * FUNC_0 (int ,int const*) ;
 int FUNC_1 (char*,int const*) ;
 int * FUNC_2 (int const*,int const*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;

int
FUNC_5(signal_user_data_t *VAR_0, const gchar *VAR_1, const GhbValue *VAR_2)
{
    GObject *VAR_3;
    GhbValue * VAR_4;

    FUNC_1("ghb_ui_update_from_settings() %s", VAR_1);
    if (VAR_1 == ((void*)0))
        return 0;
    VAR_4 = FUNC_2(VAR_2, VAR_1);
    if (VAR_4 == ((void*)0))
        return 0;
    VAR_3 = FUNC_0(VAR_0->builder, VAR_1);
    if (VAR_3 == ((void*)0))
    {
        FUNC_1("Failed to find widget for key: %s\n", VAR_1);
        return -1;
    }
    FUNC_3((GtkWidget*)VAR_3, VAR_4);


    FUNC_4(VAR_0->settings, (GtkWidget*)VAR_3);
    return 0;
}

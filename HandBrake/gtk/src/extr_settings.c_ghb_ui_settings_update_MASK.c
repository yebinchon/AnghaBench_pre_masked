
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gchar ;
typedef int GtkWidget ;
typedef int GhbValue ;
typedef int GObject ;


 int * FUNC_0 (int ,int const*) ;
 int FUNC_1 (char*,int const*) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int *) ;

int
FUNC_4(
    signal_user_data_t *VAR_0,
    GhbValue *VAR_1,
    const gchar *VAR_2,
    const GhbValue *VAR_3)
{
    GObject *VAR_4;

    FUNC_1("ghb_ui_update() %s", VAR_2);
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
        return 0;
    VAR_4 = FUNC_0(VAR_0->builder, VAR_2);
    if (VAR_4 == ((void*)0))
    {
        FUNC_1("Failed to find widget for key: %s\n", VAR_2);
        return -1;
    }
    FUNC_2((GtkWidget*)VAR_4, VAR_3);


    FUNC_3(VAR_1, (GtkWidget*)VAR_4);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GtkWidget ;
typedef int GhbValue ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int const*,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

void
FUNC_4(GhbValue *VAR_0, GtkWidget *VAR_1)
{
    const gchar *VAR_2 = ((void*)0);
    GhbValue *VAR_3;

    if (VAR_1 == ((void*)0)) return;
    FUNC_0("ghb_widget_to_setting");

    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 == ((void*)0)) return;
    VAR_3 = FUNC_3(VAR_1);
    if (VAR_3 != ((void*)0))
    {
        FUNC_1(VAR_0, VAR_2, VAR_3);
    }
    else
    {
        FUNC_0("No value found for %s\n", VAR_2);
    }
}

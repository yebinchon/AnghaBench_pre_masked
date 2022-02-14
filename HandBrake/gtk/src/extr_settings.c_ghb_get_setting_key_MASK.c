
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gchar ;
typedef int GtkWidget ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int const*,char*,int) ;

const gchar*
FUNC_5(GtkWidget *VAR_0)
{
    const gchar *VAR_1;

    FUNC_1("get_setting_key ()\n");
    if (VAR_0 == ((void*)0)) return ((void*)0);
    VAR_1 = FUNC_2(FUNC_0(VAR_0));

    if (VAR_1 == ((void*)0) || !FUNC_4(VAR_1, "Gtk", 3))
    {
        VAR_1 = FUNC_3(VAR_0);
    }
    if (VAR_1 == ((void*)0))
    {

        FUNC_1("Bad widget\n");
        return ((void*)0);
    }
    return VAR_1;
}

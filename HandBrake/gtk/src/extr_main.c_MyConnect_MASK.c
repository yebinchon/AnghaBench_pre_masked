
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpointer ;
typedef int gchar ;
typedef int GtkBuilder ;
typedef int GObject ;
typedef int GConnectFlags ;
typedef int GCallback ;


 int VAR_0 ;
 int FUNC_0 (char*,int const*) ;
 int FUNC_1 (char*,int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int const*,int ,int ) ;
 int FUNC_4 (int *,int const*,int ,int ) ;
 int FUNC_5 (int *,int const*,int ,int *,int) ;
 int FUNC_6 (int const*) ;

__attribute__((used)) static void
FUNC_7(
    GtkBuilder *VAR_1,
    GObject *VAR_2,
    const gchar *VAR_3,
    const gchar *VAR_4,
    GObject *VAR_5,
    GConnectFlags VAR_6,
    gpointer VAR_7)
{
    GCallback VAR_8;

    FUNC_2(VAR_2 != ((void*)0));
    FUNC_2(VAR_4 != ((void*)0));
    FUNC_2(VAR_3 != ((void*)0));



    FUNC_0("handler_name %s", VAR_4);
    FUNC_0("signal_name %s", VAR_3);
    VAR_8 = FUNC_6(VAR_4);
    if (!VAR_8)
    {
        FUNC_1("Signal handler (%s) not found", VAR_4);
        return;
    }
    if (VAR_5)
    {
        FUNC_5(VAR_2, VAR_3, VAR_8, VAR_5, VAR_6);
    }
    else
    {
        if (VAR_6 & VAR_0)
        {
            FUNC_4( VAR_2, VAR_3, VAR_8, VAR_7);
        }
        else
        {
            FUNC_3(VAR_2, VAR_3, VAR_8, VAR_7);
        }
    }
}

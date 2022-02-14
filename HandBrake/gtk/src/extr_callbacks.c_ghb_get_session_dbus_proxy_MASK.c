
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_4__ {int const* message; } ;
typedef TYPE_1__ GError ;
typedef int GDBusProxy ;
typedef int GDBusConnection ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int *,TYPE_1__**) ;
 int * FUNC_1 (int *,int ,int *,int const*,int const*,int const*,int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int const*) ;

__attribute__((used)) static GDBusProxy *
FUNC_6(const gchar *VAR_2, const gchar *VAR_3, const gchar *VAR_4)
{
    GDBusConnection *VAR_5;
    GDBusProxy *VAR_6;
    GError *VAR_7 = ((void*)0);

    FUNC_2("ghb_get_session_dbus_proxy()");
    VAR_5 = FUNC_0(VAR_0, ((void*)0), &VAR_7);
    if (VAR_5 == ((void*)0))
    {
        if (VAR_7 != ((void*)0))
        {
            FUNC_5("DBUS cannot connect: %s", VAR_7->message);
            FUNC_3(VAR_7);
        }
        return ((void*)0);
    }

    VAR_6 = FUNC_1(VAR_5, VAR_1, ((void*)0),
                                  VAR_2, VAR_3, VAR_4, ((void*)0), ((void*)0));
    if (VAR_6 == ((void*)0))
        FUNC_5("Could not get DBUS proxy: %s", VAR_2);

    FUNC_4(VAR_5);
    return VAR_6;
}

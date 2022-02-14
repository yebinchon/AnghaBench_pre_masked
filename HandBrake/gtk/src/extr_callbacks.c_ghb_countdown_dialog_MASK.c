
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int guint ;
typedef int gint ;
typedef int gchar ;
struct TYPE_6__ {int dlg; TYPE_1__* ud; int timeout; int const* action; int const* msg; } ;
typedef TYPE_2__ countdown_t ;
typedef int GtkWindow ;
typedef int GtkWidget ;
typedef scalar_t__ GtkResponseType ;
typedef int GtkMessageType ;
typedef int GSourceFunc ;
typedef int GSource ;
typedef int GMainContext ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 () ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int ,TYPE_2__*) ;
 int FUNC_9 (int ,int const*,scalar_t__,int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,int ,int ,int ,int ,int const*,int const*,int ) ;
 int FUNC_12 (int *) ;

void
FUNC_13(
    GtkMessageType VAR_3,
    const gchar *VAR_4,
    const gchar *VAR_5,
    const gchar *VAR_6,
    GSourceFunc VAR_7,
    signal_user_data_t *VAR_8,
    gint VAR_9)
{
    GtkWindow *VAR_10;
    GtkWidget *VAR_11;
    GtkResponseType VAR_12;
    guint VAR_13;
    countdown_t VAR_14;

    VAR_14.msg = VAR_4;
    VAR_14.action = VAR_5;
    VAR_14.timeout = VAR_9;
    VAR_14.ud = VAR_8;


    VAR_10 = FUNC_3(FUNC_0(VAR_8->builder, "hb_window"));
    VAR_11 = FUNC_11(VAR_10, VAR_1,
                            VAR_3, VAR_0,
                            FUNC_4("%s\n\n%s in %d seconds ..."),
                            VAR_4, VAR_5, VAR_9);
    FUNC_9( FUNC_1(VAR_11),
                           VAR_6, VAR_2,
                           ((void*)0));

    VAR_14.dlg = FUNC_2(VAR_11);
    VAR_13 = FUNC_8(1000, VAR_7, &VAR_14);
    VAR_12 = FUNC_10(FUNC_1(VAR_11));
    FUNC_12 (VAR_11);
    if (VAR_12 == VAR_2)
    {
        GMainContext *VAR_15;
        GSource *VAR_16;

        VAR_15 = FUNC_5();
        VAR_16 = FUNC_6(VAR_15, VAR_13);
        if (VAR_16 != ((void*)0))
            FUNC_7(VAR_16);
    }
}

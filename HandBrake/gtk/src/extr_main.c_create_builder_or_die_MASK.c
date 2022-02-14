
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ guint ;
typedef int gsize ;
typedef int gchar ;
struct TYPE_3__ {int message; } ;
typedef int GtkWidget ;
typedef int GtkBuilder ;
typedef int GResource ;
typedef TYPE_1__ GError ;
typedef int GBytes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *,char*,int ,int *) ;
 int FUNC_6 (int const*) ;
 int * FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,int const*,int,TYPE_1__**) ;
 int * FUNC_9 () ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int *,int ,int ,int ,int ,int const*,int ) ;
 int FUNC_12 (int *) ;

GtkBuilder*
FUNC_13(const gchar * VAR_4)
{
    guint VAR_5 = 0;
    GError *VAR_6 = ((void*)0);
    const gchar *VAR_7;
    gsize VAR_8;

    GResource *VAR_9 = FUNC_7();
    GBytes *VAR_10 = FUNC_5(VAR_9,
                                            "/fr/handbrake/ghb/ui/ghb.ui",
                                            0, ((void*)0));
    VAR_7 = FUNC_3(VAR_10, &VAR_8);

    const gchar *VAR_11 =
        FUNC_1("<b><big>Unable to create %s.</big></b>\n"
        "\n"
        "Internal error. Could not parse UI description.\n"
        "%s");
    FUNC_4("create_builder_or_die()\n");
    GtkBuilder *VAR_12 = FUNC_9();
    if (VAR_12 != ((void*)0))
        VAR_5 = FUNC_8(VAR_12, VAR_7, -1, &VAR_6);
    if (!VAR_12 || !VAR_5)
    {
        GtkWidget *VAR_13 = FUNC_11(((void*)0),
            VAR_2,
            VAR_3,
            VAR_1,
            FUNC_6(VAR_11),
            VAR_4, VAR_6->message);
        FUNC_10(FUNC_0(VAR_13));
        FUNC_12(VAR_13);
        FUNC_2(VAR_0);
    }
    return VAR_12;
}

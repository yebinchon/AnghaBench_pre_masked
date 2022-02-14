
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * prefs; int globals; int * settings; int settings_array; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int hb_title_t ;
typedef int gint ;
typedef int gchar ;
typedef int gboolean ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int const*) ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (int ,int*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int const*,int ,int ) ;
 scalar_t__ FUNC_13 (int *,int const*) ;

void
FUNC_14(
    signal_user_data_t *VAR_2,
    const gchar *VAR_3,
    gint VAR_4,
    gboolean VAR_5)
{
    int VAR_6;
    const hb_title_t *VAR_7;

    (void)VAR_7;

    FUNC_0("ghb_do_scan()");
    if (!VAR_5 && VAR_1 != ((void*)0) &&
        FUNC_13(VAR_1, VAR_3) == 0)
    {
        if (VAR_0 != ((void*)0))
        {
            VAR_4 = FUNC_4(VAR_0, "title");
            VAR_7 = FUNC_8(VAR_4, &VAR_6);
            FUNC_3(VAR_2->settings_array, VAR_6,
                              VAR_0);
            VAR_2->settings = VAR_0;
            FUNC_7(VAR_2);
            VAR_0 = ((void*)0);
        }
        else
        {
            VAR_7 = FUNC_8(VAR_4, &VAR_6);
            FUNC_9(VAR_2, VAR_6);
        }
        return;
    }
    if (VAR_1 != ((void*)0))
        FUNC_1(VAR_1);
    VAR_1 = ((void*)0);
    if (VAR_3 != ((void*)0))
    {
        const gchar *VAR_8;
        gint VAR_9;

        VAR_1 = FUNC_2(VAR_3);
        FUNC_6(VAR_2->globals, "scan_source", VAR_3);

        FUNC_11(VAR_2);
        VAR_8 = FUNC_5(VAR_2->globals, "scan_source");
        FUNC_10(VAR_2);

        VAR_9 = FUNC_4(VAR_2->prefs, "preview_count");
        FUNC_12(VAR_2, VAR_8, VAR_4, VAR_9);
    }
}

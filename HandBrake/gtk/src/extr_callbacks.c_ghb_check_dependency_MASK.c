
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef char gchar ;
typedef scalar_t__ gboolean ;
typedef int GtkWidget ;
typedef int GhbValue ;
typedef scalar_t__ GType ;
typedef int GObject ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*,scalar_t__*) ;
 int * VAR_1 ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char const*) ;
 int * FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *,char const*) ;
 char* FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int * FUNC_11 (int ,char const*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int ) ;

void
FUNC_18(
    signal_user_data_t *VAR_2,
    GtkWidget *VAR_3,
    const char *VAR_4)
{
    GObject *VAR_5;
    const gchar *VAR_6;
    GhbValue *VAR_7, *VAR_8;
    gint VAR_9, VAR_10;
    const gchar *VAR_11;
    GType VAR_12;

    if (VAR_3 != ((void*)0))
    {
        VAR_12 = FUNC_2(VAR_3);
        if (VAR_12 == VAR_0)
            if (FUNC_12(FUNC_0(VAR_3)) < 0) return;
        VAR_6 = FUNC_9(VAR_3);
    }
    else
        VAR_6 = VAR_4;

    FUNC_4("ghb_check_dependency() %s", VAR_6);

    if (VAR_1 == ((void*)0)) return;
    VAR_7 = FUNC_8(VAR_1, VAR_6);
    VAR_9 = FUNC_7(VAR_7);
    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
        gboolean VAR_13;
        gboolean VAR_14;

        VAR_8 = FUNC_6(VAR_7, VAR_10);
        VAR_11 = FUNC_10(VAR_8);
        VAR_5 = FUNC_11(VAR_2->builder, VAR_11);
        if (VAR_5 == ((void*)0))
        {
            FUNC_5("Failed to find dependent widget %s", VAR_11);
            continue;
        }
        VAR_13 = FUNC_3(VAR_2, VAR_11, &VAR_14);
        FUNC_16(FUNC_1(VAR_5), VAR_13);
        FUNC_15(FUNC_1(VAR_5), VAR_13);
        if (!VAR_13 && VAR_14)
        {
            if (FUNC_13(FUNC_1(VAR_5)))
            {
                FUNC_14(FUNC_1(VAR_5));
            }
        }
        else
        {
            if (!FUNC_13(FUNC_1(VAR_5)))
            {
                FUNC_17(FUNC_1(VAR_5));
            }
        }
    }
}

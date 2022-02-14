
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int hb_title_t ;
typedef scalar_t__ gint ;
typedef int const gchar ;
typedef int gboolean ;
typedef int GtkWindow ;
typedef int GhbValue ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int const*,int) ;
 scalar_t__ FUNC_4 (int const*,int ) ;
 int FUNC_5 (int const*) ;
 int const* FUNC_6 (int const*) ;
 int const* FUNC_7 (int *,int const*) ;
 int FUNC_8 (int const*) ;
 int * FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int const* FUNC_13 (int *,char*) ;
 int * FUNC_14 (scalar_t__,scalar_t__*) ;
 int FUNC_15 (int *,int ,int const*,int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;
 scalar_t__ FUNC_20 (int const*,int const*) ;

__attribute__((used)) static gboolean
FUNC_21(signal_user_data_t *VAR_8, GhbValue *VAR_9, gint VAR_10)
{


    gchar *VAR_11;
    const gchar *VAR_12;
    gint VAR_13, VAR_14;
    gint VAR_15, VAR_16;
    const hb_title_t *VAR_17;
    GtkWindow *VAR_18;

    VAR_18 = FUNC_1(FUNC_0(VAR_8->builder, "hb_window"));

    VAR_15 = FUNC_12(VAR_9, "title");
    VAR_17 = FUNC_14(VAR_15, &VAR_16);
    if (VAR_17 == ((void*)0)) return VAR_0;
    VAR_12 = FUNC_13(VAR_9, "destination");
    VAR_13 = FUNC_10(VAR_8->queue);
    for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
    {
        GhbValue *VAR_19, *VAR_20;
        const gchar *VAR_21;

        VAR_19 = FUNC_9(VAR_8->queue, VAR_14);
        VAR_20 = FUNC_11(VAR_19, "uiSettings");
        VAR_21 = FUNC_13(VAR_20, "destination");
        if (FUNC_20(VAR_12, VAR_21) == 0)
        {
            VAR_11 = FUNC_7(
                        FUNC_2("Destination: %s\n\n"
                        "Another queued job has specified the same destination.\n"
                        "Do you want to overwrite?"),
                        VAR_12);
            if (!FUNC_15(VAR_18, VAR_2,
                                    VAR_11, FUNC_2("Cancel"), FUNC_2("Overwrite")))
            {
                FUNC_5(VAR_11);
                return VAR_0;
            }
            FUNC_5(VAR_11);
            break;
        }
    }
    gchar *VAR_22 = FUNC_6(VAR_12);
    if (!FUNC_4(VAR_22, VAR_4))
    {
        VAR_11 = FUNC_7(
                    FUNC_2("Destination: %s\n\n"
                    "This is not a valid directory."),
                    VAR_22);
        FUNC_15(VAR_18, VAR_1,
                           VAR_11, FUNC_2("Cancel"), ((void*)0));
        FUNC_5(VAR_11);
        FUNC_5(VAR_22);
        return VAR_0;
    }


    if (FUNC_3(VAR_22, VAR_5|VAR_7) != 0)
    {
        VAR_11 = FUNC_7(
                    FUNC_2("Destination: %s\n\n"
                    "Can not read or write the directory."),
                    VAR_22);
        FUNC_15(VAR_18, VAR_1,
                           VAR_11, FUNC_2("Cancel"), ((void*)0));
        FUNC_5(VAR_11);
        FUNC_5(VAR_22);
        return VAR_0;
    }

    FUNC_5(VAR_22);
    if (FUNC_4(VAR_12, VAR_3))
    {
        VAR_11 = FUNC_7(
                    FUNC_2("Destination: %s\n\n"
                    "File already exists.\n"
                    "Do you want to overwrite?"),
                    VAR_12);
        if (!FUNC_15(VAR_18, VAR_2,
                                VAR_11, FUNC_2("Cancel"), FUNC_2("Overwrite")))
        {
            FUNC_5(VAR_11);
            return VAR_0;
        }
        FUNC_5(VAR_11);
        FUNC_8(VAR_12);
    }

    if (!FUNC_16(VAR_9, VAR_18))
    {
        return VAR_0;
    }

    if (!FUNC_18(VAR_9, VAR_18))
    {
        return VAR_0;
    }

    if (!FUNC_19(VAR_9, VAR_18))
    {
        return VAR_0;
    }

    if (!FUNC_17(VAR_9, VAR_18))
    {
        return VAR_0;
    }
    return VAR_6;
}

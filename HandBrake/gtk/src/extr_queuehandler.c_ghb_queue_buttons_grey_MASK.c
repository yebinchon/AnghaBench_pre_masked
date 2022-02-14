
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; int app; int * settings; int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int hb_title_t ;
typedef scalar_t__ gint ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GtkListBoxRow ;
typedef int GtkListBox ;
typedef int GhbValue ;
typedef int GSimpleAction ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *,int) ;
 int * FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (int *,char*) ;
 scalar_t__ FUNC_13 (int *,char*) ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int * FUNC_16 (scalar_t__,scalar_t__*) ;
 int * FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int *,int ) ;

void
FUNC_24(signal_user_data_t *VAR_6)
{
    GtkWidget * VAR_7;
    GSimpleAction * VAR_8;
    gint VAR_9;
    gint VAR_10, VAR_11;
    const hb_title_t * VAR_12;
    gint VAR_13, VAR_14;
    gboolean VAR_15, VAR_16, VAR_17, VAR_18;
    GtkListBox * VAR_19;
    GtkListBoxRow * VAR_20;
    gint VAR_21, VAR_22 = VAR_0;

    VAR_19 = FUNC_1(FUNC_0(VAR_6->builder, "queue_list"));
    VAR_20 = FUNC_17(VAR_19);

    if (VAR_20 != ((void*)0))
    {
        VAR_21 = FUNC_18(VAR_20);
        if (VAR_21 >= 0 && VAR_21 < FUNC_11(VAR_6->queue))
        {
            GhbValue * VAR_23, *VAR_24;

            VAR_23 = FUNC_10(VAR_6->queue, VAR_21);
            VAR_24 = FUNC_12(VAR_23, "uiSettings");
            VAR_22 = FUNC_13(VAR_24, "job_status");
        }
    }

    VAR_9 = FUNC_11(VAR_6->queue);
    VAR_10 = FUNC_13(VAR_6->settings, "title");
    VAR_12 = FUNC_16(VAR_10, &VAR_11);

    VAR_13 = FUNC_14();
    VAR_14 = FUNC_15();

    VAR_16 = VAR_13 &
                  (VAR_5 | VAR_4 |
                   VAR_3 | VAR_1 | VAR_2);
    VAR_15 = !(VAR_14 & VAR_3) &&
                    (VAR_12 != ((void*)0) || VAR_9 > 0);
    VAR_17 = !(VAR_14 & VAR_3) && VAR_12 != ((void*)0);


    VAR_18 = VAR_13 & VAR_2;

    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-export"));
    FUNC_9(VAR_8, !!VAR_9);
    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-add"));
    FUNC_9(VAR_8, VAR_17);
    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-add-all"));
    FUNC_9(VAR_8, VAR_17);
    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-start"));
    FUNC_9(VAR_8, VAR_15 || VAR_16);
    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-pause"));
    FUNC_9(VAR_8, VAR_16);

    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-reset"));
    FUNC_9(VAR_8, VAR_20 != ((void*)0));

    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-edit"));
    FUNC_9(VAR_8, VAR_20 != ((void*)0));

    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-open-source"));
    FUNC_9(VAR_8, VAR_20 != ((void*)0));

    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-open-dest"));
    FUNC_9(VAR_8, VAR_20 != ((void*)0));

    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-open-log-dir"));
    FUNC_9(VAR_8, VAR_22 != VAR_0);

    VAR_8 = FUNC_6(FUNC_8(FUNC_5(VAR_6->app),
                                                        "queue-open-log"));
    FUNC_9(VAR_8, VAR_22 != VAR_0);

    VAR_7 = FUNC_0 (VAR_6->builder, "queue_start");
    if (VAR_16)
    {
        FUNC_20(FUNC_3(VAR_7), "hb-stop");
        FUNC_21(FUNC_3(VAR_7), FUNC_7("Stop"));
        FUNC_22(FUNC_4(VAR_7), FUNC_7("Stop Encoding"));
    }
    else
    {
        FUNC_20(FUNC_3(VAR_7), "hb-start");
        FUNC_21(FUNC_3(VAR_7), FUNC_7("Start"));
        FUNC_22(FUNC_4(VAR_7), FUNC_7("Start Encoding"));
    }
    VAR_7 = FUNC_0 (VAR_6->builder, "queue_list_start");
    if (VAR_16)
    {
        FUNC_20(FUNC_3(VAR_7), "hb-stop");
        FUNC_21(FUNC_3(VAR_7), FUNC_7("Stop"));
        FUNC_22(FUNC_4(VAR_7), FUNC_7("Stop Encoding"));
    }
    else
    {
        FUNC_20(FUNC_3(VAR_7), "hb-start");
        FUNC_21(FUNC_3(VAR_7), FUNC_7("Start"));
        FUNC_22(FUNC_4(VAR_7), FUNC_7("Start Encoding"));
    }
    VAR_7 = FUNC_0 (VAR_6->builder, "queue_start_menu");
    if (VAR_16)
    {
        FUNC_19(FUNC_2(VAR_7), FUNC_7("S_top Encoding"));
        FUNC_23(VAR_7, FUNC_7("Stop Encoding"));
    }
    else
    {
        FUNC_19(FUNC_2(VAR_7), FUNC_7("_Start Encoding"));
        FUNC_23(VAR_7, FUNC_7("Start Encoding"));
    }

    VAR_7 = FUNC_0 (VAR_6->builder, "queue_pause");
    if (VAR_18)
    {
        FUNC_20(FUNC_3(VAR_7), "hb-start");
        FUNC_21(FUNC_3(VAR_7), FUNC_7("Resume"));
        FUNC_22(FUNC_4(VAR_7), FUNC_7("Resume Encoding"));
    }
    else
    {
        FUNC_20(FUNC_3(VAR_7), "hb-pause");
        FUNC_21(FUNC_3(VAR_7), FUNC_7("Pause"));
        FUNC_22(FUNC_4(VAR_7), FUNC_7("Pause Encoding"));
    }
    VAR_7 = FUNC_0 (VAR_6->builder, "queue_list_pause");
    if (VAR_18)
    {
        FUNC_20(FUNC_3(VAR_7), "hb-start");
        FUNC_21(FUNC_3(VAR_7), FUNC_7("Resume"));
        FUNC_22(FUNC_4(VAR_7), FUNC_7("Resume Encoding"));
    }
    else
    {
        FUNC_20(FUNC_3(VAR_7), "hb-pause");
        FUNC_21(FUNC_3(VAR_7), FUNC_7("Pause"));
        FUNC_22(FUNC_4(VAR_7), FUNC_7("Pause Encoding"));
    }
    VAR_7 = FUNC_0 (VAR_6->builder, "queue_pause_menu");
    if (VAR_18)
    {
        FUNC_19(FUNC_2(VAR_7), FUNC_7("_Resume Encoding"));
        FUNC_23(VAR_7, FUNC_7("Resume Encoding"));
    }
    else
    {
        FUNC_19(FUNC_2(VAR_7), FUNC_7("_Pause Encoding"));
        FUNC_23(VAR_7, FUNC_7("Pause Encoding"));
    }
}

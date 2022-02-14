
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * queue; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GhbValue ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int * FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int ) ;
 scalar_t__ FUNC_11 () ;
 int * FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int **) ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;

gboolean
FUNC_21(signal_user_data_t *VAR_5)
{
    GhbValue *VAR_6;
    gint VAR_7, VAR_8;
    gint VAR_9;
    gint VAR_10;
    GhbValue *VAR_11, *VAR_12;

    FUNC_3("ghb_reload_queue");

find_pid:
    VAR_9 = FUNC_11();
    if (VAR_9 < 0)
        goto done;

    VAR_6 = FUNC_12(VAR_9);
    FUNC_15(VAR_9);


    VAR_7 = FUNC_5(VAR_6);
    for (VAR_8 = VAR_7-1; VAR_8 >= 0; VAR_8--)
    {
        VAR_11 = FUNC_4(VAR_6, VAR_8);
        VAR_12 = FUNC_7(VAR_11, "uiSettings");
        if (VAR_12 == ((void*)0) ||
            FUNC_9(VAR_12, "job_status") == ((void*)0))
        {
            FUNC_6(VAR_6, VAR_8);
            continue;
        }
        VAR_10 = FUNC_8(VAR_12, "job_status");
        if (VAR_10 == VAR_2 || VAR_10 == VAR_1)
        {
            FUNC_6(VAR_6, VAR_8);
            continue;
        }
    }
    VAR_7 = FUNC_5(VAR_6);
    if (VAR_7 == 0)
    {
        FUNC_18(&VAR_6);
        goto find_pid;
    }
    else
    {
        GtkWidget *VAR_13 = FUNC_0(VAR_5->builder, "show_queue");
        FUNC_20(FUNC_1(VAR_13), VAR_4);
        VAR_5->queue = VAR_6;
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        {
            VAR_11 = FUNC_4(VAR_6, VAR_8);
            VAR_12 = FUNC_7(VAR_11, "uiSettings");
            FUNC_10(VAR_12, "job_unique_id", 0);
            FUNC_10(VAR_12, "job_status", VAR_3);
            FUNC_2(VAR_5, VAR_11);
        }
        FUNC_13(VAR_5);
        FUNC_16(VAR_5->queue);
        FUNC_17(VAR_5);
        FUNC_14(VAR_5);
    }

done:
    FUNC_19();

    return VAR_0;
}

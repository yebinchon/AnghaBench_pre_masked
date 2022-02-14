
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * queue; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkWindow ;
typedef int GtkWidget ;
typedef int GtkFileFilter ;
typedef int GtkFileChooser ;
typedef int GhbValue ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int VAR_3 ;
 int * FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (int ) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 () ;
 int * FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,char*,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int * FUNC_16 (char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int **) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int *,int *) ;
 int * FUNC_22 (char*,int *,int ,int ,int ,int ,scalar_t__,int *) ;
 char* FUNC_23 (int *) ;
 int FUNC_24 (int *,char*) ;
 int FUNC_25 (int *,char*) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static void
FUNC_27(signal_user_data_t *VAR_6)
{
    GtkWidget *VAR_7;
    GtkWindow *VAR_8;

    VAR_8 = FUNC_5(FUNC_1(VAR_6->builder, "hb_window"));
    VAR_7 = FUNC_22("Queue Destination",
                      VAR_8,
                      VAR_3,
                      VAR_1, VAR_5,
                      VAR_2, VAR_4,
                      ((void*)0));


    GtkFileFilter *VAR_9;
    GtkFileChooser *VAR_10 = FUNC_3(VAR_7);
    VAR_9 = FUNC_4(FUNC_0(VAR_6->builder, "QueueFilterAll"));
    FUNC_25(VAR_9, FUNC_6("All"));
    FUNC_24(VAR_9, "*");
    FUNC_21(VAR_10, VAR_9);
    VAR_9 = FUNC_4(FUNC_0(VAR_6->builder, "QueueFilterJSON"));
    FUNC_25(VAR_9, "JSON");
    FUNC_24(VAR_9, "*.JSON");
    FUNC_24(VAR_9, "*.json");
    FUNC_21(VAR_10, VAR_9);

    if (FUNC_20(FUNC_2 (VAR_7)) != VAR_4)
    {
        FUNC_26(VAR_7);
        return;
    }

    GhbValue *VAR_11;
    char *VAR_12 = FUNC_23(FUNC_3(VAR_7));
    FUNC_26(VAR_7);

    VAR_11 = FUNC_16(VAR_12);
    if (VAR_11 != ((void*)0))
    {
        int VAR_13, VAR_14;
        VAR_14 = FUNC_11(VAR_11);
        for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
        {
            GhbValue *VAR_15, *VAR_16;

            VAR_15 = FUNC_10(VAR_11, VAR_13);
            VAR_16 = FUNC_13(VAR_15, "uiSettings");
            FUNC_19(VAR_15);
            FUNC_14(VAR_16, "job_status", VAR_0);
            FUNC_14(VAR_16, "job_unique_id", 0);

            if (VAR_6->queue == ((void*)0))
                VAR_6->queue = FUNC_12();
            FUNC_9(VAR_6->queue, VAR_15);
            FUNC_7(VAR_6, VAR_15);
        }
        FUNC_15(VAR_6);
        FUNC_17(VAR_6->queue);
        FUNC_18(&VAR_11);
    }
    FUNC_8 (VAR_12);
}

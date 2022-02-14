
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkWindow ;
typedef int GtkWidget ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int ) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (char*,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (char*,int *,int ,int ,int ,int ,scalar_t__,int *) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(signal_user_data_t *VAR_6)
{
    int VAR_7, VAR_8;
    GhbValue *VAR_9 = FUNC_9(VAR_6->queue);

    VAR_8 = FUNC_6(VAR_9);
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    {
        GhbValue *VAR_10, *VAR_11;

        VAR_10 = FUNC_5(VAR_6->queue, VAR_7);
        VAR_11 = FUNC_7(VAR_10, "uiSettings");
        if (VAR_11 == ((void*)0))
            continue;
        FUNC_8(VAR_11, "job_status", VAR_0);
    }

    GtkWidget *VAR_12;
    GtkWindow *VAR_13;

    VAR_13 = FUNC_3(FUNC_0(VAR_6->builder, "hb_window"));
    VAR_12 = FUNC_13("Queue Destination",
                      VAR_13,
                      VAR_3,
                      VAR_1, VAR_5,
                      VAR_2, VAR_4,
                      ((void*)0));
    FUNC_15(FUNC_2(VAR_12), "queue.json");
    if (FUNC_12(FUNC_1 (VAR_12)) != VAR_4)
    {
        FUNC_10(&VAR_9);
        FUNC_16(VAR_12);
        return;
    }

    char *VAR_14 = FUNC_14(FUNC_2 (VAR_12));
    FUNC_16(VAR_12);

    FUNC_11(VAR_14, VAR_9);
    FUNC_4 (VAR_14);
    FUNC_10(&VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int globals; int queue; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int GtkWidget ;
typedef int GhbValue ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*,int *) ;

void
FUNC_14(signal_user_data_t *VAR_2)
{
    gint VAR_3, VAR_4;
    GhbValue *VAR_5, *VAR_6;
    gint VAR_7;
    GtkWidget *VAR_8;

    FUNC_1("start_next_job");
    VAR_8 = FUNC_0(VAR_2->builder, "progressbar");
    FUNC_12(VAR_8);

    VAR_3 = FUNC_3(VAR_2->queue);
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {

        VAR_5 = FUNC_2(VAR_2->queue, VAR_4);
        VAR_6 = FUNC_4(VAR_5, "uiSettings");
        VAR_7 = FUNC_5(VAR_6, "job_status");
        if (VAR_7 == VAR_1)
        {
            FUNC_7(VAR_2);
            FUNC_13(VAR_2, VAR_5);
            FUNC_10(VAR_2);
            return;
        }
    }

    FUNC_9(VAR_2);
    FUNC_8(VAR_2);
    FUNC_10(VAR_2);
    FUNC_11(VAR_8);
    FUNC_6(VAR_2->globals, "SkipDiskFreeCheck", VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int builder; int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkListBoxRow ;
typedef int GtkListBox ;
typedef int GhbValue ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int * FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;
 int * FUNC_12 (int *,int) ;

__attribute__((used)) static void
FUNC_13(signal_user_data_t *VAR_1, int VAR_2)
{
    GtkListBox * VAR_3;
    GtkListBoxRow * VAR_4;
    GhbValue * VAR_5, * VAR_6;

    if (VAR_2 < 0 || VAR_2 >= FUNC_5(VAR_1->queue))
    {
        return;
    }

    VAR_5 = FUNC_4(VAR_1->queue, VAR_2);
    VAR_6 = FUNC_8(VAR_5, "uiSettings");
    int VAR_7 = FUNC_9(VAR_6, "job_status");
    if (VAR_7 == VAR_0)
    {

        if (!FUNC_7(VAR_1, ((void*)0)))
        {
            return;
        }
        int VAR_8 = FUNC_9(VAR_6, "job_unique_id");
        FUNC_10(VAR_8);
    }
    FUNC_6(VAR_1->queue, VAR_2);


    VAR_3 = FUNC_2(FUNC_0(VAR_1->builder, "queue_list"));
    VAR_4 = FUNC_12(VAR_3, VAR_2);
    FUNC_11(FUNC_1(VAR_3), FUNC_3(VAR_4));
}

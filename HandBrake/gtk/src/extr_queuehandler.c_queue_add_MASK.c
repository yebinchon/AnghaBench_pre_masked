
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * queue; int * prefs; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
typedef int gboolean ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static gboolean
FUNC_15(signal_user_data_t *VAR_3, GhbValue *VAR_4, gint VAR_5)
{

    if (!FUNC_14(VAR_3, VAR_4, VAR_5))
    {
        return VAR_0;
    }

    if (VAR_3->queue == ((void*)0))
        VAR_3->queue = FUNC_2();

    FUNC_7(VAR_4);

    GhbValue *VAR_6 = FUNC_9(VAR_4);
    GhbValue *VAR_7 = FUNC_8(VAR_4);
    GhbValue *VAR_8 = FUNC_13(VAR_4);

    FUNC_4(VAR_8, "Job");
    FUNC_4(VAR_8, "Title");

    GhbValue *VAR_9 = FUNC_3();
    FUNC_5(VAR_9, "uiSettings", VAR_8);
    FUNC_5(VAR_9, "Job", FUNC_13(VAR_7));
    FUNC_5(VAR_9, "Title", FUNC_13(VAR_6));




    FUNC_5(VAR_8, "Preferences", FUNC_13(VAR_3->prefs));


    FUNC_6(VAR_8, "job_status", VAR_1);
    FUNC_6(VAR_8, "job_unique_id", 0);

    FUNC_1(VAR_3->queue, VAR_9);
    FUNC_0(VAR_3, VAR_9);
    FUNC_11(VAR_3->queue);
    FUNC_12(VAR_3);
    FUNC_10(VAR_3);

    return VAR_2;
}

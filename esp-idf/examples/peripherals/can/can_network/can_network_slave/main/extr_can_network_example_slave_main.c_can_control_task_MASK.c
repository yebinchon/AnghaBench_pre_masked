
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tx_task_action_t ;
typedef int rx_task_action_t ;
struct TYPE_3__ {scalar_t__ msgs_to_tx; } ;
typedef TYPE_1__ can_status_info_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(void *VAR_16)
{
    FUNC_10(VAR_11, VAR_13);
    tx_task_action_t VAR_17;
    rx_task_action_t VAR_18;

    for (int VAR_19 = 0; VAR_19 < VAR_2; VAR_19++) {
        FUNC_0(FUNC_3());
        FUNC_1(VAR_0, "Driver started");


        VAR_18 = VAR_3;
        FUNC_8(VAR_14, &VAR_18, VAR_13);
        FUNC_10(VAR_11, VAR_13);


        VAR_17 = VAR_8;
        FUNC_8(VAR_15, &VAR_17, VAR_13);
        FUNC_10(VAR_11, VAR_13);


        VAR_18 = VAR_4;
        FUNC_8(VAR_14, &VAR_18, VAR_13);
        FUNC_10(VAR_11, VAR_13);


        VAR_17 = VAR_7;
        VAR_18 = VAR_5;
        FUNC_8(VAR_15, &VAR_17, VAR_13);
        FUNC_8(VAR_14, &VAR_18, VAR_13);
        FUNC_10(VAR_11, VAR_13);


        VAR_17 = VAR_9;
        FUNC_8(VAR_15, &VAR_17, VAR_13);
        FUNC_10(VAR_11, VAR_13);


        can_status_info_t VAR_20;
        FUNC_2(&VAR_20);
        while (VAR_20.msgs_to_tx > 0) {
            FUNC_6(FUNC_5(100));
            FUNC_2(&VAR_20);
        }

        FUNC_0(FUNC_4());
        FUNC_1(VAR_0, "Driver stopped");
        FUNC_6(FUNC_5(VAR_1));
    }


    VAR_17 = VAR_10;
    VAR_18 = VAR_6;
    FUNC_8(VAR_15, &VAR_17, VAR_13);
    FUNC_8(VAR_14, &VAR_18, VAR_13);


    FUNC_9(VAR_12);
    FUNC_7(((void*)0));
}

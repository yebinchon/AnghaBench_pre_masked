
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tx_task_action_t ;
typedef int rx_task_action_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int FUNC_5 (char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,char*,int,int *,int ,int *,int ) ;

void FUNC_14(void)
{

    for (int VAR_17 = 3; VAR_17 > 0; VAR_17--) {
        FUNC_5("Slave starting in %d\n", VAR_17);
        FUNC_8(FUNC_4(1000));
    }



    VAR_16 = FUNC_9(1, sizeof(tx_task_action_t));
    VAR_12 = FUNC_9(1, sizeof(rx_task_action_t));
    VAR_7 = FUNC_10();
    VAR_13 = FUNC_10();;
    VAR_8 = FUNC_10();;
    FUNC_13(VAR_5, "CAN_rx", 4096, ((void*)0), VAR_2, ((void*)0), VAR_15);
    FUNC_13(VAR_6, "CAN_tx", 4096, ((void*)0), VAR_3, ((void*)0), VAR_15);
    FUNC_13(VAR_4, "CAN_ctrl", 4096, ((void*)0), VAR_0, ((void*)0), VAR_15);


    FUNC_0(FUNC_2(&VAR_10, &VAR_14, &VAR_9));
    FUNC_1(VAR_1, "Driver installed");

    FUNC_11(VAR_7);
    FUNC_12(VAR_8, VAR_11);


    FUNC_0(FUNC_3());
    FUNC_1(VAR_1, "Driver uninstalled");


    FUNC_7(VAR_7);
    FUNC_7(VAR_13);
    FUNC_7(VAR_8);
    FUNC_6(VAR_16);
    FUNC_6(VAR_12);
}

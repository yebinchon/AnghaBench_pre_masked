
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tx_task_action_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_13)
{
    while (1) {
        tx_task_action_t VAR_14;
        FUNC_5(VAR_12, &VAR_14, VAR_8);

        if (VAR_14 == VAR_2) {

            FUNC_0(VAR_0, "Transmitting ping");
            while (FUNC_6(VAR_11, 0) != VAR_6) {
                FUNC_1(&VAR_7, VAR_8);
                FUNC_3(FUNC_2(VAR_1));
            }
        } else if (VAR_14 == VAR_3) {

            FUNC_1(&VAR_9, VAR_8);
            FUNC_0(VAR_0, "Transmitted start command");
        } else if (VAR_14 == VAR_4) {

            FUNC_1(&VAR_10, VAR_8);
            FUNC_0(VAR_0, "Transmitted stop command");
        } else if (VAR_14 == VAR_5) {
            break;
        }
    }
    FUNC_4(((void*)0));
}

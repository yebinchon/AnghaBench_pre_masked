
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ tx_task_action_t ;
struct TYPE_5__ {int* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void *VAR_14)
{
    while (1) {
        tx_task_action_t VAR_15;
        FUNC_5(VAR_13, &VAR_15, VAR_10);

        if (VAR_15 == VAR_3) {

            FUNC_1(&VAR_9, VAR_10);
            FUNC_0(VAR_1, "Transmitted ping response");
            FUNC_6(VAR_6);
        } else if (VAR_15 == VAR_2) {

            FUNC_0(VAR_1, "Start transmitting data");
            while (1) {

                uint32_t VAR_16 = FUNC_8();
                for (int VAR_17 = 0; VAR_17 < 4; VAR_17++) {
                    VAR_7.data[VAR_17] = (VAR_16 >> (VAR_17 * 8)) & 0xFF;
                }
                FUNC_1(&VAR_7, VAR_10);
                FUNC_0(VAR_1, "Transmitted data value %d", VAR_16);
                FUNC_3(FUNC_2(VAR_0));
                if (FUNC_7(VAR_11, 0) == VAR_8) {
                    break;
                }
            }
        } else if (VAR_15 == VAR_4) {

            FUNC_1(&VAR_12, VAR_10);
            FUNC_0(VAR_1, "Transmitted stop response");
            FUNC_6(VAR_6);
        } else if (VAR_15 == VAR_5) {
            break;
        }
    }
    FUNC_4(((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ rx_task_action_t ;
struct TYPE_3__ {scalar_t__ identifier; int data_length_code; int* data; } ;
typedef TYPE_1__ can_message_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_13)
{
    while (1) {
        rx_task_action_t VAR_14;
        FUNC_3(VAR_11, &VAR_14, VAR_10);

        if (VAR_14 == VAR_6) {

            while (1) {
                can_message_t VAR_15;
                FUNC_1(&VAR_15, VAR_10);
                if (VAR_15.identifier == VAR_2) {
                    FUNC_4(VAR_12);
                    FUNC_4(VAR_9);
                    break;
                }
            }
        } else if (VAR_14 == VAR_5) {

            uint32_t VAR_16 = 0;
            while (VAR_16 < VAR_4) {
                can_message_t VAR_17;
                FUNC_1(&VAR_17, VAR_10);
                if (VAR_17.identifier == VAR_1) {
                    uint32_t VAR_18 = 0;
                    for (int VAR_19 = 0; VAR_19 < VAR_17.data_length_code; VAR_19++) {
                        VAR_18 |= (VAR_17.data[VAR_19] << (VAR_19 * 8));
                    }
                    FUNC_0(VAR_0, "Received data value %d", VAR_18);
                    VAR_16 ++;
                }
            }
            FUNC_4(VAR_9);
        } else if (VAR_14 == VAR_7) {

            while (1) {
                can_message_t VAR_20;
                FUNC_1(&VAR_20, VAR_10);
                if (VAR_20.identifier == VAR_3) {
                    FUNC_4(VAR_9);
                    break;
                }
            }
        } else if (VAR_14 == VAR_8) {
            break;
        }
    }
    FUNC_2(((void*)0));
}

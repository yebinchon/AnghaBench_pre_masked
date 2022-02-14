
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rx_task_action_t ;
struct TYPE_3__ {scalar_t__ identifier; } ;
typedef TYPE_1__ can_message_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_11)
{
    while (1) {
        rx_task_action_t VAR_12;
        FUNC_2(VAR_9, &VAR_12, VAR_8);
        if (VAR_12 == VAR_3) {

            can_message_t VAR_13;
            while (1) {
                FUNC_0(&VAR_13, VAR_8);
                if (VAR_13.identifier == VAR_0) {
                    FUNC_3(VAR_7);
                    break;
                }
            }
        } else if (VAR_12 == VAR_4) {

            can_message_t VAR_14;
            while (1) {
                FUNC_0(&VAR_14, VAR_8);
                if (VAR_14.identifier == VAR_1) {
                    FUNC_3(VAR_7);
                    break;
                }
            }
        } else if (VAR_12 == VAR_5) {

            can_message_t VAR_15;
            while (1) {
                FUNC_0(&VAR_15, VAR_8);
                if (VAR_15.identifier == VAR_2) {
                    FUNC_3(VAR_10);
                    FUNC_3(VAR_7);
                    break;
                }
            }
        } else if (VAR_12 == VAR_6) {
            break;
        }
    }
    FUNC_1(((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ identifier; int data_length_code; int* data; } ;
typedef TYPE_1__ can_message_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_10)
{
    FUNC_4(VAR_9, VAR_8);
    bool VAR_11 = 0;
    bool VAR_12 = 0;
    uint32_t VAR_13 = 0;

    while (VAR_13 < VAR_7) {
        can_message_t VAR_14;
        FUNC_1(&VAR_14, VAR_8);
        if (VAR_14.identifier == VAR_1) {
            FUNC_0(VAR_0, "Received master ping");
        } else if (VAR_14.identifier == VAR_5) {
            FUNC_0(VAR_0, "Received slave ping response");
        } else if (VAR_14.identifier == VAR_2) {
            FUNC_0(VAR_0, "Received master start command");
            VAR_11 = 1;
        } else if (VAR_14.identifier == VAR_4) {
            uint32_t VAR_15 = 0;
            for (int VAR_16 = 0; VAR_16 < VAR_14.data_length_code; VAR_16++) {
                VAR_15 |= (VAR_14.data[VAR_16] << (VAR_16 * 8));
            }
            FUNC_0(VAR_0, "Received data value %d", VAR_15);
        } else if (VAR_14.identifier == VAR_3) {
            FUNC_0(VAR_0, "Received master stop command");
        } else if (VAR_14.identifier == VAR_6) {
            FUNC_0(VAR_0, "Received slave stop response");
            VAR_12 = 1;
        }
        if (VAR_11 && VAR_12) {

            VAR_13++;
            VAR_11 = 0;
            VAR_12 = 0;
        }
    }

    FUNC_3(VAR_9);
    FUNC_2(((void*)0));
}

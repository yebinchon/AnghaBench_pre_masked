
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int intr_mask; scalar_t__ pad_num; int pad_val; int pad_status; int member_0; } ;
typedef TYPE_1__ touch_event_t ;
typedef int portTickType ;


 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_9)
{
    touch_event_t VAR_10 = {0};
    static uint8_t VAR_11 = 0;

    FUNC_3(100 / VAR_7);
    FUNC_2();

    while (1) {
        int VAR_12 = FUNC_4(VAR_8, &VAR_10, (portTickType)VAR_6);
        if (VAR_12 != VAR_5) {
            continue;
        }
        if (VAR_10.intr_mask & VAR_1) {

            if (VAR_10.pad_num == VAR_4[3]) {
                VAR_11 = 1;
                FUNC_1(VAR_0, "TouchSensor [%d] be actived, enter guard mode", VAR_10.pad_num);
            } else {
                if (VAR_11 == 0) {
                    FUNC_0(VAR_0, "TouchSensor [%d] be actived, status mask 0x%x", VAR_10.pad_num, VAR_10.pad_status);
                } else {
                    FUNC_1(VAR_0, "In guard mode. No response");
                }
            }
        }
        if (VAR_10.intr_mask & VAR_3) {

            if (VAR_10.pad_num == VAR_4[3]) {
                VAR_11 = 0;
                FUNC_1(VAR_0, "TouchSensor [%d] be actived, exit guard mode", VAR_10.pad_num);
            } else {
                if (VAR_11 == 0) {
                    FUNC_0(VAR_0, "TouchSensor [%d] be inactived, status mask 0x%x", VAR_10.pad_num, VAR_10.pad_status);
                }
            }
        }
        if (VAR_10.intr_mask & VAR_2) {
            FUNC_0(VAR_0, "TouchSensor [%d] measure done, raw data %d", VAR_10.pad_num, VAR_10.pad_val);
        }
    }
}

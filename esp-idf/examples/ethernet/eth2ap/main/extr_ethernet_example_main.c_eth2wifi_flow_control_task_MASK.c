
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int packet; scalar_t__ length; } ;
typedef TYPE_1__ flow_control_msg_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_8)
{
    flow_control_msg_t VAR_9;
    int VAR_10 = 0;
    uint32_t VAR_11 = 0;
    while (1) {
        if (FUNC_6(VAR_5, &VAR_9, FUNC_3(VAR_2)) == VAR_6) {
            VAR_11 = 0;
            if (VAR_7 && VAR_9.length) {
                do {
                    FUNC_4(FUNC_3(VAR_11));
                    VAR_11 += 2;
                    VAR_10 = FUNC_1(VAR_0, VAR_9.packet, VAR_9.length);
                } while (VAR_10 && VAR_11 < VAR_3);
                if (VAR_10 != VAR_1) {
                    FUNC_0(VAR_4, "WiFi send packet failed: %d", VAR_10);
                }
            }
            FUNC_2(VAR_9.packet);
        }
    }
    FUNC_5(((void*)0));
}

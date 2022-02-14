
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
typedef TYPE_1__ uart_event_t ;
struct TYPE_7__ {int event_loop_hdl; int event_queue; int uart_port; } ;
typedef TYPE_2__ esp_modem_dte_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;







 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_1)
{
    esp_modem_dte_t *VAR_2 = (esp_modem_dte_t *)VAR_1;
    uart_event_t VAR_3;
    while (1) {
        if (FUNC_8(VAR_2->event_queue, &VAR_3, FUNC_5(100))) {
            switch (VAR_3.type) {
            case 132:
                FUNC_3(VAR_2);
                break;
            case 131:
                FUNC_1(VAR_0, "HW FIFO Overflow");
                FUNC_6(VAR_2->uart_port);
                FUNC_9(VAR_2->event_queue);
                break;
            case 133:
                FUNC_1(VAR_0, "Ring Buffer Full");
                FUNC_6(VAR_2->uart_port);
                FUNC_9(VAR_2->event_queue);
                break;
            case 134:
                FUNC_1(VAR_0, "Rx Break");
                break;
            case 129:
                FUNC_0(VAR_0, "Parity Error");
                break;
            case 130:
                FUNC_0(VAR_0, "Frame Error");
                break;
            case 128:
                FUNC_4(VAR_2);
                break;
            default:
                FUNC_1(VAR_0, "unknown uart event type: %d", VAR_3.type);
                break;
            }
        }

        FUNC_2(VAR_2->event_loop_hdl, FUNC_5(50));
    }
    FUNC_7(((void*)0));
}

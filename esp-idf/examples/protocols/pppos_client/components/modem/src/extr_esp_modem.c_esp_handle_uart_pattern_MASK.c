
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buffer; int uart_port; } ;
typedef TYPE_1__ esp_modem_dte_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_7(esp_modem_dte_t *VAR_2)
{
    int VAR_3 = FUNC_5(VAR_2->uart_port);
    int VAR_4 = 0;
    if (VAR_3 != -1) {
        if (VAR_3 < VAR_0 - 1) {

            VAR_4 = VAR_3 + 1;
        } else {
            FUNC_1(VAR_1, "ESP Modem Line buffer too small");
            VAR_4 = VAR_0 - 1;
        }
        VAR_4 = FUNC_6(VAR_2->uart_port, VAR_2->buffer, VAR_4, FUNC_3(100));
        if (VAR_4) {

            VAR_2->buffer[VAR_4] = '\0';

            FUNC_2(VAR_2);
        } else {
            FUNC_0(VAR_1, "uart read bytes failed");
        }
    } else {
        FUNC_1(VAR_1, "Pattern Queue Size too small");
        FUNC_4(VAR_2->uart_port);
    }
}

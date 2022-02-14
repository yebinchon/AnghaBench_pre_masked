
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer; int ppp; int uart_port; } ;
typedef TYPE_1__ esp_modem_dte_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,size_t*) ;
 size_t FUNC_3 (int ,int ,size_t,int ) ;

__attribute__((used)) static void FUNC_4(esp_modem_dte_t *VAR_2)
{
    size_t VAR_3 = 0;
    FUNC_2(VAR_2->uart_port, &VAR_3);
    VAR_3 = FUNC_0(VAR_0, VAR_3);
    VAR_3 = FUNC_3(VAR_2->uart_port, VAR_2->buffer, VAR_3, VAR_1);

    if (VAR_3) {
        FUNC_1(VAR_2->ppp, VAR_2->buffer, VAR_3);
    }
}

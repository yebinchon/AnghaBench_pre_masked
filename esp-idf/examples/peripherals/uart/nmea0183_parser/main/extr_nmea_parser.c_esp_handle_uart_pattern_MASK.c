
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buffer; int uart_port; } ;
typedef TYPE_1__ esp_gps_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int) ;

__attribute__((used)) static void FUNC_5(esp_gps_t *VAR_3)
{
    int VAR_4 = FUNC_3(VAR_3->uart_port);
    if (VAR_4 != -1) {

        int VAR_5 = FUNC_4(VAR_3->uart_port, VAR_3->buffer, VAR_4 + 1, 100 / VAR_2);

        VAR_3->buffer[VAR_5] = '\0';

        if (FUNC_1(VAR_3, VAR_5 + 1) != VAR_0) {
            FUNC_0(VAR_1, "GPS decode line failed");
        }
    } else {
        FUNC_0(VAR_1, "Pattern Queue Size too small");
        FUNC_2(VAR_3->uart_port);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int t ;
struct TYPE_4__ {int length; void* user; int const* tx_buffer; } ;
typedef TYPE_1__ spi_transaction_t ;
typedef int spi_device_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;

void FUNC_3(spi_device_handle_t VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    esp_err_t VAR_4;
    spi_transaction_t VAR_5;
    if (VAR_3==0) return;
    FUNC_1(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.length=VAR_3*8;
    VAR_5.tx_buffer=VAR_2;
    VAR_5.user=(void*)1;
    VAR_4=FUNC_2(VAR_1, &VAR_5);
    FUNC_0(VAR_4==VAR_0);
}

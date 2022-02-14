
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int t ;
struct TYPE_4__ {int length; scalar_t__ rx_data; void* user; int flags; } ;
typedef TYPE_1__ spi_transaction_t ;
typedef int spi_device_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;

uint32_t FUNC_4(spi_device_handle_t VAR_2)
{

    FUNC_1(VAR_2, 0x04);

    spi_transaction_t VAR_3;
    FUNC_2(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.length=8*3;
    VAR_3.flags = VAR_1;
    VAR_3.user = (void*)1;

    esp_err_t VAR_4 = FUNC_3(VAR_2, &VAR_3);
    FUNC_0( VAR_4 == VAR_0 );

    return *(uint32_t*)VAR_3.rx_data;
}

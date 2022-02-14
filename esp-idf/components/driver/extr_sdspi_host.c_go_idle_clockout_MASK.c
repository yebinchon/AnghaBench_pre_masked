
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int length; int * rx_buffer; int * tx_buffer; } ;
typedef TYPE_1__ spi_transaction_t ;
typedef int data ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_0)
{

    uint8_t VAR_1[12];
    FUNC_0(VAR_1, 0xff, sizeof(VAR_1));
    spi_transaction_t VAR_2 = {
        .length = 10*8,
        .tx_buffer = VAR_1,
        .rx_buffer = VAR_1,
    };
    FUNC_1(FUNC_2(VAR_0), &VAR_2);

}

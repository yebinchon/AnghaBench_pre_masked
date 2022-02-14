
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ rx_buffer; scalar_t__ tx_buffer; } ;
typedef TYPE_1__ spi_transaction_t ;


 int FUNC_0 (char*,scalar_t__,int) ;

void FUNC_1(spi_transaction_t *VAR_0, int VAR_1)
{
    if (VAR_0->tx_buffer) FUNC_0( "master tx", VAR_0->tx_buffer, VAR_0->length/8 );
    if (VAR_0->rx_buffer) FUNC_0( "master rx", VAR_0->rx_buffer, VAR_1/8 );
}

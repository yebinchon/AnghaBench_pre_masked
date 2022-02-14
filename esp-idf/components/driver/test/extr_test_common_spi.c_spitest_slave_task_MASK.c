
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int trans_len; int * rx_buffer; scalar_t__ tx_buffer; int length; } ;
typedef TYPE_1__ spi_slave_transaction_t ;
struct TYPE_7__ {int spi; int data_received; int data_to_send; } ;
typedef TYPE_2__ spi_slave_task_context_t ;
struct TYPE_8__ {scalar_t__ start; int len; } ;
typedef TYPE_3__ slave_txdata_t ;
typedef int RingbufHandle_t ;
typedef int QueueHandle_t ;
typedef int BaseType_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,TYPE_3__*,int ) ;
 int FUNC_6 (int ,int *,int,int ) ;

void FUNC_7(void* VAR_2)
{
    spi_slave_task_context_t* VAR_3 = (spi_slave_task_context_t*) VAR_2;
    QueueHandle_t VAR_4 = VAR_3->data_to_send;
    RingbufHandle_t VAR_5 = VAR_3->data_received;
    uint8_t VAR_6[320+8];
    slave_txdata_t VAR_7;

    FUNC_0( VAR_0, "slave up" );

    while( 1 ) {
        BaseType_t VAR_8 = FUNC_5( VAR_4, &VAR_7, VAR_1 );
        FUNC_2(VAR_8);

        spi_slave_transaction_t VAR_9 = {};
        VAR_9.length = VAR_7.len;
        VAR_9.tx_buffer = VAR_7.start;
        VAR_9.rx_buffer = VAR_6+8;

        do {
            FUNC_1( FUNC_4( VAR_3->spi, &VAR_9, VAR_1 ) );
        } while ( VAR_9.trans_len <= 2 );
        FUNC_3(VAR_6, &VAR_9.trans_len, sizeof(uint32_t));
        *(uint8_t**)(VAR_6+4) = (uint8_t*)VAR_7.start;
        FUNC_0( VAR_0, "received: %d", VAR_9.trans_len );
        FUNC_6( VAR_5, VAR_6, 8+(VAR_9.trans_len+7)/8, VAR_1 );
    }
}

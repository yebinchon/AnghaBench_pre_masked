
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spi; int * data_received; int * data_to_send; } ;
typedef TYPE_1__ spi_slave_task_context_t ;
typedef int slave_txdata_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,int) ;
 int * FUNC_1 (int,int ) ;

esp_err_t FUNC_2(spi_slave_task_context_t *VAR_4)
{
    VAR_4->data_to_send = FUNC_0( 16, sizeof( slave_txdata_t ));
    if ( VAR_4->data_to_send == ((void*)0) ) {
        return VAR_0;
    }
    VAR_4->data_received = FUNC_1( 1024, VAR_2 );
    if ( VAR_4->data_received == ((void*)0) ) {
        return VAR_0;
    }
    VAR_4->spi=VAR_3;
    return VAR_1;
}

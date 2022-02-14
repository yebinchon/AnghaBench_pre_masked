
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data_received; int * data_to_send; } ;
typedef TYPE_1__ spi_slave_task_context_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(spi_slave_task_context_t *VAR_0)
{
    FUNC_0( VAR_0->data_to_send != ((void*)0) );
    FUNC_1( VAR_0->data_to_send );
    VAR_0->data_to_send = ((void*)0);
    FUNC_0( VAR_0->data_received != ((void*)0) );
    FUNC_2( VAR_0->data_received );
    VAR_0->data_received = ((void*)0);
}

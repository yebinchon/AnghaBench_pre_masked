
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int finished; int handle; } ;
typedef TYPE_1__ task_context_t ;
struct TYPE_5__ {int length; int tx_data; int flags; } ;
typedef TYPE_2__ spi_transaction_t ;
typedef int spi_device_handle_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(void* VAR_3)
{

    int VAR_4=0;
    spi_transaction_t VAR_5 = {
        .flags = VAR_0,
        .tx_data = { 0x80, 0x12, 0x34, 0x56 },
        .length = 4*8,
    };
    spi_device_handle_t VAR_6 = ((task_context_t*)VAR_3)->handle;
    for( int VAR_7 = 0; VAR_7 < 50; VAR_7 ++ ) {
        FUNC_1(FUNC_3( VAR_6, &VAR_5 ));
        FUNC_0( VAR_1, "task1:%d", VAR_4++ );
    }
    FUNC_1(FUNC_2( VAR_6, VAR_2 ));
    for( int VAR_8 = 0; VAR_8 < 50; VAR_8 ++ ) {
        FUNC_1(FUNC_3( VAR_6, &VAR_5 ));
        FUNC_0( VAR_1, "task1:%d", VAR_4++ );
    }
    FUNC_4(VAR_6);
    FUNC_0(VAR_1, "task1 terminates");
    ((task_context_t*)VAR_3)->finished = 1;
    FUNC_5(((void*)0));
}

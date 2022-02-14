
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int finished; int handle; } ;
typedef TYPE_1__ task_context_t ;
struct TYPE_7__ {int length; int tx_data; int flags; } ;
typedef TYPE_2__ spi_transaction_t ;
typedef int spi_device_handle_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_2__**,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_2__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;

void FUNC_10(void* VAR_3)
{
    int VAR_4=0;

    spi_transaction_t VAR_5 = {
        .flags = VAR_0,
        .tx_data = { 0x80, 0x12, 0x34, 0x56 },
        .length = 4*8,
    };
    spi_transaction_t *VAR_6;
    spi_device_handle_t VAR_7 = ((task_context_t*)VAR_3)->handle;
    FUNC_1(FUNC_3( VAR_7, VAR_2 ));

    for (int VAR_8 = 0; VAR_8 < 50; VAR_8 ++) {
        FUNC_1(FUNC_5(VAR_7, &VAR_5));
        FUNC_0( VAR_1, "task2: %d", VAR_4++ );
    }

    for( int VAR_9 = 0; VAR_9 < 50; VAR_9 ++ ) {
        FUNC_1(FUNC_6( VAR_7, &VAR_5, VAR_2 ));
    }
    for( int VAR_10 = 0; VAR_10 < 50; VAR_10 ++ ) {
        FUNC_1(FUNC_4(VAR_7, &VAR_6, VAR_2));
        FUNC_2(VAR_6 == &VAR_5);
        FUNC_0( VAR_1, "task2: %d", VAR_4++ );
    }
    FUNC_7(VAR_7);
    FUNC_8(1);
    FUNC_0(VAR_1, "task2 terminates");
    ((task_context_t*)VAR_3)->finished = 1;
    FUNC_9(((void*)0));
}

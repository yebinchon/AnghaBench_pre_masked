
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error_code_app; scalar_t__ total_num; int * queue; } ;
struct TYPE_5__ {TYPE_1__ prepare_write_record; } ;
typedef TYPE_2__ tGATT_TCB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(tGATT_TCB *VAR_2)
{
    FUNC_0("gatt_free_pending_prepare_write_queue");

    if (VAR_2->prepare_write_record.queue) {

        while (!FUNC_3(VAR_2->prepare_write_record.queue)) {
            FUNC_4(FUNC_1(VAR_2->prepare_write_record.queue, VAR_0));
        }
        FUNC_2(VAR_2->prepare_write_record.queue, ((void*)0));
        VAR_2->prepare_write_record.queue = ((void*)0);
    }

    VAR_2->prepare_write_record.total_num = 0;
    VAR_2->prepare_write_record.error_code_app = VAR_1;
}

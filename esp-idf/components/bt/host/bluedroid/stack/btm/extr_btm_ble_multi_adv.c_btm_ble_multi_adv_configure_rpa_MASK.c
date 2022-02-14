
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; } ;
typedef TYPE_1__ tBTM_BLE_MULTI_ADV_INST ;
struct TYPE_5__ {int front; int rear; int * inst_index_queue; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void*) ;
 TYPE_2__ VAR_2 ;

void FUNC_2 (tBTM_BLE_MULTI_ADV_INST *VAR_3)
{
    if (VAR_2.front == (VAR_2.rear + 1) % VAR_0) {
        FUNC_0("outstanding rand generation exceeded max allowed ");
        return;
    } else {
        if (VAR_2.front == -1) {
            VAR_2.front = 0;
            VAR_2.rear = 0;
        } else {
            VAR_2.rear = (VAR_2.rear + 1) % VAR_0;
        }
        VAR_2.inst_index_queue[VAR_2.rear] = VAR_3->index;
    }
    FUNC_1((void *)VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint32_t ;
typedef TYPE_1__* mnl_msg_t ;
typedef int ipc_kmsg_t ;
struct TYPE_4__ {int cmd; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2(mnl_msg_t VAR_0,
               uint32_t VAR_1)
{
    switch (VAR_0->cmd) {
        case 129:
        case 128:
            FUNC_0(*(ipc_kmsg_t*)((vm_offset_t)VAR_0-sizeof(vm_offset_t)));
            break;

        default:
            FUNC_1(VAR_0, VAR_1);
            break;
    }
}

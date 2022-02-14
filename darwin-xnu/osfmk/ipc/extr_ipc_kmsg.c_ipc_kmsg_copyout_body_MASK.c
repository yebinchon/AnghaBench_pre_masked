
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_map_t ;
typedef size_t mach_msg_type_number_t ;
typedef scalar_t__ mach_msg_size_t ;
typedef int mach_msg_return_t ;
typedef int mach_msg_ool_ports_descriptor_t ;
typedef int mach_msg_ool_descriptor_t ;
struct TYPE_25__ {int msgh_size; } ;
typedef TYPE_3__ mach_msg_header_t ;
struct TYPE_23__ {int type; } ;
struct TYPE_26__ {TYPE_1__ type; } ;
typedef TYPE_4__ mach_msg_descriptor_t ;
struct TYPE_27__ {size_t msgh_descriptor_count; } ;
typedef TYPE_5__ mach_msg_body_t ;
typedef int mach_msg_base_t ;
typedef int ipc_space_t ;
typedef TYPE_6__* ipc_kmsg_t ;
typedef int boolean_t ;
struct TYPE_28__ {TYPE_3__* ikm_header; } ;
struct TYPE_24__ {scalar_t__ max_offset; } ;


 TYPE_5__* VAR_0 ;
 TYPE_4__* VAR_1 ;




 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_0 (int *,TYPE_4__*,int,TYPE_2__*,int *) ;
 TYPE_4__* FUNC_1 (int *,TYPE_4__*,int,TYPE_2__*,int ,TYPE_6__*,int *) ;
 TYPE_4__* FUNC_2 (TYPE_4__*,TYPE_4__*,int ,int *) ;
 int FUNC_3 (char*,TYPE_3__*,int) ;
 int FUNC_4 (char*) ;

mach_msg_return_t
FUNC_5(
     ipc_kmsg_t VAR_4,
 ipc_space_t VAR_5,
 vm_map_t VAR_6,
 mach_msg_body_t *VAR_7)
{
    mach_msg_body_t *VAR_8;
    mach_msg_descriptor_t *VAR_9, *VAR_10;
    mach_msg_descriptor_t *VAR_11;
    mach_msg_type_number_t VAR_12, VAR_13;
    int VAR_14;
    mach_msg_return_t VAR_15 = VAR_2;
    boolean_t VAR_16 = (VAR_6->max_offset > VAR_3);

    VAR_8 = (mach_msg_body_t *) (VAR_4->ikm_header + 1);
    VAR_12 = VAR_8->msgh_descriptor_count;
    VAR_9 = (mach_msg_descriptor_t *) (VAR_8 + 1);

    VAR_10 = &VAR_9[VAR_12];


    if (VAR_7 != VAR_0) {
    FUNC_4("Scatter lists disabled");
 VAR_11 = (mach_msg_descriptor_t *) (VAR_7 + 1);
 VAR_13 = VAR_7->msgh_descriptor_count;
    }
    else {
 VAR_11 = VAR_1;
 VAR_13 = 0;
    }


    for (VAR_14 = VAR_12-1; VAR_14 >= 0; VAR_14--) {
        switch (VAR_9[VAR_14].type.type) {

            case 128:
                VAR_10 = FUNC_2(&VAR_9[VAR_14], VAR_10, VAR_5, &VAR_15);
                break;
            case 129:
            case 131 :
                VAR_10 = FUNC_0(
                        (mach_msg_ool_descriptor_t *)&VAR_9[VAR_14], VAR_10, VAR_16, VAR_6, &VAR_15);
                break;
            case 130 :
                VAR_10 = FUNC_1(
                        (mach_msg_ool_ports_descriptor_t *)&VAR_9[VAR_14], VAR_10, VAR_16, VAR_6, VAR_5, VAR_4, &VAR_15);
                break;
            default : {
                          FUNC_4("untyped IPC copyout body: invalid message descriptor");
                      }
        }
    }

    if(VAR_10 != VAR_9) {
        vm_offset_t VAR_17 = (vm_offset_t)VAR_10 - (vm_offset_t)VAR_9;
        FUNC_3((char *)((vm_offset_t)VAR_4->ikm_header + VAR_17), VAR_4->ikm_header, sizeof(mach_msg_base_t));
        VAR_4->ikm_header = (mach_msg_header_t *)((vm_offset_t)VAR_4->ikm_header + VAR_17);

        VAR_4->ikm_header->msgh_size -= (mach_msg_size_t)VAR_17;
    }

    return VAR_15;
}

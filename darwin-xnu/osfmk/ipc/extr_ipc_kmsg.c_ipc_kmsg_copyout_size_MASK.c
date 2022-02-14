
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* vm_map_t ;
typedef int mach_msg_size_t ;
struct TYPE_9__ {int type; } ;
struct TYPE_12__ {TYPE_1__ type; } ;
typedef TYPE_4__ mach_msg_descriptor_t ;
struct TYPE_13__ {int msgh_descriptor_count; } ;
typedef TYPE_5__ mach_msg_body_t ;
typedef TYPE_6__* ipc_kmsg_t ;
typedef int boolean_t ;
struct TYPE_14__ {TYPE_2__* ikm_header; } ;
struct TYPE_11__ {scalar_t__ max_offset; } ;
struct TYPE_10__ {int msgh_bits; int msgh_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;

mach_msg_size_t
FUNC_0(
 ipc_kmsg_t VAR_4,
 vm_map_t VAR_5)
{
    mach_msg_size_t VAR_6;

    VAR_6 = VAR_4->ikm_header->msgh_size;

    boolean_t VAR_7 = (VAR_5->max_offset > VAR_3);


 VAR_6 -= VAR_1;


    if (VAR_4->ikm_header->msgh_bits & VAR_2) {

        mach_msg_body_t *VAR_8;
        mach_msg_descriptor_t *VAR_9, *VAR_10;

        VAR_8 = (mach_msg_body_t *) (VAR_4->ikm_header + 1);
        VAR_9 = (mach_msg_descriptor_t *) (VAR_8 + 1);
        VAR_10 = VAR_9 + VAR_8->msgh_descriptor_count;

        for ( ; VAR_9 < VAR_10; VAR_9++ ) {
            switch (VAR_9->type.type) {
                case 131:
                case 129:
                case 130:
                    if(!VAR_7)
                        VAR_6 -= VAR_0;
                    break;
                case 128:
                    VAR_6 -= VAR_0;
                    break;
                default:
                    break;
            }
        }
    }
    return VAR_6;
}

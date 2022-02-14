
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ mach_msg_type_name_t ;
typedef int mach_msg_return_t ;
struct TYPE_9__ {scalar_t__ pad_end; int type; scalar_t__ disposition; scalar_t__ name; } ;
typedef TYPE_2__ mach_msg_port_descriptor_t ;
typedef int mach_msg_option_t ;
struct TYPE_10__ {scalar_t__ disposition; scalar_t__ name; } ;
typedef TYPE_3__ mach_msg_legacy_port_descriptor_t ;
typedef int mach_msg_descriptor_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_port_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_4__* ipc_kmsg_t ;
struct TYPE_11__ {TYPE_1__* ikm_header; } ;
struct TYPE_8__ {int msgh_bits; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__,int ,int ,int ) ;

mach_msg_descriptor_t *
FUNC_6(
 volatile mach_msg_port_descriptor_t *VAR_7,
 mach_msg_legacy_port_descriptor_t *VAR_8,
 ipc_space_t VAR_9,
 ipc_object_t VAR_10,
 ipc_kmsg_t VAR_11,
 mach_msg_option_t *VAR_12,
 mach_msg_return_t *VAR_13)
{
    volatile mach_msg_legacy_port_descriptor_t *VAR_14 = VAR_8;
    mach_msg_type_name_t VAR_15;
    mach_msg_type_name_t VAR_16;
    mach_port_name_t VAR_17;
    ipc_object_t VAR_18;

    VAR_15 = VAR_14->disposition;
    VAR_16 = FUNC_3(VAR_15);

    VAR_17 = (mach_port_name_t)VAR_14->name;
    if (FUNC_1(VAR_17)) {

        kern_return_t VAR_19 = FUNC_2(VAR_9, VAR_17, VAR_15, &VAR_18);
        if (VAR_19 != VAR_0) {
   if ((*VAR_12 & VAR_5) == 0) {
    FUNC_5(VAR_17, 0, 0, VAR_6);
   }
            *VAR_13 = VAR_4;
            return ((void*)0);
        }

        if ((VAR_16 == VAR_3) &&
                FUNC_4((ipc_port_t) VAR_18,
                    (ipc_port_t) VAR_10)) {
            VAR_11->ikm_header->msgh_bits |= VAR_1;
        }
        VAR_7->name = (ipc_port_t) VAR_18;
    } else {
        VAR_7->name = FUNC_0(VAR_17);
    }
    VAR_7->disposition = VAR_16;
    VAR_7->type = VAR_2;

    VAR_7->pad_end = 0;

    return (mach_msg_descriptor_t *)(VAR_8+1);
}

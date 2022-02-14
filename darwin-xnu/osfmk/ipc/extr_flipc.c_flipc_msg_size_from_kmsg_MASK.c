
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_msg_size_t ;
typedef TYPE_2__* ipc_kmsg_t ;
struct TYPE_5__ {TYPE_1__* ikm_header; } ;
struct TYPE_4__ {int msgh_bits; int msgh_size; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static mach_msg_size_t FUNC_1(ipc_kmsg_t VAR_1)
{
    mach_msg_size_t VAR_2 = VAR_1->ikm_header->msgh_size;

    if (VAR_1->ikm_header->msgh_bits & VAR_0)
        FUNC_0("flipc_msg_size_from_kmsg(): Complex messages not supported.");

    return VAR_2;
}

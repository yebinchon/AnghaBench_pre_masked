
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_msg_size_t ;
typedef int mach_msg_header_t ;
typedef TYPE_1__* ipc_kmsg_t ;
struct TYPE_4__ {scalar_t__ ikm_header; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,void const*,int ) ;

void
FUNC_2(
 mach_msg_header_t *VAR_0,
 ipc_kmsg_t VAR_1,
 mach_msg_size_t VAR_2)
{
 (void) FUNC_1((void *) VAR_0, (const void *) VAR_1->ikm_header, VAR_2);

 FUNC_0(VAR_1);
}

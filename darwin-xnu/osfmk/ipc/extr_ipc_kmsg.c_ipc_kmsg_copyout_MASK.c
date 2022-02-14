
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_map_t ;
typedef int mach_msg_return_t ;
typedef int mach_msg_option_t ;
typedef int mach_msg_body_t ;
typedef int ipc_space_t ;
typedef TYPE_2__* ipc_kmsg_t ;
struct TYPE_7__ {TYPE_1__* ikm_header; } ;
struct TYPE_6__ {int msgh_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

mach_msg_return_t
FUNC_2(
 ipc_kmsg_t VAR_3,
 ipc_space_t VAR_4,
 vm_map_t VAR_5,
 mach_msg_body_t *VAR_6,
  mach_msg_option_t VAR_7)
{
 mach_msg_return_t VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_7);
 if (VAR_8 != VAR_1) {
  return VAR_8;
 }

 if (VAR_3->ikm_header->msgh_bits & VAR_0) {
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

  if (VAR_8 != VAR_1)
   VAR_8 |= VAR_2;
 }

 return VAR_8;
}

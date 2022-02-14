
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_msg_descriptor_t ;
typedef int mach_msg_bits_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_2__* ipc_kmsg_t ;
struct TYPE_7__ {scalar_t__ ikm_voucher; TYPE_1__* ikm_header; } ;
struct TYPE_6__ {scalar_t__ msgh_local_port; scalar_t__ msgh_remote_port; int msgh_bits; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*,int ,int *) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,scalar_t__,int ) ;

void
FUNC_10(
 ipc_kmsg_t VAR_4,
 mach_msg_type_number_t VAR_5,
 mach_msg_descriptor_t *VAR_6,
 vm_offset_t VAR_7,
 vm_size_t VAR_8)
{
 ipc_object_t VAR_9;
 mach_msg_bits_t VAR_10 = VAR_4->ikm_header->msgh_bits;


 FUNC_5(VAR_4);

 VAR_9 = (ipc_object_t) VAR_4->ikm_header->msgh_remote_port;
 FUNC_4(FUNC_0(VAR_9));
 FUNC_8(VAR_9, FUNC_2(VAR_10));

 VAR_9 = (ipc_object_t) VAR_4->ikm_header->msgh_local_port;
 if (FUNC_0(VAR_9))
  FUNC_7(VAR_9, FUNC_1(VAR_10));

 VAR_9 = (ipc_object_t) VAR_4->ikm_voucher;
 if (FUNC_0(VAR_9)) {
  FUNC_4(FUNC_3(VAR_10) == VAR_1);
  FUNC_7(VAR_9, VAR_2);
  VAR_4->ikm_voucher = VAR_0;
 }

 if (VAR_7) {
  (void) FUNC_9(VAR_3, VAR_7, VAR_8);
 }

 FUNC_6(VAR_4, VAR_5, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mach_msg_descriptor_t ;
struct TYPE_8__ {int msgh_descriptor_count; } ;
typedef TYPE_2__ mach_msg_body_t ;
typedef int mach_msg_bits_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_3__* ipc_kmsg_t ;
struct TYPE_9__ {TYPE_1__* ikm_header; scalar_t__ ikm_voucher; } ;
struct TYPE_7__ {int msgh_bits; scalar_t__ msgh_local_port; scalar_t__ msgh_remote_port; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int *) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ) ;

void
FUNC_9(
 ipc_kmsg_t VAR_4)
{
 ipc_object_t VAR_5;
 mach_msg_bits_t VAR_6;


 FUNC_5(VAR_4);

 VAR_6 = VAR_4->ikm_header->msgh_bits;
 VAR_5 = (ipc_object_t) VAR_4->ikm_header->msgh_remote_port;
 if (FUNC_0(VAR_5))
  FUNC_8(VAR_5, FUNC_2(VAR_6));

 VAR_5 = (ipc_object_t) VAR_4->ikm_header->msgh_local_port;
 if (FUNC_0(VAR_5))
  FUNC_7(VAR_5, FUNC_1(VAR_6));

 VAR_5 = (ipc_object_t) VAR_4->ikm_voucher;
 if (FUNC_0(VAR_5)) {
  FUNC_4(FUNC_3(VAR_6) == VAR_2);
  FUNC_7(VAR_5, VAR_3);
  VAR_4->ikm_voucher = VAR_0;
 }

 if (VAR_6 & VAR_1) {
  mach_msg_body_t *VAR_7;

  VAR_7 = (mach_msg_body_t *) (VAR_4->ikm_header + 1);
  FUNC_6(VAR_4, VAR_7->msgh_descriptor_count,
        (mach_msg_descriptor_t *)(VAR_7 + 1));
 }
}

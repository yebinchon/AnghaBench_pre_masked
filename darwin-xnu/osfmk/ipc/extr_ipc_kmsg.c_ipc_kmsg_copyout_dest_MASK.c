
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef scalar_t__ mach_msg_type_name_t ;
typedef int mach_msg_descriptor_t ;
struct TYPE_8__ {int msgh_descriptor_count; } ;
typedef TYPE_2__ mach_msg_body_t ;
typedef int mach_msg_bits_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_3__* ipc_kmsg_t ;
struct TYPE_9__ {TYPE_1__* ikm_header; scalar_t__ ikm_voucher; } ;
struct TYPE_7__ {int msgh_bits; int msgh_voucher_port; void* msgh_remote_port; void* msgh_local_port; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int ,int *) ;
 int FUNC_14 (int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;

void
FUNC_16(
 ipc_kmsg_t VAR_5,
 ipc_space_t VAR_6)
{
 mach_msg_bits_t VAR_7;
 ipc_object_t VAR_8;
 ipc_object_t VAR_9;
 ipc_object_t VAR_10;
 mach_msg_type_name_t VAR_11;
 mach_msg_type_name_t VAR_12;
 mach_msg_type_name_t VAR_13;
 mach_port_name_t VAR_14, VAR_15, VAR_16;

 VAR_7 = VAR_5->ikm_header->msgh_bits;
 VAR_8 = (ipc_object_t) VAR_5->ikm_header->msgh_remote_port;
 VAR_9 = (ipc_object_t) VAR_5->ikm_header->msgh_local_port;
 VAR_10 = (ipc_object_t) VAR_5->ikm_voucher;
 VAR_16 = VAR_5->ikm_header->msgh_voucher_port;
 VAR_11 = FUNC_4(VAR_7);
 VAR_12 = FUNC_3(VAR_7);
 VAR_13 = FUNC_6(VAR_7);

 FUNC_7(FUNC_2(VAR_8));

 FUNC_12(VAR_5);

 FUNC_9(VAR_8);
 if (FUNC_8(VAR_8)) {
  FUNC_14(VAR_6, VAR_8, VAR_11, &VAR_14);

 } else {
  FUNC_11(VAR_8);
  FUNC_10(VAR_8);
  VAR_14 = VAR_3;
 }

 if (FUNC_2(VAR_9)) {
  FUNC_15(VAR_9, VAR_12);
  VAR_15 = VAR_4;
 } else
  VAR_15 = FUNC_1(VAR_9);

 if (FUNC_2(VAR_10)) {
  FUNC_7(VAR_13 == VAR_2);

  VAR_5->ikm_voucher = VAR_0;
  FUNC_15((ipc_object_t)VAR_10, VAR_13);
  VAR_16 = VAR_4;
 }

 VAR_5->ikm_header->msgh_bits = FUNC_5(VAR_12, VAR_11,
        VAR_13, VAR_7);
 VAR_5->ikm_header->msgh_local_port = FUNC_0(VAR_14);
 VAR_5->ikm_header->msgh_remote_port = FUNC_0(VAR_15);
 VAR_5->ikm_header->msgh_voucher_port = VAR_16;

 if (VAR_7 & VAR_1) {
  mach_msg_body_t *VAR_17;

  VAR_17 = (mach_msg_body_t *) (VAR_5->ikm_header + 1);
  FUNC_13(VAR_5, VAR_17->msgh_descriptor_count,
        (mach_msg_descriptor_t *)(VAR_17 + 1));
 }
}

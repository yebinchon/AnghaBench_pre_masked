
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_map_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ mach_msg_type_name_t ;
typedef int mach_msg_return_t ;
typedef int mach_msg_body_t ;
typedef int mach_msg_bits_t ;
typedef int ipc_space_t ;
typedef int ipc_object_t ;
typedef TYPE_2__* ipc_kmsg_t ;
struct TYPE_10__ {int ith_knote; } ;
struct TYPE_9__ {TYPE_1__* ikm_header; int ikm_voucher; } ;
struct TYPE_8__ {int msgh_bits; int msgh_voucher_port; void* msgh_local_port; void* msgh_remote_port; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int) ;
 TYPE_7__* FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_10 (int ,int ,scalar_t__,int *) ;

mach_msg_return_t
FUNC_11(
 ipc_kmsg_t VAR_5,
 ipc_space_t VAR_6,
 vm_map_t VAR_7,
 mach_msg_body_t *VAR_8)
{
 mach_msg_bits_t VAR_9 = VAR_5->ikm_header->msgh_bits;
 ipc_object_t VAR_10 = (ipc_object_t) VAR_5->ikm_header->msgh_remote_port;
 ipc_object_t VAR_11 = (ipc_object_t) VAR_5->ikm_header->msgh_local_port;
 ipc_object_t VAR_12 = (ipc_object_t) VAR_5->ikm_voucher;
 mach_msg_type_name_t VAR_13 = FUNC_3(VAR_9);
 mach_msg_type_name_t VAR_14 = FUNC_2(VAR_9);
 mach_msg_type_name_t VAR_15 = FUNC_4(VAR_9);
 mach_port_name_t VAR_16 = VAR_5->ikm_header->msgh_voucher_port;
 mach_port_name_t VAR_17, VAR_18;
 mach_msg_return_t VAR_19;


 FUNC_6()->ith_knote = VAR_1;

 FUNC_5(FUNC_1(VAR_10));
 FUNC_7(VAR_5);


 VAR_19 = (FUNC_10(VAR_6, VAR_10, VAR_13, &VAR_17) |
       FUNC_10(VAR_6, VAR_11, VAR_14, &VAR_18));

 VAR_5->ikm_header->msgh_bits = VAR_9 & VAR_3;
 VAR_5->ikm_header->msgh_remote_port = FUNC_0(VAR_17);
 VAR_5->ikm_header->msgh_local_port = FUNC_0(VAR_18);

 if (FUNC_1(VAR_12)) {
  FUNC_5(VAR_15 == VAR_4);

  VAR_5->ikm_voucher = VAR_0;
  VAR_19 |= FUNC_10(VAR_6, VAR_12, VAR_15, &VAR_16);
  VAR_5->ikm_header->msgh_voucher_port = VAR_16;
 }

 if (VAR_9 & VAR_2) {
  VAR_19 |= FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8);
 }

 return VAR_19;
}

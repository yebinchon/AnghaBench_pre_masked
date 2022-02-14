
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef int mach_msg_type_name_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_2__* ipc_kmsg_t ;
struct TYPE_5__ {TYPE_1__* ikm_header; } ;
struct TYPE_4__ {int msgh_bits; void* msgh_remote_port; void* msgh_local_port; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,scalar_t__,int ,int *) ;

void
FUNC_13(
 ipc_kmsg_t VAR_1,
 ipc_space_t VAR_2)
{
 ipc_object_t VAR_3;
 ipc_object_t VAR_4;
 mach_msg_type_name_t VAR_5;
 mach_msg_type_name_t VAR_6;
 mach_port_name_t VAR_7, VAR_8;

 VAR_3 = (ipc_object_t) VAR_1->ikm_header->msgh_remote_port;
 VAR_4 = (ipc_object_t) VAR_1->ikm_header->msgh_local_port;
 VAR_5 = FUNC_6(VAR_1->ikm_header->msgh_bits);
 VAR_6 = FUNC_4(VAR_1->ikm_header->msgh_bits);

 FUNC_7(FUNC_2(VAR_3));

 FUNC_9(VAR_3);
 if (FUNC_8(VAR_3)) {
  FUNC_12(VAR_2, VAR_3, VAR_5, &VAR_7);

 } else {
  FUNC_11(VAR_3);
  FUNC_10(VAR_3);
  VAR_7 = VAR_0;
 }

 VAR_8 = FUNC_1(VAR_4);

 VAR_1->ikm_header->msgh_bits =
  (FUNC_5(VAR_1->ikm_header->msgh_bits) |
     FUNC_3(VAR_6, VAR_5));
 VAR_1->ikm_header->msgh_local_port = FUNC_0(VAR_7);
 VAR_1->ikm_header->msgh_remote_port = FUNC_0(VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int mach_msg_size_t ;
typedef int mach_msg_return_t ;
struct TYPE_25__ {scalar_t__ sender; } ;
struct TYPE_26__ {TYPE_3__ msgh_labels; int msgh_trailer_size; int msgh_trailer_type; int msgh_audit; int msgh_sender; } ;
typedef TYPE_4__ mach_msg_max_trailer_t ;
struct TYPE_27__ {int msgh_bits; scalar_t__ msgh_remote_port; } ;
typedef TYPE_5__ mach_msg_header_t ;
struct TYPE_23__ {int msgh_descriptor_count; } ;
struct TYPE_28__ {TYPE_1__ body; } ;
typedef TYPE_6__ mach_msg_base_t ;
typedef TYPE_7__* ipc_port_t ;
typedef TYPE_8__* ipc_kmsg_t ;
struct TYPE_30__ {int ikm_size; TYPE_2__* ikm_header; } ;
struct TYPE_29__ {TYPE_8__* ip_premsg; } ;
struct TYPE_24__ {int msgh_size; } ;


 int VAR_0 ;
 TYPE_8__* VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,int) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*) ;
 TYPE_8__* FUNC_10 (int) ;
 int FUNC_11 (void*,void const*,int) ;

mach_msg_return_t
FUNC_12(
 mach_msg_header_t *VAR_11,
 mach_msg_size_t VAR_12,
 ipc_kmsg_t *VAR_13)
{
 ipc_kmsg_t VAR_14;
 mach_msg_size_t VAR_15;
 mach_msg_max_trailer_t *VAR_16;
 ipc_port_t VAR_17;

 FUNC_2(VAR_12 >= sizeof(mach_msg_header_t));
 FUNC_2((VAR_12 & 3) == 0);

 VAR_17 = (ipc_port_t)VAR_11->msgh_remote_port;

 VAR_15 = VAR_12 + VAR_10;






 if (FUNC_1(VAR_17) && FUNC_0(VAR_17)) {
  mach_msg_size_t VAR_18 = 0;

  FUNC_8(VAR_17);
  if (!FUNC_7(VAR_17)) {
   FUNC_9(VAR_17);
   return VAR_8;
  }
  FUNC_2(FUNC_0(VAR_17));
  VAR_14 = VAR_17->ip_premsg;
  if (FUNC_3(VAR_14)) {
   FUNC_9(VAR_17);
   return VAR_8;
  }







  if (VAR_15 > VAR_14->ikm_size - VAR_18) {
   FUNC_9(VAR_17);
   return VAR_9;
  }
  FUNC_4(VAR_14, VAR_17);
  FUNC_6(VAR_14, VAR_15);
  FUNC_9(VAR_17);
 }
 else
 {
  VAR_14 = FUNC_10(VAR_15);
  if (VAR_14 == VAR_1)
   return VAR_8;
 }

 (void) FUNC_11((void *) VAR_14->ikm_header, (const void *) VAR_11, VAR_12);

 FUNC_5(VAR_14);

 VAR_14->ikm_header->msgh_size = VAR_12;







 VAR_16 = (mach_msg_max_trailer_t *)
           ((vm_offset_t)VAR_14->ikm_header + VAR_12);
 VAR_16->msgh_sender = VAR_3;
 VAR_16->msgh_audit = VAR_2;
 VAR_16->msgh_trailer_type = VAR_6;
 VAR_16->msgh_trailer_size = VAR_7;

 VAR_16->msgh_labels.sender = 0;

 *VAR_13 = VAR_14;
 return VAR_5;
}

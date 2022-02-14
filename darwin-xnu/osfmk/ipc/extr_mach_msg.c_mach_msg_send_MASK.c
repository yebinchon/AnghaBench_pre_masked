
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int vm_offset_t ;
typedef int vm_map_t ;
typedef int mach_msg_timeout_t ;
typedef int mach_msg_size_t ;
typedef int mach_msg_return_t ;
typedef int mach_msg_priority_t ;
typedef int mach_msg_option_t ;
struct TYPE_17__ {int msgh_trailer_size; int msgh_trailer_type; int msgh_audit; int msgh_sender; } ;
typedef TYPE_3__ mach_msg_max_trailer_t ;
struct TYPE_18__ {int msgh_bits; } ;
typedef TYPE_4__ mach_msg_header_t ;
typedef int mach_msg_base_t ;
typedef int ipc_space_t ;
typedef TYPE_5__* ipc_kmsg_t ;
struct TYPE_19__ {TYPE_2__* ikm_header; } ;
struct TYPE_16__ {int msgh_size; } ;
struct TYPE_15__ {int audit_token; int sec_token; } ;
struct TYPE_14__ {TYPE_1__* task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 int FUNC_0 (int,...) ;
 int FUNC_1 (int,uintptr_t,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (uintptr_t) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_12__* FUNC_6 () ;
 TYPE_5__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_5__*,int ,int ,int ,int *) ;
 int FUNC_9 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,int ,int ) ;
 int FUNC_12 (void*,void const*,int) ;

mach_msg_return_t
FUNC_13(
 mach_msg_header_t *VAR_18,
 mach_msg_option_t VAR_19,
 mach_msg_size_t VAR_20,
 mach_msg_timeout_t VAR_21,
 mach_msg_priority_t VAR_22)
{
 ipc_space_t VAR_23 = FUNC_5();
 vm_map_t VAR_24 = FUNC_4();
 ipc_kmsg_t VAR_25;
 mach_msg_return_t VAR_26;
 mach_msg_size_t VAR_27;
 mach_msg_max_trailer_t *VAR_28;

 VAR_19 |= VAR_13;

 if ((VAR_20 & 3) ||
     VAR_20 < sizeof(mach_msg_header_t) ||
     (VAR_20 < sizeof(mach_msg_base_t) && (VAR_18->msgh_bits & VAR_7)))
  return VAR_14;

 if (VAR_20 > VAR_9 - VAR_17)
  return VAR_16;

 FUNC_0(FUNC_2(VAR_3,VAR_5) | VAR_2);

 VAR_27 = VAR_20 + VAR_17;

 VAR_25 = FUNC_7(VAR_27);

 if (VAR_25 == VAR_4) {
  FUNC_0(FUNC_2(VAR_3,VAR_5) | VAR_0, VAR_15);
  return VAR_15;
 }

 FUNC_1(FUNC_2(VAR_3,VAR_6) | VAR_1,
         (uintptr_t)0,
         FUNC_3((uintptr_t)VAR_25),
         0, 0,
         0);
 (void) FUNC_12((void *) VAR_25->ikm_header, (const void *) VAR_18, VAR_20);

 VAR_25->ikm_header->msgh_size = VAR_20;







 VAR_28 = (mach_msg_max_trailer_t *) ((vm_offset_t)VAR_25->ikm_header + VAR_20);
 VAR_28->msgh_sender = FUNC_6()->task->sec_token;
 VAR_28->msgh_audit = FUNC_6()->task->audit_token;
 VAR_28->msgh_trailer_type = VAR_11;
 VAR_28->msgh_trailer_size = VAR_12;

 VAR_26 = FUNC_8(VAR_25, VAR_23, VAR_24, VAR_22, &VAR_19);

 if (VAR_26 != VAR_10) {
  FUNC_10(VAR_25);
  FUNC_0(FUNC_2(VAR_3,VAR_5) | VAR_0, VAR_26);
  return VAR_26;
 }

 VAR_26 = FUNC_11(VAR_25, VAR_19, VAR_21);

 if (VAR_26 != VAR_10) {
     VAR_26 |= FUNC_9(VAR_25, VAR_23, VAR_24, VAR_8);
     (void) FUNC_12((void *) VAR_18, (const void *) VAR_25->ikm_header,
     VAR_25->ikm_header->msgh_size);
     FUNC_10(VAR_25);
     FUNC_0(FUNC_2(VAR_3,VAR_5) | VAR_0, VAR_26);
 }

 return VAR_26;
}

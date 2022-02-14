
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_3__* thread_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int mach_port_seqno_t ;
typedef int mach_port_name_t ;
typedef int mach_msg_trailer_size_t ;
typedef scalar_t__ mach_msg_size_t ;
typedef int mach_msg_return_t ;
typedef int mach_msg_option_t ;
typedef int ipc_space_t ;
typedef int ipc_object_t ;
typedef TYPE_4__* ipc_kmsg_t ;
struct TYPE_18__ {int ikm_qos_override; int ikm_qos; TYPE_2__* ikm_header; } ;
struct TYPE_17__ {int ith_state; scalar_t__ ith_msg_addr; scalar_t__ ith_rsize; int ith_option; int ith_qos_override; int ith_qos; int ith_msize; int ith_receiver_name; int ith_seqno; TYPE_4__* ith_kmsg; int ith_object; } ;
struct TYPE_16__ {TYPE_1__* msgh_remote_port; } ;
struct TYPE_15__ {int ip_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int ,int,TYPE_3__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int ,int ,int) ;
 int FUNC_10 (TYPE_4__*,int,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (int ) ;
 int VAR_10 ;
 int FUNC_13 (TYPE_4__*,int,scalar_t__,scalar_t__,int ,int ,scalar_t__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_14 (int ,int ) ;

mach_msg_return_t
FUNC_15(
 mach_msg_size_t *VAR_14)
{
 thread_t VAR_15 = FUNC_3();
 ipc_space_t VAR_16 = FUNC_2();
 vm_map_t VAR_17 = FUNC_1();

 ipc_object_t VAR_18 = VAR_15->ith_object;
 mach_msg_return_t VAR_19 = VAR_15->ith_state;
 mach_vm_address_t VAR_20 = VAR_15->ith_msg_addr;
 mach_msg_size_t VAR_21 = VAR_15->ith_rsize;
 mach_msg_option_t VAR_22 = VAR_15->ith_option;
 ipc_kmsg_t VAR_23 = VAR_15->ith_kmsg;
 mach_port_seqno_t VAR_24 = VAR_15->ith_seqno;

 mach_msg_trailer_size_t VAR_25;
 mach_msg_size_t VAR_26 = 0;





 FUNC_12(VAR_18);
 FUNC_4(VAR_18);

 if (VAR_19 != VAR_3) {

  if (VAR_19 == VAR_9) {
   if (VAR_22 & VAR_6) {

    if ((VAR_22 & VAR_8) == 0 &&
        VAR_21 >= FUNC_14(VAR_10, VAR_12)) {







     if (VAR_22 & VAR_7) {
      if (FUNC_0((char *) &VAR_15->ith_receiver_name,
           VAR_20 + FUNC_14(VAR_10, VAR_11),
           sizeof(mach_port_name_t)))
       VAR_19 = VAR_5;
     }
     if (FUNC_0((char *) &VAR_15->ith_msize,
          VAR_20 + FUNC_14(VAR_10, VAR_13),
          sizeof(mach_msg_size_t)))
      VAR_19 = VAR_5;
    }
   } else {


    FUNC_5(VAR_23);

    if (FUNC_13(VAR_23, VAR_22, VAR_20, VAR_21, VAR_24, VAR_16, &VAR_26)
        == VAR_5)
     VAR_19 = VAR_5;
   }
  }

  if (VAR_14)
   *VAR_14 = VAR_26;
  return VAR_19;
 }
 FUNC_11(VAR_23, VAR_22);

 VAR_25 = FUNC_8(VAR_23, VAR_16, VAR_22, VAR_15, VAR_24, VAR_0,
   VAR_23->ikm_header->msgh_remote_port->ip_context);

 VAR_19 = FUNC_9(VAR_23, VAR_16, VAR_17, VAR_1, VAR_22);

 if (VAR_19 != VAR_3) {


  FUNC_7(VAR_23, VAR_22);


  if ((VAR_19 &~ VAR_2) == VAR_4) {
   if (FUNC_10(VAR_23, VAR_22, VAR_20, VAR_21, VAR_25, &VAR_26) == VAR_5)
    VAR_19 = VAR_5;
  } else {
   if (FUNC_13(VAR_23, VAR_22, VAR_20, VAR_21, VAR_24, VAR_16, &VAR_26)
      == VAR_5)
    VAR_19 = VAR_5;
  }
 } else {

  VAR_15->ith_qos = VAR_23->ikm_qos;
  VAR_15->ith_qos_override = VAR_23->ikm_qos_override;
  VAR_19 = FUNC_10(VAR_23, VAR_22, VAR_20, VAR_21, VAR_25, &VAR_26);
 }

 if (VAR_14)
  *VAR_14 = VAR_26;
 return VAR_19;
}

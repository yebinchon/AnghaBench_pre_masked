
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_28__ ;
typedef struct TYPE_35__ TYPE_24__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_3__* task_t ;
typedef int security_token_t ;
struct TYPE_39__ {int msgh_trailer_size; } ;
typedef TYPE_4__ mach_msg_trailer_t ;
struct TYPE_40__ {int msgh_sender; } ;
typedef TYPE_5__ mach_msg_security_trailer_t ;
typedef int mach_msg_option_t ;
struct TYPE_41__ {scalar_t__ count; } ;
typedef TYPE_6__ mach_msg_ool_ports_descriptor_t ;
struct TYPE_42__ {int size; int deallocate; int copy; } ;
typedef TYPE_7__ mach_msg_ool_descriptor_t ;
struct TYPE_43__ {int msgh_id; int msgh_bits; scalar_t__ msgh_size; scalar_t__ msgh_local_port; scalar_t__ msgh_remote_port; } ;
typedef TYPE_8__ mach_msg_header_t ;
struct TYPE_37__ {int type; } ;
struct TYPE_44__ {TYPE_2__ type; } ;
typedef TYPE_9__ mach_msg_descriptor_t ;
struct TYPE_29__ {scalar_t__ msgh_descriptor_count; } ;
typedef TYPE_10__ mach_msg_body_t ;
typedef TYPE_11__* ipc_space_t ;
typedef TYPE_12__* ipc_port_t ;
typedef TYPE_13__* ipc_kmsg_t ;
typedef int boolean_t ;
struct TYPE_38__ {TYPE_1__* map; } ;
struct TYPE_36__ {TYPE_3__* iit_task; } ;
struct TYPE_35__ {scalar_t__ imq_qlimit; } ;
struct TYPE_34__ {scalar_t__ max_offset; } ;
struct TYPE_33__ {int start; int end; } ;
struct TYPE_32__ {TYPE_8__* ikm_header; int ikm_voucher; } ;
struct TYPE_31__ {scalar_t__ ip_receiver_name; scalar_t__ ip_receiver; TYPE_24__ ip_messages; TYPE_28__* ip_imp_task; scalar_t__ ip_tempowner; } ;
struct TYPE_30__ {TYPE_3__* is_task; } ;
typedef int KERNEL_SECURITY_TOKEN ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_28__* VAR_2 ;







 int FUNC_0 (TYPE_12__*) ;
 int FUNC_1 (int,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_2 (int ,int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_3 (int) ;
 int VAR_34 ;
 int FUNC_4 (int) ;



 int VAR_35 ;



 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 TYPE_3__* VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_3__* FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_24__*) ;
 int FUNC_8 (TYPE_12__*) ;
 int FUNC_9 (TYPE_12__*) ;
 int FUNC_10 (TYPE_12__*) ;
 int FUNC_11 (TYPE_12__*) ;
 scalar_t__ VAR_43 ;
 scalar_t__ FUNC_12 (TYPE_11__*) ;
 TYPE_17__ VAR_44 ;
 int FUNC_13 (int) ;
 int VAR_45 ;
 scalar_t__ FUNC_14 (int *,int *,int) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 scalar_t__ FUNC_17 (TYPE_3__*) ;
 scalar_t__ FUNC_18 (TYPE_3__*) ;
 scalar_t__ FUNC_19 (int ) ;

void FUNC_20(ipc_kmsg_t VAR_46,
    mach_msg_option_t VAR_47)
{
 task_t VAR_48 = VAR_41;
 ipc_port_t VAR_49, VAR_50;
 boolean_t VAR_51;
 mach_msg_header_t *VAR_52;
 mach_msg_trailer_t *VAR_53;

 int VAR_54 = 0;
 uint32_t VAR_55 = 0;
 uint32_t VAR_56 = VAR_27;
 uint32_t VAR_57 = 0;
 uint32_t VAR_58, VAR_59;







 if (FUNC_5((VAR_45 & VAR_3) == 0))
  return;
 if (!FUNC_13(FUNC_2(VAR_1,VAR_32)))
  return;

 VAR_52 = VAR_46->ikm_header;

 VAR_49 = (ipc_port_t)(VAR_52->msgh_remote_port);
 if (!FUNC_0(VAR_49))
  return;




 if ((VAR_47 & (VAR_39|VAR_38)) == (VAR_39|VAR_38))
  VAR_56 |= VAR_23;

 if (VAR_52->msgh_id >= VAR_44.start &&
     VAR_52->msgh_id < VAR_44.end + 100)
  VAR_56 |= VAR_16;

 else if (VAR_52->msgh_id == 0x77303074u )
  VAR_56 |= VAR_8;

 if (VAR_52->msgh_bits & VAR_34)
  VAR_56 |= VAR_20;

 if (FUNC_19(VAR_46->ikm_voucher))
  VAR_56 |= VAR_29;




 VAR_48 = FUNC_6();
 VAR_58 = FUNC_18(VAR_48);

 if (VAR_58 != 0) {
  if (FUNC_17(VAR_48))
   VAR_56 |= VAR_11;
  else if (FUNC_16(VAR_48))
   VAR_56 |= VAR_7;
 }

 VAR_51 = (VAR_48->map->max_offset > VAR_42);
 if (VAR_51)
  VAR_56 |= VAR_22;

 VAR_50 = (ipc_port_t)(VAR_52->msgh_local_port);
 if (VAR_50) {
  if (VAR_50->ip_messages.imq_qlimit != VAR_37)
   VAR_56 |= VAR_24;
  switch (FUNC_3(VAR_52->msgh_bits)) {
  case 129:
   VAR_56 |= VAR_25;
   break;
  default:
   break;
  }
 } else {
  VAR_56 |= VAR_17;
 }





 FUNC_10(VAR_49);
 if (!FUNC_8(VAR_49)) {

  VAR_59 = (uint32_t)0xfffffff0;
 } else if (VAR_49->ip_tempowner) {
  VAR_56 |= VAR_15;
  if (VAR_2 != VAR_49->ip_imp_task)
   VAR_59 = FUNC_18(VAR_49->ip_imp_task->iit_task);
  else
   VAR_59 = (uint32_t)0xfffffff1;
 } else if (VAR_49->ip_receiver_name == VAR_36) {

  VAR_59 = (uint32_t)0xfffffff2;
 } else {
  if (VAR_49->ip_receiver == VAR_43) {
   VAR_59 = 0;
  } else {
   ipc_space_t VAR_60;
   VAR_60 = VAR_49->ip_receiver;
   if (VAR_60 && FUNC_12(VAR_60)) {
    VAR_59 = FUNC_18(VAR_60->is_task);
    if (FUNC_17(VAR_60->is_task))
     VAR_56 |= VAR_10;
    else if (FUNC_16(VAR_60->is_task))
     VAR_56 |= VAR_6;
   } else {

    VAR_59 = (uint32_t)0xfffffff3;
   }
  }
 }

 if (VAR_49->ip_messages.imq_qlimit != VAR_37)
  VAR_56 |= VAR_13;
 if (FUNC_7(&VAR_49->ip_messages))
  VAR_56 |= VAR_12;

 VAR_54 = FUNC_9(VAR_49);

 FUNC_11(VAR_49);

 switch (VAR_54) {
 case 135:
  VAR_56 |= VAR_21;
  break;
 case 134:
 case 140:
  VAR_56 |= VAR_26;
  break;
 case 136:
 case 139:
 case 137:
 case 138:
  VAR_56 |= VAR_16;
  break;
 default:
  break;
 }

 switch(FUNC_4(VAR_52->msgh_bits)) {
 case 128:
  VAR_56 |= VAR_14;
  break;
 default:
  break;
 }





 VAR_55 = VAR_52->msgh_size - sizeof(mach_msg_header_t);

 if (VAR_52->msgh_bits & VAR_33) {
  mach_msg_body_t *VAR_61;
  mach_msg_descriptor_t *VAR_62;
  int VAR_63;

  VAR_56 |= VAR_9;

  VAR_61 = (mach_msg_body_t *)(VAR_46->ikm_header + 1);
  VAR_63 = (int)VAR_61->msgh_descriptor_count;
  VAR_62 = (mach_msg_descriptor_t *)(VAR_61 + 1);


  if (!VAR_51)
   VAR_55 -= (VAR_63 * 12);

  for (int VAR_64 = 0; VAR_64 < VAR_63; VAR_64++) {
   switch (VAR_62[VAR_64].type.type) {
   case 130:
    VAR_57++;
    if (VAR_51)
     VAR_55 -= 12;
    break;
   case 131:
   case 133: {
    mach_msg_ool_descriptor_t *VAR_65;
    VAR_65 = (mach_msg_ool_descriptor_t *)&VAR_62[VAR_64];
    VAR_56 |= VAR_18;
    VAR_55 += VAR_65->size;
    if ((VAR_65->size >= VAR_40) &&
        (VAR_65->copy == VAR_35) &&
        !VAR_65->deallocate)
     VAR_56 |= VAR_19;
    else if (VAR_65->size <= VAR_40)
     VAR_56 |= VAR_19;
    else
     VAR_56 |= VAR_28;
    if (VAR_51)
     VAR_55 -= 16;
    } break;
   case 132: {
    mach_msg_ool_ports_descriptor_t *VAR_66;
    VAR_66 = (mach_msg_ool_ports_descriptor_t *)&VAR_62[VAR_64];
    VAR_57 += VAR_66->count;
    if (VAR_51)
     VAR_55 -= 16;
    } break;
   default:
    break;
   }
  }
 }




 VAR_53 = (mach_msg_trailer_t *)((vm_offset_t)VAR_52 +
      FUNC_15((vm_offset_t)VAR_52->msgh_size));
 if (VAR_53->msgh_trailer_size <= sizeof(mach_msg_security_trailer_t)) {
  extern security_token_t VAR_67;
  mach_msg_security_trailer_t *VAR_68;
  VAR_68 = (mach_msg_security_trailer_t *)VAR_53;




  if (FUNC_14(&VAR_68->msgh_sender,
      &VAR_67,
      sizeof(VAR_67)) == 0) {
   VAR_58 = 0;
   VAR_56 &= ~(VAR_7 | VAR_11);
  }
 }

 FUNC_1(FUNC_2(VAR_1,VAR_32) | VAR_0,
   (uintptr_t)VAR_58,
   (uintptr_t)VAR_59,
   (uintptr_t)VAR_55,
   (uintptr_t)(
     ((VAR_56 & VAR_4) << VAR_5) |
     ((VAR_57 & VAR_30) << VAR_31)
   )
 );
}

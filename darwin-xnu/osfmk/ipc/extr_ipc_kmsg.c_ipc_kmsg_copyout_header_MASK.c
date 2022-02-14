
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ mach_msg_type_name_t ;
typedef int mach_msg_return_t ;
typedef int mach_msg_option_t ;
struct TYPE_22__ {int msgh_voucher_port; void* msgh_remote_port; TYPE_2__* msgh_local_port; scalar_t__ msgh_bits; scalar_t__ msgh_id; } ;
typedef TYPE_1__ mach_msg_header_t ;
typedef scalar_t__ mach_msg_bits_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;
typedef int ipc_port_timestamp_t ;
typedef TYPE_2__* ipc_port_t ;
typedef void* ipc_object_t ;
typedef TYPE_3__* ipc_kmsg_t ;
typedef TYPE_4__* ipc_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_25__ {int ie_bits; scalar_t__ ie_object; } ;
struct TYPE_24__ {TYPE_1__* ikm_header; TYPE_2__* ikm_voucher; } ;
struct TYPE_23__ {int ip_timestamp; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_5 (int,int ,uintptr_t,uintptr_t,int ,int ) ;
 int VAR_8 ;
 int FUNC_6 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_11 (uintptr_t) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (int ,int *,TYPE_4__**) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,void*,scalar_t__,int *) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (int ,int ,TYPE_4__*,scalar_t__,scalar_t__,void*) ;
 scalar_t__ FUNC_27 (int ,void*,int *,TYPE_4__**) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 scalar_t__ FUNC_33 (TYPE_2__*) ;

mach_msg_return_t
FUNC_34(
 ipc_kmsg_t VAR_24,
 ipc_space_t VAR_25,
 mach_msg_option_t VAR_26)
{
 mach_msg_header_t *VAR_27 = VAR_24->ikm_header;
 mach_msg_bits_t VAR_28 = VAR_27->msgh_bits;
 ipc_port_t VAR_29 = (ipc_port_t) VAR_27->msgh_remote_port;

 FUNC_12(FUNC_4(VAR_29));






 FUNC_25(VAR_29);

    {
 mach_msg_type_name_t VAR_30 = FUNC_8(VAR_28);
 mach_msg_type_name_t VAR_31 = FUNC_7(VAR_28);
 mach_msg_type_name_t VAR_32 = FUNC_10(VAR_28);
 ipc_port_t VAR_33 = VAR_27->msgh_local_port;
 ipc_port_t VAR_34 = VAR_6;
 mach_port_name_t VAR_35, VAR_36;

 ipc_port_t VAR_37 = VAR_24->ikm_voucher;
 ipc_port_t VAR_38 = VAR_6;
 mach_port_name_t VAR_39;

 uint32_t VAR_40 = 0;
 boolean_t VAR_41 = VAR_2;
 kern_return_t VAR_42;





 if (FUNC_4(VAR_33)) {
  VAR_40++;
  VAR_41 = VAR_23;
 }
 if (FUNC_4(VAR_37)) {
  FUNC_12(VAR_32 == VAR_14);

  if ((VAR_26 & VAR_22) != 0)
    VAR_40++;
  VAR_41 = VAR_23;
 }

 if (VAR_41) {

  FUNC_31(VAR_25);

  while(VAR_40) {
   if (!FUNC_28(VAR_25)) {
    FUNC_32(VAR_25);
    return (VAR_21|
     VAR_12);
   }

   VAR_42 = FUNC_19(VAR_25, VAR_40);
   if (VAR_8 == VAR_42)
    break;

   VAR_42 = FUNC_21(VAR_25, VAR_7);
   if (VAR_8 != VAR_42)
    return(VAR_21|
           VAR_12);

  }


  if (FUNC_4(VAR_33)) {
   ipc_entry_t VAR_43;


   if ((VAR_31 != VAR_15) &&
       FUNC_27(VAR_25, (ipc_object_t) VAR_33, &VAR_36, &VAR_43)) {

    FUNC_12(VAR_43->ie_bits & VAR_20);
   } else {
    FUNC_15(VAR_33);
    if (!FUNC_13(VAR_33)) {
     FUNC_18(VAR_33);

     VAR_34 = VAR_33;
     VAR_33 = VAR_5;
     VAR_36 = VAR_16;
     goto done_with_reply;
    }


    FUNC_12(VAR_40 > 0);
    VAR_40--;
    FUNC_20(VAR_25, &VAR_36, &VAR_43);
    FUNC_12(FUNC_2(VAR_43->ie_bits) == VAR_18);
    FUNC_12(VAR_43->ie_object == VAR_4);
    VAR_43->ie_object = (ipc_object_t) VAR_33;
   }


   FUNC_16(VAR_33);

   VAR_42 = FUNC_26(VAR_25, VAR_36, VAR_43,
            VAR_31, VAR_23, (ipc_object_t) VAR_33);
   FUNC_12(VAR_42 == VAR_8);

  } else
   VAR_36 = FUNC_1(VAR_33);

 done_with_reply:


  if (VAR_32 != VAR_11) {
   FUNC_12(VAR_32 == VAR_14);

   if (!FUNC_4(VAR_37)) {
    if ((VAR_26 & VAR_22) == 0) {
     VAR_32 = VAR_11;
    }
    VAR_39 = VAR_17;
    goto done_with_voucher;
   }


   VAR_24->ikm_voucher = VAR_6;

   if ((VAR_26 & VAR_22) != 0) {
    ipc_entry_t VAR_44;

    if (FUNC_27(VAR_25, (ipc_object_t) VAR_37,
            &VAR_39, &VAR_44)) {

     FUNC_12(VAR_44->ie_bits & VAR_19);
    } else {
     FUNC_12(VAR_40 > 0);
     VAR_40--;
     FUNC_20(VAR_25, &VAR_39, &VAR_44);
     FUNC_12(FUNC_2(VAR_44->ie_bits) == VAR_18);
     FUNC_12(VAR_44->ie_object == VAR_4);
     VAR_44->ie_object = (ipc_object_t) VAR_37;
     FUNC_15(VAR_37);
    }


    FUNC_12(FUNC_13(VAR_37));
    FUNC_12(FUNC_14(VAR_37) == VAR_3);
    VAR_42 = FUNC_26(VAR_25, VAR_39, VAR_44,
             VAR_14, VAR_23,
             (ipc_object_t) VAR_37);

   } else {
    VAR_32 = VAR_11;
    VAR_38 = VAR_37;
    VAR_39 = VAR_17;
   }
  } else {
   VAR_39 = VAR_27->msgh_voucher_port;
  }

 done_with_voucher:

  FUNC_15(VAR_29);
  FUNC_32(VAR_25);

 } else {






  FUNC_29(VAR_25);
  if (!FUNC_28(VAR_25)) {
   FUNC_30(VAR_25);
   return VAR_21|VAR_12;
  }

  FUNC_15(VAR_29);
  FUNC_30(VAR_25);

  VAR_36 = FUNC_1(VAR_33);

  if (VAR_32 != VAR_11) {
   FUNC_12(VAR_32 == VAR_14);
   if ((VAR_26 & VAR_22) == 0) {
    VAR_32 = VAR_11;
   }
   VAR_39 = VAR_17;
  } else {
   VAR_39 = VAR_27->msgh_voucher_port;
  }
 }
 if (FUNC_13(VAR_29)) {
  FUNC_22(VAR_25, (ipc_object_t) VAR_29,
     VAR_30, &VAR_35);


 } else {
  ipc_port_timestamp_t VAR_45;

  VAR_45 = VAR_29->ip_timestamp;
  FUNC_18(VAR_29);
  FUNC_17(VAR_29);

  if (FUNC_4(VAR_33)) {
   FUNC_15(VAR_33);
   if (FUNC_13(VAR_33) ||
       FUNC_3(VAR_45,
            VAR_33->ip_timestamp))
    VAR_35 = VAR_16;
   else
    VAR_35 = VAR_17;
   FUNC_18(VAR_33);
  } else
   VAR_35 = VAR_16;
 }

 if (FUNC_4(VAR_33))
  FUNC_17(VAR_33);

 if (FUNC_4(VAR_34)) {
  if (VAR_31 == VAR_15)
   FUNC_24(VAR_34);
  else
   FUNC_23(VAR_34);
 }

 if (FUNC_4(VAR_38))
  FUNC_23(VAR_38);


 if ((VAR_26 & VAR_22) != 0) {
     FUNC_5(FUNC_6(VAR_1, VAR_9) | VAR_0,
      FUNC_11((uintptr_t)VAR_24),
      (uintptr_t)VAR_24->ikm_header->msgh_bits,
      (uintptr_t)VAR_24->ikm_header->msgh_id,
      FUNC_11((uintptr_t)FUNC_33(VAR_37)),
      0);
 } else {
     FUNC_5(FUNC_6(VAR_1, VAR_10) | VAR_0,
      FUNC_11((uintptr_t)VAR_24),
      (uintptr_t)VAR_24->ikm_header->msgh_bits,
      (uintptr_t)VAR_24->ikm_header->msgh_id,
      FUNC_11((uintptr_t)FUNC_33(VAR_37)),
      0);
 }

 VAR_27->msgh_bits = FUNC_9(VAR_31, VAR_30,
         VAR_32, VAR_28);
 VAR_27->msgh_local_port = FUNC_0(VAR_35);
 VAR_27->msgh_remote_port = FUNC_0(VAR_36);
 VAR_27->msgh_voucher_port = VAR_39;
    }

    return VAR_13;
}

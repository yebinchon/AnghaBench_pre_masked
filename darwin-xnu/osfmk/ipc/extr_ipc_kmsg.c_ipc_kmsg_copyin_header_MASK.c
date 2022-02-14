
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ mach_msg_type_name_t ;
typedef int mach_msg_return_t ;
typedef int mach_msg_priority_t ;
typedef int mach_msg_option_t ;
struct TYPE_28__ {int msgh_bits; scalar_t__ msgh_voucher_port; TYPE_2__* msgh_local_port; TYPE_2__* msgh_remote_port; } ;
typedef TYPE_1__ mach_msg_header_t ;
typedef int mach_msg_bits_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef TYPE_2__* ipc_port_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_3__* ipc_kmsg_t ;
typedef TYPE_4__* ipc_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_31__ {int ie_bits; scalar_t__ ie_request; int ie_object; } ;
struct TYPE_30__ {TYPE_2__* ikm_voucher; TYPE_1__* ikm_header; } ;
struct TYPE_29__ {scalar_t__ ip_receiver; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_4__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int ,scalar_t__,TYPE_4__*) ;
 TYPE_4__* FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (TYPE_3__*,int,int ) ;
 int FUNC_21 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_24 (TYPE_2__*,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_25 (int ,scalar_t__,TYPE_4__*,scalar_t__,scalar_t__,scalar_t__*,TYPE_2__**,TYPE_2__**,int*) ;
 int FUNC_26 (int ,scalar_t__,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_27 (int ,scalar_t__,TYPE_4__*,scalar_t__,scalar_t__,scalar_t__*,TYPE_2__**,TYPE_2__**) ;
 scalar_t__ VAR_30 ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_31 (scalar_t__,int ,int ,int ) ;

mach_msg_return_t
FUNC_32(
 ipc_kmsg_t VAR_33,
 ipc_space_t VAR_34,
 mach_msg_priority_t VAR_35,
 mach_msg_option_t *VAR_36)
{
 mach_msg_header_t *VAR_37 = VAR_33->ikm_header;
 mach_msg_bits_t VAR_38 = VAR_37->msgh_bits & VAR_9;
 mach_port_name_t VAR_39 = FUNC_1(VAR_37->msgh_remote_port);
 mach_port_name_t VAR_40 = FUNC_1(VAR_37->msgh_local_port);
 mach_port_name_t VAR_41 = VAR_19;
 kern_return_t VAR_42;

 mach_msg_type_name_t VAR_43 = FUNC_6(VAR_38);
 mach_msg_type_name_t VAR_44 = FUNC_5(VAR_38);
 mach_msg_type_name_t VAR_45 = FUNC_8(VAR_38);
 ipc_object_t VAR_46 = VAR_4;
 ipc_object_t VAR_47 = VAR_4;
 ipc_port_t VAR_48 = VAR_6;
 ipc_port_t VAR_49 = VAR_6;
 ipc_port_t VAR_50 = VAR_6;
 ipc_port_t VAR_51 = VAR_6;
 ipc_port_t VAR_52 = VAR_6;
 ipc_port_t VAR_53 = VAR_6;
 ipc_entry_t VAR_54 = VAR_1;
 ipc_entry_t VAR_55 = VAR_1;
 ipc_entry_t VAR_56 = VAR_1;

 int VAR_57 = 0;




 if ((VAR_38 != VAR_37->msgh_bits) ||
     (!FUNC_9(VAR_43)) ||
     ((VAR_44 == 0) ?
      (VAR_40 != VAR_19) :
      !FUNC_9(VAR_44)))
  return VAR_24;

 if (!FUNC_10(VAR_39))
  return VAR_23;

 FUNC_29(VAR_34);
 if (!FUNC_28(VAR_34)) {
  FUNC_30(VAR_34);
  return VAR_23;
 }







 if (VAR_45 != VAR_10) {

  VAR_41 = VAR_37->msgh_voucher_port;

  if (VAR_41 == VAR_18 ||
      (VAR_45 != VAR_15 &&
       VAR_45 != VAR_12)) {
   FUNC_30(VAR_34);
   if ((*VAR_36 & VAR_27) == 0) {
    FUNC_31(VAR_41, 0, 0, VAR_32);
   }
   return VAR_26;
  }

  if (VAR_41 != VAR_19) {
   VAR_56 = FUNC_19(VAR_34, VAR_41);
   if (VAR_56 == VAR_1 ||
       (VAR_56->ie_bits & VAR_21) == 0 ||
       FUNC_12(VAR_56->ie_object) != VAR_3) {
    FUNC_30(VAR_34);
    if ((*VAR_36 & VAR_27) == 0) {
     FUNC_31(VAR_41, 0, 0, VAR_32);
    }
    return VAR_26;
   }
  } else {
   VAR_45 = VAR_15;
  }
 }






 if (VAR_39 == VAR_41) {






  VAR_54 = VAR_56;
  if (VAR_54 == VAR_1) {
   goto invalid_dest;
  }






  if (FUNC_10(VAR_40)) {
   FUNC_11(VAR_44 != 0);


   if (VAR_41 == VAR_40) {
    goto invalid_reply;
   }
   VAR_55 = FUNC_19(VAR_34, VAR_40);
   if (VAR_55 == VAR_1) {
    goto invalid_reply;
   }
   FUNC_11(VAR_54 != VAR_55);
   if (!FUNC_26(VAR_34, VAR_40, VAR_55, VAR_44)) {
    goto invalid_reply;
   }
  }
  VAR_42 = FUNC_27(VAR_34, VAR_39, VAR_54,
       VAR_43, VAR_45,
       &VAR_46, &VAR_48,
       &VAR_51);
  if (VAR_42 != VAR_8) {
   FUNC_11(VAR_42 != VAR_7);
   goto invalid_dest;
  }
  VAR_52 = (ipc_port_t)VAR_46;






  FUNC_11(VAR_43 != VAR_13);
  FUNC_11(VAR_43 != VAR_14);
  FUNC_11(VAR_43 != VAR_16);




  if (VAR_55 != VAR_1) {
   VAR_42 = FUNC_25(VAR_34, VAR_40, VAR_55,
           VAR_44, VAR_29,
           &VAR_47, &VAR_49,
           &VAR_51, &VAR_57);
   FUNC_11(VAR_57 == 0);
   FUNC_11(VAR_42 == VAR_8);
  }

 } else {
  if (VAR_39 == VAR_40) {







   VAR_54 = FUNC_19(VAR_34, VAR_39);
   if (VAR_54 == VAR_1) {
    goto invalid_dest;
   }
   VAR_55 = VAR_54;
   FUNC_11(VAR_44 != 0);





   VAR_42 = FUNC_27(VAR_34, VAR_39, VAR_54,
        VAR_43, VAR_44,
        &VAR_46, &VAR_48,
        &VAR_51);
   if (VAR_42 == VAR_7) {
    goto invalid_reply;
   } else if (VAR_42 != VAR_8) {
    goto invalid_dest;
   }
   VAR_47 = VAR_46;


  } else {
   VAR_54 = FUNC_19(VAR_34, VAR_39);
   if (VAR_54 == VAR_1) {
    goto invalid_dest;
   }
   FUNC_11(VAR_54 != VAR_56);




   if (FUNC_10(VAR_40)) {
    if (VAR_40 == VAR_41) {
     goto invalid_reply;
    }
    VAR_55 = FUNC_19(VAR_34, VAR_40);
    if (VAR_55 == VAR_1) {
     goto invalid_reply;
    }
    FUNC_11(VAR_54 != VAR_55);
    FUNC_11(VAR_44 != 0);

    if (!FUNC_26(VAR_34, VAR_40, VAR_55, VAR_44)) {
     goto invalid_reply;
    }
   }




   VAR_42 = FUNC_25(VAR_34, VAR_39, VAR_54,
           VAR_43, VAR_0,
           &VAR_46, &VAR_48,
           &VAR_51, &VAR_57);
   FUNC_11(VAR_57 == 0);
   if (VAR_42 != VAR_8) {
    goto invalid_dest;
   }
   FUNC_11(FUNC_3(VAR_46));
   FUNC_11(!FUNC_4(VAR_51));





   if (FUNC_10(VAR_40)) {
    VAR_42 = FUNC_25(VAR_34, VAR_40, VAR_55,
            VAR_44, VAR_29,
            &VAR_47, &VAR_49,
            &VAR_51, &VAR_57);
    FUNC_11(VAR_57 == 0);
    FUNC_11(VAR_42 == VAR_8);
   } else {

    VAR_47 = (ipc_object_t)FUNC_0(VAR_40);
   }
  }





  if (VAR_1 != VAR_56) {
   VAR_42 = FUNC_25(VAR_34, VAR_41, VAR_56,
           VAR_45, VAR_0,
           (ipc_object_t *)&VAR_52,
           &VAR_50,
           &VAR_53,
           &VAR_57);
   FUNC_11(VAR_57 == 0);
   FUNC_11(VAR_8 == VAR_42);
   FUNC_11(FUNC_4(VAR_52));
   FUNC_11(FUNC_13(VAR_52));
  }
 }
 FUNC_11(VAR_1 != VAR_54);
 if (VAR_1 != VAR_55)
  FUNC_11(VAR_55 != VAR_56);

 if (FUNC_2(VAR_54->ie_bits) == VAR_20) {
  FUNC_18(VAR_34, VAR_39, VAR_54);

  if (VAR_54 == VAR_55) {
   VAR_55 = VAR_1;
  }

  if (VAR_54 == VAR_56) {
   VAR_56 = VAR_1;
  }

  VAR_54 = VAR_1;
 }
 if (VAR_1 != VAR_55 &&
     FUNC_2(VAR_55->ie_bits) == VAR_20) {
  FUNC_18(VAR_34, VAR_40, VAR_55);
  VAR_55 = VAR_1;
 }
 if (VAR_1 != VAR_56 &&
     FUNC_2(VAR_56->ie_bits) == VAR_20) {
  FUNC_18(VAR_34, VAR_41, VAR_56);
  VAR_56 = VAR_1;
 }

 VAR_43 = FUNC_22(VAR_43);
 VAR_44 = FUNC_22(VAR_44);







 if (((*VAR_36 & VAR_28) != 0) &&
     VAR_43 != VAR_17 &&
     VAR_54 != VAR_1 && VAR_54->ie_request != VAR_2) {
  ipc_port_t VAR_58 = (ipc_port_t)VAR_46;

  FUNC_11(VAR_58 != VAR_6);
  FUNC_15(VAR_58);
  if (FUNC_13(VAR_58) && VAR_58->ip_receiver != VAR_30) {
   if (FUNC_14(VAR_58)) {
    FUNC_24(VAR_58, VAR_39,
                           VAR_54->ie_request,
                           *VAR_36,
            VAR_35);
    FUNC_17(VAR_58);

   } else {
    *VAR_36 |= VAR_22;
    FUNC_17(VAR_58);
   }
  } else {
   FUNC_17(VAR_58);
  }
 }

 FUNC_30(VAR_34);
 if (VAR_48 != VAR_6) {
  FUNC_21(VAR_48, VAR_39);
 }
 if (VAR_49 != VAR_6) {
  FUNC_21(VAR_49, VAR_40);
 }
 if (VAR_50 != VAR_6) {
  FUNC_21(VAR_50, VAR_41);
 }






 if (FUNC_4(VAR_52)) {

  VAR_33->ikm_voucher = VAR_52;
  VAR_45 = VAR_15;
 }

 VAR_37->msgh_bits = FUNC_7(VAR_43, VAR_44, VAR_45, VAR_38);
 VAR_37->msgh_remote_port = (ipc_port_t)VAR_46;
 VAR_37->msgh_local_port = (ipc_port_t)VAR_47;


 FUNC_20(VAR_33, *VAR_36, VAR_35);

 if (VAR_51 != VAR_6)
  FUNC_16(VAR_51);

 if (VAR_53 != VAR_6)
  FUNC_16(VAR_53);

 return VAR_11;

invalid_reply:
 FUNC_30(VAR_34);

 if (VAR_51 != VAR_6)
  FUNC_16(VAR_51);

 FUNC_11(VAR_52 == VAR_6);
 FUNC_11(VAR_50 == VAR_6);

 if ((*VAR_36 & VAR_27) == 0) {
  FUNC_31(VAR_40, 0, 0, VAR_31);
 }
 return VAR_25;

invalid_dest:
 FUNC_30(VAR_34);

 if (VAR_51 != VAR_6)
  FUNC_16(VAR_51);

 if (VAR_49 != VAR_6)
  FUNC_21(VAR_49, VAR_40);

 FUNC_11(VAR_52 == VAR_6);
 FUNC_11(VAR_50 == VAR_6);

 return VAR_23;
}

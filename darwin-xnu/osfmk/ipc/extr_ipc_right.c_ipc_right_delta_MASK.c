
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint64_t ;
typedef int mach_port_urefs_t ;
typedef int mach_port_right_t ;
typedef int mach_port_name_t ;
typedef int mach_port_mscount_t ;
typedef int mach_port_delta_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_pset_t ;
typedef TYPE_1__* ipc_port_t ;
typedef int ipc_object_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef int ipc_entry_bits_t ;
struct TYPE_24__ {int ie_bits; void* ie_object; int ie_request; } ;
struct TYPE_23__ {scalar_t__ ip_receiver; int ip_receiver_name; int ip_mscount; struct TYPE_23__* ip_nsrequest; int ip_srights; int ip_sorights; int * ip_pdrequest; int ip_context; int ip_guarded; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
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
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (scalar_t__,int ,TYPE_2__*) ;
 int FUNC_11 (scalar_t__,int ,TYPE_2__*) ;
 int FUNC_12 (scalar_t__,int ,int ,TYPE_2__*) ;
 int FUNC_13 (scalar_t__,int ,int ,TYPE_2__*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (scalar_t__,TYPE_1__*,int ,TYPE_2__*) ;
 TYPE_1__* FUNC_20 (scalar_t__,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_25 (int ,int ,int ,int ) ;
 int FUNC_26 (char*,int,int ,void*,void*) ;

kern_return_t
FUNC_27(
 ipc_space_t VAR_21,
 mach_port_name_t VAR_22,
 ipc_entry_t VAR_23,
 mach_port_right_t VAR_24,
 mach_port_delta_t VAR_25)
{
 ipc_port_t VAR_26 = VAR_5;
 ipc_entry_bits_t VAR_27;

 VAR_27 = VAR_23->ie_bits;
 FUNC_4(FUNC_23(VAR_21));
 FUNC_4(VAR_24 < VAR_9);



 switch (VAR_24) {
     case 131: {
  ipc_pset_t VAR_28;

  if ((VAR_27 & VAR_11) == 0) {
   FUNC_25(VAR_22, 0, 0, VAR_18);
   goto invalid_right;
  }

  FUNC_4(FUNC_0(VAR_27) == VAR_11);
  FUNC_4(FUNC_1(VAR_27) == 0);
  FUNC_4(VAR_23->ie_request == VAR_2);

  if (VAR_25 == 0)
   goto success;

  if (VAR_25 != -1)
   goto invalid_value;

  VAR_28 = (ipc_pset_t) VAR_23->ie_object;
  FUNC_4(VAR_28 != VAR_4);

  VAR_23->ie_object = VAR_3;
  FUNC_10(VAR_21, VAR_22, VAR_23);

  FUNC_22(VAR_28);
  FUNC_4(FUNC_21(VAR_28));
  FUNC_24(VAR_21);

  FUNC_18(VAR_28);
  break;
     }

     case 130: {
  ipc_port_t VAR_29 = VAR_5;

  if ((VAR_27 & VAR_12) == 0) {
   FUNC_25(VAR_22, 0, 0, VAR_18);
   goto invalid_right;
  }

  if (VAR_25 == 0)
   goto success;

  if (VAR_25 != -1)
   goto invalid_value;

  VAR_26 = (ipc_port_t) VAR_23->ie_object;
  FUNC_4(VAR_26 != VAR_5);







  FUNC_6(VAR_26);
  FUNC_4(FUNC_5(VAR_26));
  FUNC_4(VAR_26->ip_receiver_name == VAR_22);
  FUNC_4(VAR_26->ip_receiver == VAR_21);


  if(VAR_26->ip_guarded) {
   uint64_t VAR_30 = VAR_26->ip_context;
   FUNC_9(VAR_26);
   FUNC_24(VAR_21);

   FUNC_25(VAR_22, 0, VAR_30, VAR_20);
   goto guard_failure;
  }

  if (VAR_27 & VAR_13) {
   FUNC_4(FUNC_0(VAR_27) ==
     VAR_15);
   FUNC_4(FUNC_1(VAR_27) > 0);
   FUNC_4(VAR_26->ip_srights > 0);

   if (VAR_26->ip_pdrequest != ((void*)0)) {
    FUNC_11(VAR_21, VAR_22, VAR_23);
    VAR_23->ie_bits &= ~VAR_12;
    FUNC_13(VAR_21, (ipc_object_t) VAR_26,
        VAR_22, VAR_23);
    FUNC_7(VAR_26);
   } else {







    VAR_27 &= ~VAR_0;
    VAR_27 |= VAR_10;
    if (VAR_23->ie_request) {
     VAR_23->ie_request = VAR_2;

     if (FUNC_1(VAR_27) < VAR_17)
      VAR_27++;
    }
    VAR_23->ie_bits = VAR_27;
    VAR_23->ie_object = VAR_3;
    FUNC_11(VAR_21, VAR_22, VAR_23);
   }
  } else {
   FUNC_4(FUNC_0(VAR_27) == VAR_12);
   FUNC_4(FUNC_1(VAR_27) == 0);

   VAR_29 = FUNC_20(VAR_21, VAR_26,
            VAR_22, VAR_23);
   VAR_23->ie_object = VAR_3;
   FUNC_10(VAR_21, VAR_22, VAR_23);
  }
  FUNC_24(VAR_21);

  FUNC_17(VAR_26);

  if (VAR_29 != VAR_5)
   FUNC_15(VAR_29, VAR_22);
  break;
     }

     case 128: {
  ipc_port_t VAR_31;

  if ((VAR_27 & VAR_14) == 0)
   goto invalid_right;

  FUNC_4(FUNC_0(VAR_27) == VAR_14);
  FUNC_4(FUNC_1(VAR_27) == 1);

  VAR_26 = (ipc_port_t) VAR_23->ie_object;
  FUNC_4(VAR_26 != VAR_5);

  if (FUNC_19(VAR_21, VAR_26, VAR_22, VAR_23)) {
   FUNC_4(!(VAR_23->ie_bits & VAR_14));
   FUNC_25(VAR_22, 0, 0, VAR_18);
   goto invalid_right;
  }


  FUNC_4(VAR_26->ip_sorights > 0);

  if ((VAR_25 > 0) || (VAR_25 < -1)) {
   FUNC_9(VAR_26);
   goto invalid_value;
  }

  if (VAR_25 == 0) {
   FUNC_9(VAR_26);
   goto success;
  }

  VAR_31 = FUNC_20(VAR_21, VAR_26, VAR_22, VAR_23);
  FUNC_9(VAR_26);

  VAR_23->ie_object = VAR_3;
  FUNC_10(VAR_21, VAR_22, VAR_23);

  FUNC_24(VAR_21);

  FUNC_16(VAR_26);

  if (VAR_31 != VAR_5)
   FUNC_15(VAR_31, VAR_22);
  break;
     }

     case 133: {
  ipc_port_t VAR_32 = VAR_5;
  mach_port_urefs_t VAR_33;

  if (VAR_27 & VAR_16) {

   VAR_26 = (ipc_port_t) VAR_23->ie_object;
   FUNC_4(VAR_26 != VAR_5);

   if (!FUNC_19(VAR_21, VAR_26, VAR_22, VAR_23)) {

    FUNC_9(VAR_26);
    VAR_26 = VAR_5;
    FUNC_25(VAR_22, 0, 0, VAR_18);
    goto invalid_right;
   }
   VAR_27 = VAR_23->ie_bits;
   VAR_32 = VAR_26;
   VAR_26 = VAR_5;
  } else if ((VAR_27 & VAR_10) == 0) {
   FUNC_25(VAR_22, 0, 0, VAR_18);
   goto invalid_right;
  }

  FUNC_4(FUNC_0(VAR_27) == VAR_10);
  FUNC_4(FUNC_1(VAR_27) > 0);
  FUNC_4(VAR_23->ie_object == VAR_3);
  FUNC_4(VAR_23->ie_request == VAR_2);

  if (VAR_25 > ((mach_port_delta_t)VAR_17) ||
      VAR_25 < (-((mach_port_delta_t)VAR_17))) {
   goto invalid_value;
  }

  VAR_33 = FUNC_1(VAR_27);

  if (VAR_33 == VAR_17) {





   if (VAR_25 != (-((mach_port_delta_t)VAR_17)))
    VAR_25 = 0;
  } else {
   if (FUNC_3(VAR_33, VAR_25))
    goto invalid_value;
   if (FUNC_2(VAR_33, VAR_25)) {

    VAR_25 = VAR_17 - VAR_33;
   }
  }

  if ((VAR_33 + VAR_25) == 0) {
   FUNC_10(VAR_21, VAR_22, VAR_23);
  } else if (VAR_25 != 0) {
   VAR_23->ie_bits = VAR_27 + VAR_25;
   FUNC_11(VAR_21, VAR_22, VAR_23);
  }

  FUNC_24(VAR_21);

  if (VAR_32 != VAR_5)
   FUNC_8(VAR_32);

  break;
     }

     case 129: {
  mach_port_urefs_t VAR_34;
  ipc_port_t VAR_35 = VAR_5;
  ipc_port_t VAR_36 = VAR_5;
  ipc_port_t VAR_37 = VAR_5;
  mach_port_mscount_t VAR_38 = 0;

  if ((VAR_27 & VAR_13) == 0) {

   if ((VAR_27 & VAR_10) == 0) {
    FUNC_25(VAR_22, 0, 0, VAR_18);
   }
   goto invalid_right;
  }



  VAR_26 = (ipc_port_t) VAR_23->ie_object;
  FUNC_4(VAR_26 != VAR_5);

  if (FUNC_19(VAR_21, VAR_26, VAR_22, VAR_23)) {
   FUNC_4((VAR_23->ie_bits & VAR_13) == 0);
   goto invalid_right;
  }


  FUNC_4(VAR_26->ip_srights > 0);

  if (VAR_25 > ((mach_port_delta_t)VAR_17) ||
      VAR_25 < (-((mach_port_delta_t)VAR_17))) {
   FUNC_9(VAR_26);
   goto invalid_value;
  }

  VAR_34 = FUNC_1(VAR_27);

  if (VAR_34 == VAR_17) {





   if (VAR_25 != (-((mach_port_delta_t)VAR_17)))
    VAR_25 = 0;
  } else {
   if (FUNC_3(VAR_34, VAR_25)) {
    FUNC_9(VAR_26);
    goto invalid_value;
   }
   if (FUNC_2(VAR_34, VAR_25)) {

    VAR_25 = VAR_17 - VAR_34;
   }
  }

  if ((VAR_34 + VAR_25) == 0) {
   if (--VAR_26->ip_srights == 0) {
    VAR_36 = VAR_26->ip_nsrequest;
    if (VAR_36 != VAR_5) {
     VAR_26->ip_nsrequest = VAR_5;
     VAR_38 = VAR_26->ip_mscount;
    }
   }

   if (VAR_27 & VAR_12) {
    FUNC_4(VAR_26->ip_receiver_name == VAR_22);
    FUNC_4(VAR_26->ip_receiver == VAR_21);
    FUNC_9(VAR_26);
    FUNC_4(FUNC_0(VAR_27) ==
      VAR_15);

    VAR_23->ie_bits = VAR_27 &~ (VAR_1|
             VAR_13);
    FUNC_11(VAR_21, VAR_22, VAR_23);
   } else {
    FUNC_4(FUNC_0(VAR_27) ==
      VAR_13);

    VAR_35 = FUNC_20(VAR_21, VAR_26,
             VAR_22, VAR_23);
    FUNC_12(VAR_21, (ipc_object_t) VAR_26,
      VAR_22, VAR_23);

    FUNC_9(VAR_26);
    VAR_37 = VAR_26;

    VAR_23->ie_object = VAR_3;
    FUNC_10(VAR_21, VAR_22, VAR_23);
   }
  } else if (VAR_25 != 0) {
   FUNC_9(VAR_26);
   VAR_23->ie_bits = VAR_27 + VAR_25;
   FUNC_11(VAR_21, VAR_22, VAR_23);
  } else {
   FUNC_9(VAR_26);
  }

  FUNC_24(VAR_21);

  if (VAR_37 != VAR_5)
   FUNC_8(VAR_37);

  if (VAR_36 != VAR_5)
   FUNC_14(VAR_36, VAR_38);

  if (VAR_35 != VAR_5)
   FUNC_15(VAR_35, VAR_22);
  break;
     }

     case 132:
  goto invalid_right;

     default:
  FUNC_26("ipc_right_delta: strange right %d for 0x%x (%p) in space:%p",
        VAR_24, VAR_22, (void *)VAR_23, (void *)VAR_21);
 }

 return VAR_8;

    success:
 FUNC_24(VAR_21);
 return VAR_8;

    invalid_right:
 FUNC_24(VAR_21);
 if (VAR_26 != VAR_5)
  FUNC_8(VAR_26);
 return VAR_6;

    invalid_value:
 FUNC_24(VAR_21);
 FUNC_25(VAR_22, 0, 0, VAR_19);
 return VAR_7;

    guard_failure:
 return VAR_6;
}

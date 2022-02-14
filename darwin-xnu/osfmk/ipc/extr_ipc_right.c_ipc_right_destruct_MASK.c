
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ mach_port_urefs_t ;
typedef int mach_port_name_t ;
typedef int mach_port_mscount_t ;
typedef scalar_t__ mach_port_delta_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
typedef int ipc_object_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef int ipc_entry_bits_t ;
struct TYPE_19__ {int ie_bits; void* ie_object; scalar_t__ ie_request; } ;
struct TYPE_18__ {scalar_t__ ip_receiver; scalar_t__ ip_context; scalar_t__ ip_srights; int * ip_pdrequest; int ip_mscount; struct TYPE_18__* ip_nsrequest; scalar_t__ ip_guarded; int ip_receiver_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (scalar_t__,int ,TYPE_2__*) ;
 int FUNC_9 (scalar_t__,int ,TYPE_2__*) ;
 int FUNC_10 (scalar_t__,int ,int ,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 TYPE_1__* FUNC_14 (scalar_t__,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_17 (int ,int ,scalar_t__,int ) ;

kern_return_t
FUNC_18(
 ipc_space_t VAR_17,
 mach_port_name_t VAR_18,
 ipc_entry_t VAR_19,
 mach_port_delta_t VAR_20,
 uint64_t VAR_21)
{
 ipc_port_t VAR_22 = VAR_4;
 ipc_entry_bits_t VAR_23;

 mach_port_urefs_t VAR_24;
 ipc_port_t VAR_25 = VAR_4;
 ipc_port_t VAR_26 = VAR_4;
 mach_port_mscount_t VAR_27 = 0;

 VAR_23 = VAR_19->ie_bits;

 FUNC_3(FUNC_15(VAR_17));

 if (((VAR_23 & VAR_10) == 0) ||
     (VAR_20 && ((VAR_23 & VAR_11) == 0))) {
  FUNC_16(VAR_17);
  FUNC_17(VAR_18, 0, 0, VAR_15);
  return VAR_6;
 }

 if (VAR_20 > 0)
  goto invalid_value;

 VAR_22 = (ipc_port_t) VAR_19->ie_object;
 FUNC_3(VAR_22 != VAR_4);

 FUNC_5(VAR_22);
 FUNC_3(FUNC_4(VAR_22));
 FUNC_3(VAR_22->ip_receiver_name == VAR_18);
 FUNC_3(VAR_22->ip_receiver == VAR_17);


 if(VAR_22->ip_guarded && (VAR_21 != VAR_22->ip_context)) {
  uint64_t VAR_28 = VAR_22->ip_context;
  FUNC_7(VAR_22);
  FUNC_16(VAR_17);
  FUNC_17(VAR_18, 0, VAR_28, VAR_14);
  return VAR_5;
 }
 if (VAR_20) {

  FUNC_3(VAR_22->ip_srights > 0);

  VAR_24 = FUNC_1(VAR_23);





  if (FUNC_2(VAR_24, VAR_20)) {
   FUNC_7(VAR_22);
   goto invalid_value;
  }

  if (VAR_24 == VAR_13) {




   if (VAR_20 != (-((mach_port_delta_t)VAR_13)))
    VAR_20 = 0;
  }

  if ((VAR_24 + VAR_20) == 0) {
   if (--VAR_22->ip_srights == 0) {
    VAR_26 = VAR_22->ip_nsrequest;
    if (VAR_26 != VAR_4) {
     VAR_22->ip_nsrequest = VAR_4;
     VAR_27 = VAR_22->ip_mscount;
    }
   }
   FUNC_3(FUNC_0(VAR_23) == VAR_12);
   VAR_19->ie_bits = VAR_23 &~ (VAR_1|
            VAR_11);
  } else {
   VAR_19->ie_bits = VAR_23 + VAR_20;
  }
 }






 VAR_23 = VAR_19->ie_bits;
 if (VAR_23 & VAR_11) {
  FUNC_3(FUNC_1(VAR_23) > 0);
  FUNC_3(FUNC_1(VAR_23) <= VAR_13);

  if (VAR_22->ip_pdrequest != ((void*)0)) {
   FUNC_9(VAR_17, VAR_18, VAR_19);
   VAR_19->ie_bits &= ~VAR_10;
   FUNC_10(VAR_17, (ipc_object_t) VAR_22,
       VAR_18, VAR_19);
   FUNC_6(VAR_22);
  } else {







   VAR_23 &= ~VAR_0;
   VAR_23 |= VAR_9;
   if (VAR_19->ie_request) {
    VAR_19->ie_request = VAR_2;
    if (FUNC_1(VAR_23) < VAR_13)
     VAR_23++;
   }
   VAR_19->ie_bits = VAR_23;
   VAR_19->ie_object = VAR_3;
   FUNC_9(VAR_17, VAR_18, VAR_19);
  }
 } else {
  FUNC_3(FUNC_0(VAR_23) == VAR_10);
  FUNC_3(FUNC_1(VAR_23) == 0);
  VAR_25 = FUNC_14(VAR_17, VAR_22,
           VAR_18, VAR_19);
  VAR_19->ie_object = VAR_3;
  FUNC_8(VAR_17, VAR_18, VAR_19);
 }


 FUNC_16(VAR_17);

 if (VAR_26 != VAR_4)
  FUNC_11(VAR_26, VAR_27);

 FUNC_13(VAR_22);

 if (VAR_25 != VAR_4)
  FUNC_12(VAR_25, VAR_18);

 return VAR_8;

    invalid_value:
 FUNC_16(VAR_17);
 FUNC_17(VAR_18, 0, 0, VAR_16);
 return VAR_7;
}

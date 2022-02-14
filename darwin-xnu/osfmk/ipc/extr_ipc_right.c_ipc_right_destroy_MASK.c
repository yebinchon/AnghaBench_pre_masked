
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint64_t ;
typedef int mach_port_type_t ;
typedef int mach_port_name_t ;
typedef int mach_port_mscount_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;
typedef int ipc_pset_t ;
typedef TYPE_1__* ipc_port_t ;
typedef int ipc_object_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef int ipc_entry_bits_t ;
typedef int boolean_t ;
struct TYPE_19__ {void* ie_object; int ie_request; int ie_bits; } ;
struct TYPE_18__ {int ip_receiver; int ip_sorights; int ip_mscount; struct TYPE_18__* ip_nsrequest; int ip_srights; int ip_context; int ip_guarded; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 int FUNC_7 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 TYPE_1__* FUNC_13 (int ,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_7 ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int FUNC_19 (char*) ;

kern_return_t
FUNC_20(
 ipc_space_t VAR_8,
 mach_port_name_t VAR_9,
 ipc_entry_t VAR_10,
 boolean_t VAR_11,
 uint64_t VAR_12)
{
 ipc_entry_bits_t VAR_13;
 mach_port_type_t VAR_14;

 VAR_13 = VAR_10->ie_bits;
 VAR_10->ie_bits &= ~VAR_0;
 VAR_14 = FUNC_0(VAR_13);

 FUNC_1(FUNC_16(VAR_8));

 switch (VAR_14) {
     case 133:
  FUNC_1(VAR_10->ie_request == VAR_1);
  FUNC_1(VAR_10->ie_object == VAR_2);

  FUNC_6(VAR_8, VAR_9, VAR_10);
  FUNC_17(VAR_8);
  break;

     case 132: {
  ipc_pset_t VAR_15 = (ipc_pset_t) VAR_10->ie_object;

  FUNC_1(VAR_10->ie_request == VAR_1);
  FUNC_1(VAR_15 != VAR_3);

  VAR_10->ie_object = VAR_2;
  FUNC_6(VAR_8, VAR_9, VAR_10);

  FUNC_15(VAR_15);
  FUNC_17(VAR_8);

  FUNC_1(FUNC_14(VAR_15));
  FUNC_12(VAR_15);
  break;
     }

     case 130:
     case 131:
     case 128:
     case 129: {
  ipc_port_t VAR_16 = (ipc_port_t) VAR_10->ie_object;
  ipc_port_t VAR_17 = VAR_4;
  mach_port_mscount_t VAR_18 = 0;
  ipc_port_t VAR_19;

  FUNC_1(VAR_16 != VAR_4);

  if (VAR_14 == 130)
   FUNC_7(VAR_8, (ipc_object_t) VAR_16,
     VAR_9, VAR_10);

  FUNC_3(VAR_16);

  if (!FUNC_2(VAR_16)) {
   FUNC_1((VAR_14 & 131) == 0);
   FUNC_5(VAR_16);
   VAR_10->ie_request = VAR_1;
   VAR_10->ie_object = VAR_2;
   FUNC_6(VAR_8, VAR_9, VAR_10);
   FUNC_17(VAR_8);
   FUNC_4(VAR_16);
   break;
  }


  if ((VAR_14 & 131) &&
      (VAR_11) && (VAR_16->ip_guarded) &&
      (VAR_12 != VAR_16->ip_context)) {

   uint64_t VAR_20 = VAR_16->ip_context;
   FUNC_5(VAR_16);
   FUNC_17(VAR_8);

   FUNC_18(VAR_9, 0, VAR_20, VAR_7);
   return VAR_5;
  }


  VAR_19 = FUNC_13(VAR_8, VAR_16, VAR_9, VAR_10);

  VAR_10->ie_object = VAR_2;
  FUNC_6(VAR_8, VAR_9, VAR_10);
  FUNC_17(VAR_8);

  if (VAR_14 & 130) {
   FUNC_1(VAR_16->ip_srights > 0);
   if (--VAR_16->ip_srights == 0) {
    VAR_17 = VAR_16->ip_nsrequest;
    if (VAR_17 != VAR_4) {
     VAR_16->ip_nsrequest = VAR_4;
     VAR_18 = VAR_16->ip_mscount;
    }
   }
  }

  if (VAR_14 & 131) {
   FUNC_1(FUNC_2(VAR_16));
   FUNC_1(VAR_16->ip_receiver == VAR_8);

   FUNC_11(VAR_16);

  } else if (VAR_14 & 129) {
   FUNC_1(VAR_16->ip_sorights > 0);
   FUNC_5(VAR_16);

   FUNC_10(VAR_16);
  } else {
   FUNC_1(VAR_16->ip_receiver != VAR_8);

   FUNC_5(VAR_16);
   FUNC_4(VAR_16);
  }

  if (VAR_17 != VAR_4)
   FUNC_8(VAR_17, VAR_18);

  if (VAR_19 != VAR_4)
   FUNC_9(VAR_19, VAR_9);


  break;
     }

     default:
  FUNC_19("ipc_right_destroy: strange type");
 }

 return VAR_6;
}

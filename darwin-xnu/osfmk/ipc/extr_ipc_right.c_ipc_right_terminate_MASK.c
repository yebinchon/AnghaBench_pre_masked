
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int mach_port_type_t ;
typedef int mach_port_name_t ;
typedef int mach_port_mscount_t ;
typedef int ipc_space_t ;
typedef int ipc_pset_t ;
typedef TYPE_1__* ipc_port_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef int ipc_entry_bits_t ;
struct TYPE_17__ {int ie_object; int ie_request; int ie_bits; } ;
struct TYPE_16__ {int ip_receiver; int ip_sorights; int ip_receiver_name; int ip_mscount; struct TYPE_16__* ip_nsrequest; int ip_srights; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;






 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (int ,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int) ;

void
FUNC_16(
 ipc_space_t VAR_4,
 mach_port_name_t VAR_5,
 ipc_entry_t VAR_6)
{
 ipc_entry_bits_t VAR_7;
 mach_port_type_t VAR_8;

 VAR_7 = VAR_6->ie_bits;
 VAR_8 = FUNC_0(VAR_7);

 FUNC_1(!FUNC_14(VAR_4));
 switch (VAR_8) {
     case 133:
  FUNC_1(VAR_6->ie_request == VAR_0);
  FUNC_1(VAR_6->ie_object == VAR_1);
  break;

     case 132: {
  ipc_pset_t VAR_9 = (ipc_pset_t) VAR_6->ie_object;

  FUNC_1(VAR_6->ie_request == VAR_0);
  FUNC_1(VAR_9 != VAR_2);

  FUNC_13(VAR_9);
  FUNC_1(FUNC_12(VAR_9));
  FUNC_10(VAR_9);
  break;
     }

     case 130:
     case 131:
     case 128:
     case 129: {
  ipc_port_t VAR_10 = (ipc_port_t) VAR_6->ie_object;
  ipc_port_t VAR_11;
  ipc_port_t VAR_12 = VAR_3;
  mach_port_mscount_t VAR_13 = 0;

  FUNC_1(VAR_10 != VAR_3);
  FUNC_3(VAR_10);

  if (!FUNC_2(VAR_10)) {
   FUNC_5(VAR_10);
   FUNC_4(VAR_10);
   break;
  }

  VAR_11 = FUNC_11(VAR_4, VAR_10,
     VAR_5, VAR_6);

  if (VAR_8 & 130) {
   FUNC_1(VAR_10->ip_srights > 0);
   if (--VAR_10->ip_srights == 0
       ) {
    VAR_12 = VAR_10->ip_nsrequest;
    if (VAR_12 != VAR_3) {
     VAR_10->ip_nsrequest = VAR_3;
     VAR_13 = VAR_10->ip_mscount;
    }
   }
  }

  if (VAR_8 & 131) {
   FUNC_1(VAR_10->ip_receiver_name == VAR_5);
   FUNC_1(VAR_10->ip_receiver == VAR_4);

   FUNC_9(VAR_10);

  } else if (VAR_8 & 129) {
   FUNC_1(VAR_10->ip_sorights > 0);
   FUNC_5(VAR_10);

   FUNC_8(VAR_10);
  } else {
   FUNC_1(VAR_10->ip_receiver != VAR_4);

   FUNC_5(VAR_10);
   FUNC_4(VAR_10);
  }

  if (VAR_12 != VAR_3)
   FUNC_6(VAR_12, VAR_13);

  if (VAR_11 != VAR_3)
   FUNC_7(VAR_11, VAR_5);
  break;
     }

     default:
  FUNC_15("ipc_right_terminate: strange type - 0x%x", VAR_8);
 }
}

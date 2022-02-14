
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef int mach_msg_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_1__* ipc_pset_t ;
typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ ipc_object_t ;
typedef int * ipc_mqueue_t ;
typedef TYPE_3__* ipc_entry_t ;
struct TYPE_14__ {int ie_bits; scalar_t__ ie_object; } ;
struct TYPE_13__ {scalar_t__ ip_receiver; int ips_messages; int ip_messages; int ip_receiver_name; } ;


 TYPE_3__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_3__* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

mach_msg_return_t
FUNC_12(
 ipc_space_t VAR_7,
 mach_port_name_t VAR_8,
 ipc_mqueue_t *VAR_9,
 ipc_object_t *VAR_10)
{
 ipc_entry_t VAR_11;
 ipc_object_t VAR_12;
 ipc_mqueue_t VAR_13;

 FUNC_10(VAR_7);
 if (!FUNC_9(VAR_7)) {
  FUNC_11(VAR_7);
  return VAR_6;
 }

 VAR_11 = FUNC_6(VAR_7, VAR_8);
 if (VAR_11 == VAR_0) {
  FUNC_11(VAR_7);
  return VAR_6;
 }

 VAR_12 = VAR_11->ie_object;

 if (VAR_11->ie_bits & VAR_5) {
  ipc_port_t VAR_14;

  FUNC_0(VAR_14 = (ipc_port_t) VAR_12);
  FUNC_1(VAR_14 != VAR_2);

  FUNC_5(VAR_14);
  FUNC_1(FUNC_4(VAR_14));
  FUNC_1(VAR_14->ip_receiver_name == VAR_8);
  FUNC_1(VAR_14->ip_receiver == VAR_7);
  FUNC_11(VAR_7);
  VAR_13 = &VAR_14->ip_messages;

 } else if (VAR_11->ie_bits & VAR_4) {
  ipc_pset_t VAR_15;

  FUNC_0(VAR_15 = (ipc_pset_t) VAR_12);
  FUNC_1(VAR_15 != VAR_1);

  FUNC_8(VAR_15);
  FUNC_1(FUNC_7(VAR_15));
  FUNC_11(VAR_7);

  VAR_13 = &VAR_15->ips_messages;
 } else {
  FUNC_11(VAR_7);
  return VAR_6;
 }






 FUNC_2(VAR_12);
 FUNC_3(VAR_12);

 *VAR_10 = VAR_12;
 *VAR_9 = VAR_13;
 return VAR_3;
}

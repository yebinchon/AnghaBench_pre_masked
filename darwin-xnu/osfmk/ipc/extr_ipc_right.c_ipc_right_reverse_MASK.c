
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef int boolean_t ;
struct TYPE_11__ {int ie_bits; scalar_t__ ie_object; } ;
struct TYPE_10__ {scalar_t__ ip_receiver; scalar_t__ ip_receiver_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_2__* FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__*,TYPE_2__**) ;
 int FUNC_8 (scalar_t__) ;

boolean_t
FUNC_9(
 ipc_space_t VAR_7,
 ipc_object_t VAR_8,
 mach_port_name_t *VAR_9,
 ipc_entry_t *VAR_10)
{
 ipc_port_t VAR_11;
 mach_port_name_t VAR_12;
 ipc_entry_t VAR_13;



 FUNC_1(FUNC_8(VAR_7));
 FUNC_1(FUNC_2(VAR_8) == VAR_2);

 VAR_11 = (ipc_port_t) VAR_8;

 FUNC_4(VAR_11);
 if (!FUNC_3(VAR_11)) {
  FUNC_5(VAR_11);

  return VAR_0;
 }

 if (VAR_11->ip_receiver == VAR_7) {
  VAR_12 = VAR_11->ip_receiver_name;
  FUNC_1(VAR_12 != VAR_3);

  VAR_13 = FUNC_6(VAR_7, VAR_12);

  FUNC_1(VAR_13 != VAR_1);
  FUNC_1(VAR_13->ie_bits & VAR_4);
  FUNC_1(VAR_11 == (ipc_port_t) VAR_13->ie_object);

  *VAR_9 = VAR_12;
  *VAR_10 = VAR_13;
  return VAR_6;
 }

 if (FUNC_7(VAR_7, (ipc_object_t) VAR_11, VAR_9, VAR_10)) {
  FUNC_1((VAR_13 = *VAR_10) != VAR_1);
  FUNC_1(FUNC_0(VAR_13->ie_bits) == VAR_5);
  FUNC_1(VAR_11 == (ipc_port_t) VAR_13->ie_object);

  return VAR_6;
 }

 FUNC_5(VAR_11);
 return VAR_0;
}

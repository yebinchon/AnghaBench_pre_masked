
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_port_right_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_1__* ipc_entry_t ;
struct TYPE_4__ {int ie_bits; scalar_t__ ie_object; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__**,int ,TYPE_1__**) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ,int ) ;

kern_return_t
FUNC_6(
 ipc_space_t VAR_5,
 mach_port_name_t VAR_6,
 mach_port_right_t VAR_7,
 ipc_object_t *VAR_8,
 mach_port_name_t VAR_9,
 mach_port_right_t VAR_10,
 ipc_object_t *VAR_11)
{
 ipc_entry_t VAR_12;
 ipc_entry_t VAR_13;
 ipc_object_t VAR_14;
 kern_return_t VAR_15;

 VAR_15 = FUNC_3(VAR_5, VAR_6, &VAR_12, VAR_9, &VAR_13);
 if (VAR_15 != VAR_2)
  return VAR_15;


 if ((VAR_12->ie_bits & FUNC_0(VAR_7)) == VAR_3) {
  FUNC_4(VAR_5);
  FUNC_5(VAR_6, 0, 0, VAR_4);
  return VAR_1;
 }

 if ((VAR_13->ie_bits & FUNC_0(VAR_10)) == VAR_3) {
  FUNC_4(VAR_5);
  FUNC_5(VAR_9, 0, 0, VAR_4);
  return VAR_1;
 }

 VAR_14 = VAR_12->ie_object;
 FUNC_1(VAR_14 != VAR_0);
 FUNC_2(VAR_14);
 *VAR_8 = VAR_14;

 VAR_14 = VAR_13->ie_object;
 FUNC_1(VAR_14 != VAR_0);
 FUNC_2(VAR_14);
 *VAR_11 = VAR_14;

 FUNC_4(VAR_5);
 return VAR_2;
}

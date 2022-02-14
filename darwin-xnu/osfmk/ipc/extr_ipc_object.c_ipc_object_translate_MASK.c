
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mach_port_right_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_1__* ipc_entry_t ;
struct TYPE_3__ {int ie_bits; scalar_t__ ie_object; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__**) ;
 int FUNC_4 (int ) ;

kern_return_t
FUNC_5(
 ipc_space_t VAR_4,
 mach_port_name_t VAR_5,
 mach_port_right_t VAR_6,
 ipc_object_t *VAR_7)
{
 ipc_entry_t VAR_8;
 ipc_object_t VAR_9;
 kern_return_t VAR_10;

 VAR_10 = FUNC_3(VAR_4, VAR_5, &VAR_8);
 if (VAR_10 != VAR_2)
  return VAR_10;


 if ((VAR_8->ie_bits & FUNC_0(VAR_6)) == VAR_3) {
  FUNC_4(VAR_4);
  return VAR_1;
 }

 VAR_9 = VAR_8->ie_object;
 FUNC_1(VAR_9 != VAR_0);

 FUNC_2(VAR_9);
 FUNC_4(VAR_4);

 *VAR_7 = VAR_9;
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef TYPE_1__* ipc_entry_t ;
struct TYPE_5__ {scalar_t__ ie_object; int ie_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__**) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;

kern_return_t
FUNC_5(
 ipc_space_t VAR_4,
 mach_port_name_t VAR_5)
{
 ipc_entry_t VAR_6;
 kern_return_t VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_5, &VAR_6);
 if (VAR_7 != VAR_2)
  return VAR_7;


 if (FUNC_3(VAR_4, VAR_5, VAR_6))
  return VAR_1;



 FUNC_0(VAR_6->ie_object == VAR_0);
 VAR_6->ie_bits |= VAR_3 | 1;
 FUNC_2(VAR_4, VAR_5, VAR_6);
 FUNC_4(VAR_4);
 return VAR_2;
}

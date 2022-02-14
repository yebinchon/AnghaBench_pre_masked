
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef TYPE_1__* ipc_entry_t ;
struct TYPE_4__ {scalar_t__ ie_object; int ie_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *,TYPE_1__**) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;

kern_return_t
FUNC_4(
 ipc_space_t VAR_3,
 mach_port_name_t *VAR_4)
{
 ipc_entry_t VAR_5;
 kern_return_t VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, &VAR_5);
 if (VAR_6 != VAR_1)
  return VAR_6;




 FUNC_0(VAR_5->ie_object == VAR_0);
 VAR_5->ie_bits |= VAR_2 | 1;
 FUNC_2(VAR_3, *VAR_4, VAR_5);
 FUNC_3(VAR_3);
 return VAR_1;
}

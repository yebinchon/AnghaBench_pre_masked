
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef int mach_msg_type_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_object_t ;
typedef TYPE_1__* ipc_entry_t ;
struct TYPE_7__ {int task_imp_base; } ;
struct TYPE_6__ {int ie_bits; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_1__*,int ,int ,int *,scalar_t__*,scalar_t__*,int*) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_1__**) ;
 int FUNC_9 (int ) ;

kern_return_t
FUNC_10(
 ipc_space_t VAR_4,
 mach_port_name_t VAR_5,
 mach_msg_type_name_t VAR_6,
 ipc_object_t *VAR_7)
{
 ipc_entry_t VAR_8;
 ipc_port_t VAR_9;
 ipc_port_t VAR_10;
 kern_return_t VAR_11;
 int VAR_12 = 0;







 VAR_11 = FUNC_8(VAR_4, VAR_5, &VAR_8);
 if (VAR_11 != VAR_1)
  return VAR_11;


 VAR_10 = VAR_0;
 VAR_11 = FUNC_7(VAR_4, VAR_5, VAR_8,
         VAR_6, VAR_3,
         VAR_7, &VAR_9,
         &VAR_10,
         &VAR_12);
 if (FUNC_0(VAR_8->ie_bits) == VAR_2)
  FUNC_3(VAR_4, VAR_5, VAR_8);
 FUNC_9(VAR_4);







 if (VAR_10 != VAR_0)
  FUNC_2(VAR_10);

 if ((VAR_11 == VAR_1) && (VAR_9 != VAR_0))
  FUNC_6(VAR_9, VAR_5);

 return VAR_11;
}

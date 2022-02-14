
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef TYPE_1__* ipc_pset_t ;
typedef int ipc_object_t ;
struct TYPE_3__ {int ips_messages; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *) ;

kern_return_t
FUNC_2(
 ipc_space_t VAR_4,
 mach_port_name_t VAR_5,
 ipc_pset_t *VAR_6)
{
 ipc_pset_t VAR_7;
 kern_return_t VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_0,
       VAR_2, 0,
       VAR_5, (ipc_object_t *) &VAR_7);
 if (VAR_8 != VAR_1) {
  return VAR_8;
 }


 FUNC_0(&VAR_7->ips_messages, VAR_3 );

 *VAR_6 = VAR_7;
 return VAR_1;
}

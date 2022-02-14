
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (uintptr_t*,int) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,uintptr_t*,int) ;

kern_return_t
FUNC_4(
 ipc_space_t VAR_4,
 mach_port_name_t VAR_5,
 ipc_port_t *VAR_6)
{
 ipc_port_t VAR_7;
 kern_return_t VAR_8;






 VAR_8 = FUNC_0(VAR_4, VAR_0,
       VAR_3, 0,
       VAR_5, (ipc_object_t *) &VAR_7);
 if (VAR_8 != VAR_2)
  return VAR_8;



 FUNC_2(VAR_7, VAR_4, VAR_5);





 *VAR_6 = VAR_7;

 return VAR_2;
}

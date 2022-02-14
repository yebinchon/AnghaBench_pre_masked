
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_object_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;

mach_port_name_t
FUNC_4(
 ipc_port_t VAR_6,
 ipc_space_t VAR_7,
 mach_port_name_t VAR_8)
{
 if (FUNC_1(VAR_6)) {
  kern_return_t VAR_9;

  VAR_9 = FUNC_2(VAR_7, (ipc_object_t) VAR_6,
     VAR_2, VAR_5, VAR_8);
  if (VAR_9 != VAR_1) {
   FUNC_3(VAR_6);

   if (VAR_9 == VAR_0)
    VAR_8 = VAR_3;
   else
    VAR_8 = VAR_4;
  }
 } else
  VAR_8 = FUNC_0(VAR_6);

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef int ipc_entry_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;

kern_return_t
FUNC_6(
 ipc_space_t VAR_4,
 mach_port_name_t VAR_5,
 mach_port_name_t VAR_6)
{
 ipc_entry_t VAR_7, VAR_8;
 kern_return_t VAR_9;

 VAR_9 = FUNC_0(VAR_4, VAR_6, &VAR_8);
 if (VAR_9 != VAR_3)
  return VAR_9;



 if (FUNC_3(VAR_4, VAR_6, VAR_8)) {

  return VAR_2;
 }



 if ((VAR_5 == VAR_6) ||
     ((VAR_7 = FUNC_2(VAR_4, VAR_5)) == VAR_0)) {
  FUNC_1(VAR_4, VAR_6, VAR_8);
  FUNC_5(VAR_4);
  return VAR_1;
 }

 VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_7, VAR_6, VAR_8);

 return VAR_9;
}

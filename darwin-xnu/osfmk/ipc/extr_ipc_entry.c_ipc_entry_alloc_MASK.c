
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
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

kern_return_t
FUNC_5(
 ipc_space_t VAR_3,
 mach_port_name_t *VAR_4,
 ipc_entry_t *VAR_5)
{
 kern_return_t VAR_6;

 FUNC_3(VAR_3);

 for (;;) {
  if (!FUNC_2(VAR_3)) {
   FUNC_4(VAR_3);
   return VAR_1;
  }

  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
  if (VAR_6 == VAR_2)
   return VAR_6;

  VAR_6 = FUNC_1(VAR_3, VAR_0);
  if (VAR_6 != VAR_2)
   return VAR_6;
 }
}

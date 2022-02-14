
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int mach_port_name_t ;
typedef int ipc_port_t ;
typedef int ipc_object_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ) ;

thread_t
FUNC_6(
 mach_port_name_t VAR_3)
{
 thread_t VAR_4 = VAR_2;
 ipc_port_t VAR_5;

 if (FUNC_1(VAR_3)) {
  if (FUNC_4(FUNC_3(), VAR_3,
            VAR_1,
         (ipc_object_t *)&VAR_5) != VAR_0)
   return (VAR_2);

  VAR_4 = FUNC_2(VAR_5);

  if (FUNC_0(VAR_5))
   FUNC_5(VAR_5);
 }

 return (VAR_4);
}

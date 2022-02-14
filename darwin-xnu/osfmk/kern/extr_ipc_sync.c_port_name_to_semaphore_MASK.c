
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semaphore_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_port_t ;
typedef int ipc_object_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *) ;

kern_return_t
FUNC_7(
 mach_port_name_t VAR_5,
 semaphore_t *VAR_6)
{
 ipc_port_t VAR_7;
 kern_return_t VAR_8;

 if (!FUNC_1(VAR_5)) {
  *VAR_6 = VAR_4;
  return VAR_1;
 }

 VAR_8 = FUNC_6(FUNC_4(), VAR_5, VAR_3,
      (ipc_object_t *) &VAR_7);
 if (VAR_8 != VAR_2) {
  *VAR_6 = VAR_4;
  return VAR_8;
 }

 FUNC_2(FUNC_0(VAR_7));

 *VAR_6 = FUNC_3(VAR_7);
 if (*VAR_6 == VAR_4) {

  VAR_8 = VAR_0;
 } else {
  VAR_8 = VAR_2;
 }
 FUNC_5(VAR_7);

 return VAR_8;
}

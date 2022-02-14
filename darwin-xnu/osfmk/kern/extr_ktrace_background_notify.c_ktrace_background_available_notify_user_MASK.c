
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;
typedef scalar_t__ kern_return_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

kern_return_t
FUNC_5(void)
{
 mach_port_t VAR_2;
 kern_return_t VAR_3;

 VAR_3 = FUNC_1(FUNC_2(), &VAR_2);
 if (VAR_3 != VAR_1 || !FUNC_0(VAR_2)) {
  return VAR_0;
 }

 VAR_3 = FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 return VAR_3;
}

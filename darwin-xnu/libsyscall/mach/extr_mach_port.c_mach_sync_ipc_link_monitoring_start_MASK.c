
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

kern_return_t
FUNC_5(mach_port_t *VAR_3)
{
 mach_port_t VAR_4;
 boolean_t VAR_5;
 kern_return_t VAR_6;

 *VAR_3 = VAR_1;

 VAR_4 = FUNC_4();

 VAR_6 = FUNC_2(FUNC_3(), VAR_4, VAR_2, 1);

 if (VAR_6 != VAR_0) {
  return VAR_6;
 }

 VAR_6 = FUNC_0(FUNC_3(), VAR_4, &VAR_5);
 if (VAR_6 != VAR_0) {
  FUNC_1(FUNC_3(), VAR_4);
  return VAR_6;
 }

 *VAR_3 = VAR_4;

 return VAR_6;
}

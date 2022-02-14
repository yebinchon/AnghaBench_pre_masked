
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;
typedef scalar_t__ kern_return_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 mach_port_t VAR_2 = VAR_1;

 kern_return_t VAR_3 = FUNC_1(FUNC_2(), &VAR_2);
 if ((VAR_3 != VAR_0) || !FUNC_0(VAR_2)) {
  return;
 }

 FUNC_4(VAR_2, 0);
 FUNC_3(VAR_2);
}

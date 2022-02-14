
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_4;
 int VAR_5 = 10;
 mach_port_t VAR_6, VAR_7;
 kern_return_t VAR_8;


 VAR_8 = FUNC_5(FUNC_4(), &VAR_6);
 if (VAR_0 != VAR_8) {
  FUNC_3("task_get_bootstrap_port(): ", VAR_8);
  FUNC_1(1);
 }

 while (VAR_5-- > 0) {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   VAR_8 = FUNC_0(VAR_6,
     VAR_2[VAR_4],
     &VAR_7);
   if (VAR_8 != VAR_0) {
    break;
   }
  }
  if (VAR_8 == VAR_0)
   return;
  FUNC_6(100 * 1000);
 }
 FUNC_2(VAR_3, "Server(s) failed to register\n");
 FUNC_1(1);
}

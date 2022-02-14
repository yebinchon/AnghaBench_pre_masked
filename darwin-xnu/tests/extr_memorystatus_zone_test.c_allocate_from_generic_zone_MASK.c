
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int mach_port_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,...) ;

__attribute__((used)) static void FUNC_7(void)
{
 uint64_t VAR_3 = 0;

 FUNC_6("[%d] Allocating mach_ports\n", FUNC_0());
 for (VAR_3 = 0; ; VAR_3++) {
  mach_port_t VAR_4;

  if ((FUNC_3(FUNC_4(), VAR_1, &VAR_4)) != VAR_0) {
   break;
  }
 }
 FUNC_6("[%d] Number of allocations: %lld\n", FUNC_0(), VAR_3);


 FUNC_2(FUNC_1(), VAR_2);

 while (1) {
  FUNC_5();
 }
}

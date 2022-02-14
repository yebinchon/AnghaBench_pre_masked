
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int mach_port_t ;
typedef scalar_t__ kern_return_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(uint64_t VAR_1, uint32_t VAR_2)
{
 mach_port_t VAR_3;
 kern_return_t VAR_4;

 VAR_4 = FUNC_2(FUNC_3(), &VAR_3);
 if ((VAR_4 != VAR_0) || !FUNC_0(VAR_3)) {
  return;
 }

 FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_4(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_address_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2()
{
 vm_map_address_t VAR_0;

 __asm__ volatile("mrs %0, FAR_EL1" : "=r"(VAR_0));

 FUNC_0(FUNC_1(), VAR_0);
}

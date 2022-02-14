
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct arm_saved_state {int dummy; } ;
typedef int mach_vm_offset_t ;


 struct arm_saved_state* FUNC_0 (int ) ;
 int FUNC_1 (struct arm_saved_state*,int ) ;

void
FUNC_2(thread_t VAR_0, mach_vm_offset_t VAR_1)
{
 struct arm_saved_state *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_1);

 return;
}

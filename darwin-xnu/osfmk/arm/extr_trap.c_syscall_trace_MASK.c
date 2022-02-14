
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_saved_state {int * r; } ;


 int FUNC_0 (char*,int ) ;

void
FUNC_1(
       struct arm_saved_state * VAR_0)
{
 FUNC_0("syscall: %d\n", VAR_0->r[12]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint64_t ;
struct regs {int dummy; } ;
struct arm_saved_state {int r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

uint64_t
FUNC_1(struct regs * VAR_2, uint_t VAR_3)
{
 struct arm_saved_state *VAR_4 = (struct arm_saved_state *) VAR_2;
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_1);
  return (0);
 }

 if (VAR_3 > VAR_0 - 1) {
  FUNC_0(VAR_1);
  return (0);
 }

 return (uint64_t) ((unsigned int *) (&(VAR_4->r)))[VAR_3];
}

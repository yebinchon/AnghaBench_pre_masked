
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPMASK ;



__attribute__((used)) static inline void
FUNC_0(OPMASK VAR_0[]) {
 __asm__ volatile("kmovq %%k0, %0" :"=m" (VAR_0[0]));
 __asm__ volatile("kmovq %%k1, %0" :"=m" (VAR_0[1]));
 __asm__ volatile("kmovq %%k2, %0" :"=m" (VAR_0[2]));
 __asm__ volatile("kmovq %%k3, %0" :"=m" (VAR_0[3]));
 __asm__ volatile("kmovq %%k4, %0" :"=m" (VAR_0[4]));
 __asm__ volatile("kmovq %%k5, %0" :"=m" (VAR_0[5]));
 __asm__ volatile("kmovq %%k6, %0" :"=m" (VAR_0[6]));
 __asm__ volatile("kmovq %%k7, %0" :"=m" (VAR_0[7]));
}

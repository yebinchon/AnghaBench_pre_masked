
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(void) {
 uint64_t VAR_1[8];

 for (int VAR_2 = 0; VAR_2 < 8; VAR_2++)
         VAR_1[VAR_2] = ((uint64_t) FUNC_0() << 32) + (0x11111111 * VAR_2);

 __asm__ volatile("kmovq %0, %%k0" : :"m" (VAR_1[0]));
 __asm__ volatile("kmovq %0, %%k1" : :"m" (VAR_1[1]));
 __asm__ volatile("kmovq %0, %%k2" : :"m" (VAR_1[2]));
 __asm__ volatile("kmovq %0, %%k3" : :"m" (VAR_1[3]));
 __asm__ volatile("kmovq %0, %%k4" : :"m" (VAR_1[4]));
 __asm__ volatile("kmovq %0, %%k5" : :"m" (VAR_1[5]));
 __asm__ volatile("kmovq %0, %%k6" : :"m" (VAR_1[6]));
 __asm__ volatile("kmovq %0, %%k7" : :"m" (VAR_1[7]));

 FUNC_1(VAR_0);
}

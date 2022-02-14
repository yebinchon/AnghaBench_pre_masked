
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VECTOR256 ;



__attribute__((used)) static inline void
FUNC_0(VECTOR256 *VAR_0) {
 int VAR_1 = 0;
     __asm__ volatile("vmovaps  %%ymm0, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm1, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm2, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm3, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm4, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm5, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm6, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm7, %0" :"=m" (VAR_0[VAR_1]));

 VAR_1++;__asm__ volatile("vmovaps  %%ymm8, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm9, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm10, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm11, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm12, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm13, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm14, %0" :"=m" (VAR_0[VAR_1]));
 VAR_1++;__asm__ volatile("vmovaps  %%ymm15, %0" :"=m" (VAR_0[VAR_1]));

}

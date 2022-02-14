
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct x86_fx_thread_state {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct x86_fx_thread_state *VAR_0, uint32_t VAR_1) {
 __asm__ __volatile__("xsave %0" :"=m" (*VAR_0) : "a"(VAR_1), "d"(0));
}

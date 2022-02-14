
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(uint32_t VAR_0, const unsigned int VAR_1)
{
 __asm__ volatile("rorl %%cl,%0" : "=r" (VAR_0) : "0" (VAR_0), "c" (VAR_1));
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



uint64_t FUNC_0() {
uint32_t VAR_0, VAR_1;

__asm__ __volatile__ ("rdtsc" : "=a" (VAR_0), "=d" (VAR_1));
return (uint64_t)VAR_1 << 32 | VAR_0;
}

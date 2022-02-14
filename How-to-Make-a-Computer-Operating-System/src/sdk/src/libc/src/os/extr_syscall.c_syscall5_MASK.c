
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



int FUNC_0( int VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5 ){
 int VAR_6;
 asm volatile ("			   		mov %1, %%eax		\n 		mov %2, %%ebx		\n 		mov %3, %%ecx		\n 		mov %4, %%edx		\n 		mov %5, %%edi		\n 		mov %6, %%esi		\n 		int $0x80		\n 		mov %%eax, %0"
  : "=g" (VAR_6)
  : "g" (VAR_0),"g" (VAR_1), "g" (VAR_2), "g" (VAR_3), "g" (VAR_4), "g" (VAR_5)
 );
 return VAR_6;
}

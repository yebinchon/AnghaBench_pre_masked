
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



int FUNC_0( int VAR_0, uint32_t VAR_1 ){
 int VAR_2;
 asm volatile ("		   		mov %1, %%eax	\n 		mov %2, %%ebx	\n 		int $0x80		\n 		mov %%eax, %0"




  : "=g" (VAR_2)
  : "g" (VAR_0), "g" (VAR_1)
 );
 return VAR_2;
}

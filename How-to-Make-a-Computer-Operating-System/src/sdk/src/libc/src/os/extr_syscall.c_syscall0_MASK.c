
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0( int VAR_0 ){
 int VAR_1;
 asm volatile ("		   		mov %1, %%eax	\n 		int $0x80		\n 		mov %%eax, %0"



  : "=g" (VAR_1)
  : "g" (VAR_0)
 );
 return VAR_1;
}

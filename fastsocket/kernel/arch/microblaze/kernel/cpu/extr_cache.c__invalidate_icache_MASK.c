
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ use_icache; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(unsigned int VAR_1)
{
 if (VAR_0.use_icache) {
  __asm__ __volatile__ ("									wic	%0, r0" : : "r" (VAR_1));



 }
}

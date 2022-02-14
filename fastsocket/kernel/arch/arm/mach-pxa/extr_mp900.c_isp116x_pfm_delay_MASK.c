
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct device *VAR_0, int VAR_1)
{



 int VAR_2 = VAR_1 / 10;


 __asm__ volatile ("0:\n"
  "subs %0, %1, #1\n"
  "bge 0b\n"
  :"=r" (VAR_2)
  :"0"(VAR_2)
 );
}

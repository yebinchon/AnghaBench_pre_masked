
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long FUNC_0 () ;
 unsigned long VAR_1 ;

unsigned long FUNC_1(void)
{
 unsigned long VAR_2, VAR_3;




 asm volatile (
 "mrc	p15, 0, %0, c15, c1, 0\n\t"
 "tst	%0, #(1 << 6)\n\t"
 "orreq	%0, %0, #(1 << 6)\n\t"
 "mcreq	p15, 0, %0, c15, c1, 0\n\t"





 : "=r"(VAR_3) : : "cc");

 VAR_2 = VAR_0 - FUNC_0();

 return VAR_2 / VAR_1;
}

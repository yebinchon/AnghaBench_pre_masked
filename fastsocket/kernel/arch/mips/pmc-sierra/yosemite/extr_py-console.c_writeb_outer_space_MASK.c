
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned long long VAR_3, unsigned char VAR_4)
{
 unsigned long long VAR_5 = VAR_0 | VAR_3;
 unsigned long VAR_6;
 unsigned int VAR_7;

 VAR_7 = FUNC_0();
 FUNC_2((VAR_7 | VAR_2) & ~ VAR_1);
 FUNC_1();

 __asm__ __volatile__ (
 "	.set	mips3		\n"
 "	ld	%0, %1		\n"
 "	sb	%2, (%0)	\n"
 "	.set	mips0		\n"
 : "=&r" (VAR_6)
 : "m" (VAR_5), "r" (VAR_4));

 FUNC_2(VAR_7);
 FUNC_1();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(volatile u8 *VAR_1, u8 VAR_2)
{
 u32 VAR_3;
 asm volatile("	bclr	%1,(%2)		\n"
       "	mov	epsw,%0		\n"
       : "=d"(VAR_3) : "d"(VAR_2), "a"(VAR_1));
 return !(VAR_3 & VAR_0);
}

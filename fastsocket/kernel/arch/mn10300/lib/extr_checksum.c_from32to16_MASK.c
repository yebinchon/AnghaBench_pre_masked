
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __wsum ;



__attribute__((used)) static inline unsigned short FUNC_0(__wsum VAR_0)
{
 asm("	add	%1,%0		\n"
     "	addc	0xffff,%0	\n"
     : "=r" (VAR_0)
     : "r" (VAR_0 << 16), "0" (VAR_0 & 0xffff0000)
     );
 return VAR_0 >> 16;
}

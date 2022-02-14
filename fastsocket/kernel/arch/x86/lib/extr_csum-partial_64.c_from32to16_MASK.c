
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned short FUNC_0(unsigned VAR_0)
{
 unsigned short VAR_1 = VAR_0 >> 16;
 asm("addw %w2,%w0\n\t"
     "adcw $0,%w0\n"
     : "=r" (VAR_1)
     : "0" (VAR_1), "r" (VAR_0));
 return VAR_1;
}

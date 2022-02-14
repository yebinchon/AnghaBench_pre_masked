
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpi_info {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(struct tpi_info *VAR_0)
{
 int VAR_1;

 asm volatile(
  "	tpi	0(%2)\n"
  "	ipm	%0\n"
  "	srl	%0,28"
  : "=d" (VAR_1), "=m" (*VAR_0)
  : "a" (VAR_0)
  : "cc");
 return VAR_1;
}

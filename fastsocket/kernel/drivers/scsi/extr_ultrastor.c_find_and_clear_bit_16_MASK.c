
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static inline int FUNC_1(unsigned long *VAR_0)
{
  int VAR_1;

  if (*VAR_0 == 0)
    FUNC_0("No free mscp");

  asm volatile (
 "xorl %0,%0\n\t"
 "0: bsfw %1,%w0\n\t"
 "btr %0,%1\n\t"
 "jnc 0b"
 : "=&r" (VAR_1), "=m" (*VAR_0) :);

  return VAR_1;
}

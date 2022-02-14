
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned char FUNC_0(unsigned char VAR_0,
      volatile unsigned char *VAR_1)
{
  __asm__ ("xchgb %0,%1" : "=q" (VAR_0), "=m" (*VAR_1) : "0" (VAR_0));
  return VAR_0;
}

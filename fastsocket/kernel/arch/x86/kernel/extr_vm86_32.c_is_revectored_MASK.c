
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revectored_struct {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(int VAR_0, struct revectored_struct *VAR_1)
{
 __asm__ __volatile__("btl %2,%1\n\tsbbl %0,%0"
  :"=r" (VAR_0)
  :"m" (*VAR_1), "r" (VAR_0));
 return VAR_0;
}

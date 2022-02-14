
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova {unsigned long pfn_lo; unsigned long pfn_hi; } ;



__attribute__((used)) static void
FUNC_0(struct iova *VAR_0,
 unsigned long *VAR_1, unsigned long *VAR_2)
{
 if (*VAR_1 < VAR_0->pfn_lo)
  VAR_0->pfn_lo = *VAR_1;
 if (*VAR_2 > VAR_0->pfn_hi)
  *VAR_1 = VAR_0->pfn_hi + 1;
}

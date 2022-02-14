
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,long) ;

int FUNC_1(long VAR_0, long *VAR_1)
{
 long *VAR_2 = (long *) FUNC_0(0x168, -1L);

 if (VAR_2) {
  while (*VAR_2) {
   if (*VAR_2 == VAR_0) {
    if (VAR_1)
     *VAR_1 = *++VAR_2;
    return (1);
   }
   VAR_2 += 2;
  }
 }
 return (0);
}

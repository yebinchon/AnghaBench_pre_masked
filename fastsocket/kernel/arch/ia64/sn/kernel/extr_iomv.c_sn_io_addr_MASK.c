
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 unsigned long VAR_0 ;
 void* FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 () ;

void *FUNC_5(unsigned long VAR_1)
{
 if (!FUNC_1()) {
  if (FUNC_0(VAR_1))
   return (FUNC_3(VAR_1));

  if (VAR_1 < (64 * 1024))
   return ((void*)0);
  if (FUNC_2())
   return (FUNC_3(VAR_1));
  else
   return ((void *)(VAR_1 | VAR_0));
 } else {

  unsigned long VAR_2;






  VAR_2 = (FUNC_4() ? 0xc00000028c000000UL : 0xc0000087cc000000UL) | ((VAR_1 >> 2) << 12);
  if ((VAR_1 >= 0x1f0 && VAR_1 <= 0x1f7) || VAR_1 == 0x3f6 || VAR_1 == 0x3f7)
   VAR_2 |= VAR_1;
  return (void *)VAR_2;
 }
}

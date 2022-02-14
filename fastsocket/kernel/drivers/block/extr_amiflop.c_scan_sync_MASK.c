
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef unsigned long ulong ;



__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_0, unsigned long VAR_1)
{
 ushort *VAR_2 = (ushort *)VAR_0, *VAR_3 = (ushort *)VAR_1;

 while (VAR_2 < VAR_3 && *VAR_2++ != 0x4489)
  ;
 if (VAR_2 < VAR_3) {
  while (*VAR_2 == 0x4489 && VAR_2 < VAR_3)
   VAR_2++;
  return (ulong)VAR_2;
 }
 return 0;
}

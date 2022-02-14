
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u16 ;


 int* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;

void FUNC_2(unsigned long VAR_0, void *VAR_1, unsigned long VAR_2)
{
 volatile __u16 *VAR_3 = FUNC_0(VAR_0);
 __u8 *VAR_4 = VAR_1;

 if (FUNC_1(VAR_0)) {
  while (VAR_2--)
   *VAR_4++ = *VAR_3 >> 8;
 } else {
  while (VAR_2--)
   *VAR_4++ = *VAR_3;
 }
}

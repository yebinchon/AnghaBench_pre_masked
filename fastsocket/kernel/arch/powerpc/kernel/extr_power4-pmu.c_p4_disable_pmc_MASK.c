
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_3, unsigned long VAR_4[])
{




 if (VAR_3 <= 1) {
  VAR_4[0] &= ~(0x1fUL << (VAR_0 - 7 * VAR_3));
 } else {
  VAR_4[1] &= ~(0x1fUL << (VAR_1 - 5 * (VAR_3 - 2)));
  if (VAR_3 == 7)
   VAR_4[2] &= ~(1UL << VAR_2);
 }
}

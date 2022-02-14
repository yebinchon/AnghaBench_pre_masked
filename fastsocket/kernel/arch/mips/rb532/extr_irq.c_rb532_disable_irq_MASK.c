
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* base_addr; unsigned int mask; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int volatile*) ;
 int FUNC_1 (unsigned int volatile*,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_5)
{
 int VAR_6 = VAR_5 - VAR_2;
 unsigned int VAR_7, VAR_8, VAR_9;
 volatile unsigned int *VAR_10;

 if (VAR_6 < 0) {
  FUNC_2(VAR_5);
 } else {
  VAR_7 = VAR_6 >> 5;

  VAR_6 &= (1 << 5) - 1;
  VAR_8 = 1 << VAR_6;
  VAR_10 = VAR_4[VAR_7].base_addr;
  VAR_9 = FUNC_0(VAR_10);
  VAR_9 |= VAR_8;
  FUNC_1(VAR_10, VAR_9);


  if (VAR_7 == VAR_1 && VAR_5 <= (VAR_3 + 13))
   FUNC_4(0, VAR_5 - VAR_0);





  if (VAR_9 == VAR_4[VAR_7].mask)
   FUNC_2(FUNC_3(VAR_7));
 }
}

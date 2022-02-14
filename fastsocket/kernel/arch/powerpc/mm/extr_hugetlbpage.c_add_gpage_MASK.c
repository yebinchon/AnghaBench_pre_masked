
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long* VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(unsigned long VAR_2, unsigned long VAR_3,
 unsigned long VAR_4)
{
 if (!VAR_2)
  return;
 while (VAR_4 > 0) {
  VAR_0[VAR_1] = VAR_2;
  VAR_1++;
  VAR_4--;
  VAR_2 += VAR_3;
 }
}

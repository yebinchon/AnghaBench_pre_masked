
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct reg_pair_t {scalar_t__ reg; scalar_t__ val; } ;



__attribute__((used)) static void FUNC_0(struct reg_pair_t *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 unsigned int VAR_4 = 0;

 while (VAR_0[VAR_4].reg || VAR_0[VAR_4].val) {
  if (VAR_0[VAR_4].reg == VAR_1) {
   VAR_0[VAR_4].val &= ~VAR_2;
   VAR_0[VAR_4].val |= VAR_3;
  }
  VAR_4++;

 }
 return;
}

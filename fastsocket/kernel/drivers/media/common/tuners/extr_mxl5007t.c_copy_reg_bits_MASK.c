
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_pair_t {scalar_t__ reg; scalar_t__ val; } ;



__attribute__((used)) static void FUNC_0(struct reg_pair_t *VAR_0,
     struct reg_pair_t *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 VAR_2 = VAR_3 = 0;

 while (VAR_0[VAR_2].reg || VAR_0[VAR_2].val) {
  while (VAR_1[VAR_3].reg || VAR_1[VAR_3].val) {
   if (VAR_0[VAR_2].reg != VAR_1[VAR_3].reg) {
    VAR_3++;
    continue;
   }
   VAR_1[VAR_3].val = VAR_0[VAR_2].val;
   break;
  }
  VAR_2++;
 }
 return;
}

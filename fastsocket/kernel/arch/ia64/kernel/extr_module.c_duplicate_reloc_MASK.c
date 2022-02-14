
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ r_info; scalar_t__ r_addend; } ;
typedef TYPE_1__ Elf64_Rela ;



__attribute__((used)) static int
FUNC_0 (const Elf64_Rela *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2].r_info == VAR_0[VAR_1].r_info && VAR_0[VAR_2].r_addend == VAR_0[VAR_1].r_addend)
   return 1;
 }
 return 0;
}

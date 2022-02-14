
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r_offset; } ;
typedef int Elf32_Sym ;
typedef TYPE_1__ Elf32_Rel ;


 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_0(Elf32_Rel *VAR_2, Elf32_Sym *VAR_3)
{

 VAR_1[VAR_0++] = VAR_2->r_offset;
}

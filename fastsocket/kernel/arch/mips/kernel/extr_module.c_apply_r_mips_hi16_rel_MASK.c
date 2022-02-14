
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct module {int dummy; } ;
struct mips_hi16 {struct mips_hi16* next; int value; int * addr; } ;
typedef int Elf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 struct mips_hi16* FUNC_0 (int,int ) ;
 struct mips_hi16* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct module *VAR_3, u32 *VAR_4, Elf_Addr VAR_5)
{
 struct mips_hi16 *VAR_6;






 VAR_6 = FUNC_0(sizeof *VAR_6, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->addr = (Elf_Addr *)VAR_4;
 VAR_6->value = VAR_5;
 VAR_6->next = VAR_2;
 VAR_2 = VAR_6;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct module {int dummy; } ;
typedef int Elf_Addr ;



__attribute__((used)) static int FUNC_0(struct module *VAR_0, u32 *VAR_1, Elf_Addr VAR_2)
{
 *VAR_1 = (*VAR_1 & 0xffff0000) | (VAR_2 & 0xffff);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int name; } ;
typedef int Elf_Shdr ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

int
FUNC_1(Elf_Shdr * VAR_1, const char *VAR_2,
        unsigned int VAR_3, unsigned int VAR_4, struct module *VAR_5)
{
 FUNC_0(".rel unsupported\n", VAR_5->name);
 return -VAR_0;
}

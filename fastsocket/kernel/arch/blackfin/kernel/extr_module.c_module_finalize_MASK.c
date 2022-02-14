
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_7__ {size_t e_shstrndx; unsigned int e_shnum; int e_flags; } ;
struct TYPE_6__ {int sh_offset; scalar_t__ sh_type; unsigned int sh_link; unsigned int sh_info; int sh_name; scalar_t__ sh_addr; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef TYPE_2__ Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 long FUNC_0 (TYPE_1__*,char const*,unsigned int,unsigned int,struct module*) ;
 int FUNC_1 (char*,char const*) ;

int
FUNC_2(const Elf_Ehdr * VAR_5,
  const Elf_Shdr * VAR_6, struct module *VAR_7)
{
 unsigned int VAR_8, VAR_9 = 0, VAR_10 = 0;
 char *VAR_11;
 long VAR_12 = 0;

 VAR_11 = (void *)VAR_5 + VAR_6[VAR_5->e_shstrndx].sh_offset;

 for (VAR_8 = 1; VAR_8 < VAR_5->e_shnum; VAR_8++) {

  if (VAR_6[VAR_8].sh_type == VAR_4) {
   VAR_10 = VAR_8;
   VAR_9 = VAR_6[VAR_8].sh_link;
  }
 }

 for (VAR_8 = 1; VAR_8 < VAR_5->e_shnum; VAR_8++) {
  const char *VAR_13 = (char *)VAR_6[VAR_9].sh_addr;
  unsigned int VAR_14 = VAR_6[VAR_8].sh_info;
  const char *VAR_15 = VAR_11 + VAR_6[VAR_8].sh_name;


  if (VAR_14 >= VAR_5->e_shnum)
   continue;


  if (VAR_6[VAR_8].sh_type != VAR_3)
   continue;

  if (!FUNC_1(".rela.l2.text", VAR_15) ||
      !FUNC_1(".rela.l1.text", VAR_15) ||
      (!FUNC_1(".rela.text", VAR_15) &&
    (VAR_5->e_flags & (VAR_0 | VAR_1)))) {

   VAR_12 = FUNC_0((Elf_Shdr *) VAR_6, VAR_13,
        VAR_10, VAR_8, VAR_7);
   if (VAR_12 < 0)
    return -VAR_2;
  }
 }

 return 0;
}

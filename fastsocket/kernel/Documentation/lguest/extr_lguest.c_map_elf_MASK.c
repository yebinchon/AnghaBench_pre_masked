
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int phdr ;
struct TYPE_6__ {int e_phnum; scalar_t__ e_type; scalar_t__ e_machine; int e_phentsize; unsigned long e_entry; int e_phoff; } ;
struct TYPE_5__ {scalar_t__ p_type; int p_filesz; int p_offset; scalar_t__ p_paddr; int p_memsz; } ;
typedef TYPE_1__ Elf32_Phdr ;
typedef TYPE_2__ Elf32_Ehdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,int ,int ,int ) ;
 int FUNC_5 (int,TYPE_1__*,int) ;
 int FUNC_6 (char*,unsigned int,int ,void*) ;

__attribute__((used)) static unsigned long FUNC_7(int VAR_4, const Elf32_Ehdr *VAR_5)
{
 Elf32_Phdr VAR_6[VAR_5->e_phnum];
 unsigned int VAR_7;





 if (VAR_5->e_type != VAR_1
     || VAR_5->e_machine != VAR_0
     || VAR_5->e_phentsize != sizeof(Elf32_Phdr)
     || VAR_5->e_phnum < 1 || VAR_5->e_phnum > 65536U/sizeof(Elf32_Phdr))
  FUNC_1(1, "Malformed elf header");
 if (FUNC_3(VAR_4, VAR_5->e_phoff, VAR_3) < 0)
  FUNC_0(1, "Seeking to program headers");
 if (FUNC_5(VAR_4, VAR_6, sizeof(VAR_6)) != sizeof(VAR_6))
  FUNC_0(1, "Reading program headers");





 for (VAR_7 = 0; VAR_7 < VAR_5->e_phnum; VAR_7++) {

  if (VAR_6[VAR_7].p_type != VAR_2)
   continue;

  FUNC_6("Section %i: size %i addr %p\n",
   VAR_7, VAR_6[VAR_7].p_memsz, (void *)VAR_6[VAR_7].p_paddr);


  FUNC_4(VAR_4, FUNC_2(VAR_6[VAR_7].p_paddr),
         VAR_6[VAR_7].p_offset, VAR_6[VAR_7].p_filesz);
 }


 return VAR_5->e_entry;
}

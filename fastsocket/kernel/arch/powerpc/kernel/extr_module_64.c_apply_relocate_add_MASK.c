
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef unsigned long u32 ;
struct TYPE_8__ {unsigned long toc; void* tramp; } ;
struct module {TYPE_1__ arch; int name; } ;
struct TYPE_11__ {int r_offset; unsigned long r_addend; int r_info; } ;
struct TYPE_10__ {size_t sh_info; int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_9__ {int st_name; unsigned long st_value; int st_shndx; } ;
typedef TYPE_2__ Elf64_Sym ;
typedef TYPE_3__ Elf64_Shdr ;
typedef TYPE_4__ Elf64_Rela ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_3 (TYPE_3__*,struct module*) ;
 int FUNC_4 (char*,int ,unsigned long) ;
 int FUNC_5 (unsigned long*,struct module*) ;
 void* FUNC_6 (TYPE_3__*,unsigned long,struct module*) ;

int FUNC_7(Elf64_Shdr *VAR_4,
         const char *VAR_5,
         unsigned int VAR_6,
         unsigned int VAR_7,
         struct module *VAR_8)
{
 unsigned int VAR_9;
 Elf64_Rela *VAR_10 = (void *)VAR_4[VAR_7].sh_addr;
 Elf64_Sym *VAR_11;
 unsigned long *VAR_12;
 unsigned long VAR_13;

 FUNC_0("Applying ADD relocate section %u to %u\n", VAR_7,
        VAR_4[VAR_7].sh_info);
 for (VAR_9 = 0; VAR_9 < VAR_4[VAR_7].sh_size / sizeof(*VAR_10); VAR_9++) {

  VAR_12 = (void *)VAR_4[VAR_4[VAR_7].sh_info].sh_addr
   + VAR_10[VAR_9].r_offset;

  VAR_11 = (Elf64_Sym *)VAR_4[VAR_6].sh_addr
   + FUNC_1(VAR_10[VAR_9].r_info);

  FUNC_0("RELOC at %p: %li-type as %s (%lu) + %li\n",
         VAR_12, (long)FUNC_2(VAR_10[VAR_9].r_info),
         VAR_5 + VAR_11->st_name, (unsigned long)VAR_11->st_value,
         (long)VAR_10[VAR_9].r_addend);


  VAR_13 = VAR_11->st_value + VAR_10[VAR_9].r_addend;

  switch (FUNC_2(VAR_10[VAR_9].r_info)) {
  case 134:

   *(u32 *)VAR_12 = VAR_13;
   break;

  case 133:

   *(unsigned long *)VAR_12 = VAR_13;
   break;

  case 131:
   *(unsigned long *)VAR_12 = FUNC_3(VAR_4, VAR_8);
   break;

  case 130:

   VAR_13 -= FUNC_3(VAR_4, VAR_8);
   if (VAR_13 + 0x8000 > 0xffff) {
    FUNC_4("%s: bad TOC16 relocation (%lu)\n",
           VAR_8->name, VAR_13);
    return -VAR_1;
   }
   *((uint16_t *) VAR_12)
    = (*((uint16_t *) VAR_12) & ~0xffff)
    | (VAR_13 & 0xffff);
   break;

  case 129:

   VAR_13 -= FUNC_3(VAR_4, VAR_8);
   if ((VAR_13 & 3) != 0 || VAR_13 + 0x8000 > 0xffff) {
    FUNC_4("%s: bad TOC16_DS relocation (%lu)\n",
           VAR_8->name, VAR_13);
    return -VAR_1;
   }
   *((uint16_t *) VAR_12)
    = (*((uint16_t *) VAR_12) & ~0xfffc)
    | (VAR_13 & 0xfffc);
   break;

  case 128:

   if (VAR_11->st_shndx == VAR_2) {

    VAR_13 = FUNC_6(VAR_4, VAR_13, VAR_8);
    if (!VAR_13)
     return -VAR_0;
    if (!FUNC_5((u32 *)VAR_12 + 1, VAR_8))
     return -VAR_1;
   }


   VAR_13 -= (unsigned long)VAR_12;
   if (VAR_13 + 0x2000000 > 0x3ffffff || (VAR_13 & 3) != 0){
    FUNC_4("%s: REL24 %li out of range!\n",
           VAR_8->name, (long int)VAR_13);
    return -VAR_1;
   }


   *(uint32_t *)VAR_12
    = (*(uint32_t *)VAR_12 & ~0x03fffffc)
    | (VAR_13 & 0x03fffffc);
   break;

  case 132:

   *VAR_12 = VAR_13 - (unsigned long)VAR_12;
   break;

  default:
   FUNC_4("%s: Unknown ADD relocation: %lu\n",
          VAR_8->name,
          (unsigned long)FUNC_2(VAR_10[VAR_9].r_info));
   return -VAR_1;
  }
 }
 return 0;
}

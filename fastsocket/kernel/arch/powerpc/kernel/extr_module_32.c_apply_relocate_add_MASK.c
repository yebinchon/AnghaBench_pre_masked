
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {void* tramp; } ;
struct module {int* module_core; TYPE_1__ arch; int name; } ;
struct TYPE_10__ {int r_offset; int r_addend; int r_info; } ;
struct TYPE_9__ {size_t sh_info; int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_8__ {int st_value; } ;
typedef TYPE_2__ Elf32_Sym ;
typedef TYPE_3__ Elf32_Shdr ;
typedef TYPE_4__ Elf32_Rela ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;






 void* FUNC_3 (int*,unsigned long,TYPE_3__*,struct module*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,int ,int) ;

int FUNC_5(Elf32_Shdr *VAR_2,
         const char *VAR_3,
         unsigned int VAR_4,
         unsigned int VAR_5,
         struct module *VAR_6)
{
 unsigned int VAR_7;
 Elf32_Rela *VAR_8 = (void *)VAR_2[VAR_5].sh_addr;
 Elf32_Sym *VAR_9;
 uint32_t *VAR_10;
 uint32_t VAR_11;

 FUNC_0("Applying ADD relocate section %u to %u\n", VAR_5,
        VAR_2[VAR_5].sh_info);
 for (VAR_7 = 0; VAR_7 < VAR_2[VAR_5].sh_size / sizeof(*VAR_8); VAR_7++) {

  VAR_10 = (void *)VAR_2[VAR_2[VAR_5].sh_info].sh_addr
   + VAR_8[VAR_7].r_offset;


  VAR_9 = (Elf32_Sym *)VAR_2[VAR_4].sh_addr
   + FUNC_1(VAR_8[VAR_7].r_info);

  VAR_11 = VAR_9->st_value + VAR_8[VAR_7].r_addend;

  switch (FUNC_2(VAR_8[VAR_7].r_info)) {
  case 130:

   *(uint32_t *)VAR_10 = VAR_11;
   break;

  case 131:

   *(uint16_t *)VAR_10 = VAR_11;
   break;

  case 132:

   *(uint16_t *)VAR_10 = (VAR_11 >> 16);
   break;

  case 133:




   *(uint16_t *)VAR_10 = (VAR_11 + 0x8000) >> 16;
   break;

  case 129:
   if ((int)(VAR_11 - (uint32_t)VAR_10) < -0x02000000
       || (int)(VAR_11 - (uint32_t)VAR_10) >= 0x02000000)
    VAR_11 = FUNC_3(VAR_10, VAR_11,
          VAR_2, VAR_6);


   FUNC_0("REL24 value = %08X. location = %08X\n",
          VAR_11, (uint32_t)VAR_10);
   FUNC_0("Location before: %08X.\n",
          *(uint32_t *)VAR_10);
   *(uint32_t *)VAR_10
    = (*(uint32_t *)VAR_10 & ~0x03fffffc)
    | ((VAR_11 - (uint32_t)VAR_10)
       & 0x03fffffc);
   FUNC_0("Location after: %08X.\n",
          *(uint32_t *)VAR_10);
   FUNC_0("ie. jump to %08X+%08X = %08X\n",
          *(uint32_t *)VAR_10 & 0x03fffffc,
          (uint32_t)VAR_10,
          (*(uint32_t *)VAR_10 & 0x03fffffc)
          + (uint32_t)VAR_10);
   break;

  case 128:

   *(uint32_t *)VAR_10 = VAR_11 - (uint32_t)VAR_10;
   break;

  default:
   FUNC_4("%s: unknown ADD relocation: %u\n",
          VAR_6->name,
          FUNC_2(VAR_8[VAR_7].r_info));
   return -VAR_0;
  }
 }






 return 0;
}

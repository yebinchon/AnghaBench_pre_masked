
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct module {int name; } ;
struct TYPE_7__ {unsigned long r_offset; int r_info; scalar_t__ r_addend; } ;
struct TYPE_6__ {unsigned long st_value; } ;
struct TYPE_5__ {unsigned long sh_addr; size_t sh_info; int sh_size; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef TYPE_2__ Elf32_Sym ;
typedef TYPE_3__ Elf32_Rela ;






 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (void*,unsigned long*,unsigned long) ;
 int FUNC_4 (void*,unsigned long*,unsigned long) ;
 int FUNC_5 (void*,unsigned long*,unsigned long) ;
 int FUNC_6 (char*,int ,unsigned long,unsigned long,...) ;
 int FUNC_7 (char*,int ,unsigned long) ;

int
FUNC_8(Elf_Shdr *VAR_2, const char *VAR_3,
     unsigned int VAR_4, unsigned int VAR_5,
     struct module *VAR_6)
{
 unsigned int VAR_7;
 Elf32_Rela *VAR_8 = (void *)VAR_2[VAR_5].sh_addr;
 Elf32_Sym *VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12;

 FUNC_6("applying relocate section %u to %u\n", VAR_6->name,
  VAR_5, VAR_2[VAR_5].sh_info);

 for (VAR_7 = 0; VAR_7 < VAR_2[VAR_5].sh_size / sizeof(*VAR_8); VAR_7++) {

  VAR_10 = VAR_2[VAR_2[VAR_5].sh_info].sh_addr +
             VAR_8[VAR_7].r_offset;



  VAR_9 = (Elf32_Sym *) VAR_2[VAR_4].sh_addr
      + FUNC_0(VAR_8[VAR_7].r_info);
  VAR_11 = VAR_9->st_value;
  VAR_11 += VAR_8[VAR_7].r_addend;
  FUNC_6("location is %lx, value is %lx type is %d\n",
   VAR_6->name, VAR_10, VAR_11, FUNC_1(VAR_8[VAR_7].r_info));

  switch (FUNC_1(VAR_8[VAR_7].r_info)) {

  case 135:
   VAR_11 >>= 16;
  case 134:
  case 128:
   VAR_12 = 2;
   break;
  case 136:
   VAR_12 = 4;
   break;

  case 130:
  case 129:
  case 132:
  case 131:
  case 133:
   FUNC_7("unsupported relocation: %u (no -mlong-calls?)\n",
    VAR_6->name, FUNC_1(VAR_8[VAR_7].r_info));
   return -VAR_1;

  default:
   FUNC_7("unknown relocation: %u\n", VAR_6->name,
    FUNC_1(VAR_8[VAR_7].r_info));
   return -VAR_1;
  }

  switch (FUNC_2(VAR_10, VAR_12)) {
  case 140:
  case 139:
   FUNC_5((void *)VAR_10, &VAR_11, VAR_12);
   break;
  case 138:
   FUNC_3((void *)VAR_10, &VAR_11, VAR_12);
   break;
  case 137:
   FUNC_4((void *)VAR_10, &VAR_11, VAR_12);
   break;
  default:
   FUNC_7("invalid relocation for %#lx\n",
    VAR_6->name, VAR_10);
   return -VAR_1;
  }
 }

 return 0;
}

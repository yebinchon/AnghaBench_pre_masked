
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* bss_l2; void* data_l2; void* text_l2; void* bss_b_l1; void* data_b_l1; void* bss_a_l1; void* data_a_l1; void* text_l1; } ;
struct module {int name; TYPE_1__ arch; } ;
struct TYPE_8__ {int e_shnum; int e_flags; } ;
struct TYPE_7__ {int sh_name; scalar_t__ sh_size; unsigned long sh_addr; int sh_flags; } ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,void*,scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (void*,void*,scalar_t__) ;
 int FUNC_8 (void*,int ,scalar_t__) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,char const*) ;

int
FUNC_11(Elf_Ehdr *VAR_5, Elf_Shdr *VAR_6,
     char *VAR_7, struct module *VAR_8)
{







 Elf_Shdr *VAR_9, *VAR_10 = VAR_6 + VAR_5->e_shnum;
 void *VAR_11;

 for (VAR_9 = VAR_6; VAR_9 < VAR_10; ++VAR_9) {
  const char *VAR_12 = VAR_7 + VAR_9->sh_name;

  if (VAR_9->sh_size == 0)
   continue;

  if (!FUNC_10(".l1.text", VAR_12) ||
      (!FUNC_10(".text", VAR_12) &&
       (VAR_5->e_flags & VAR_0))) {

   VAR_11 = FUNC_4(VAR_9->sh_size);
   VAR_8->arch.text_l1 = VAR_11;
   if (VAR_11 == ((void*)0)) {
    FUNC_9("L1 inst memory allocation failed\n",
     VAR_8->name);
    return -1;
   }
   FUNC_0(VAR_11, (void *)VAR_9->sh_addr, VAR_9->sh_size);

  } else if (!FUNC_10(".l1.data", VAR_12) ||
             (!FUNC_10(".data", VAR_12) &&
              (VAR_5->e_flags & VAR_2))) {

   VAR_11 = FUNC_2(VAR_9->sh_size);
   VAR_8->arch.data_a_l1 = VAR_11;
   if (VAR_11 == ((void*)0)) {
    FUNC_9("L1 data memory allocation failed\n",
     VAR_8->name);
    return -1;
   }
   FUNC_7(VAR_11, (void *)VAR_9->sh_addr, VAR_9->sh_size);

  } else if (!FUNC_10(".l1.bss", VAR_12) ||
             (!FUNC_10(".bss", VAR_12) &&
              (VAR_5->e_flags & VAR_2))) {

   VAR_11 = FUNC_3(VAR_9->sh_size);
   VAR_8->arch.bss_a_l1 = VAR_11;
   if (VAR_11 == ((void*)0)) {
    FUNC_9("L1 data memory allocation failed\n",
     VAR_8->name);
    return -1;
   }

  } else if (!FUNC_10(".l1.data.B", VAR_12)) {

   VAR_11 = FUNC_1(VAR_9->sh_size);
   VAR_8->arch.data_b_l1 = VAR_11;
   if (VAR_11 == ((void*)0)) {
    FUNC_9("L1 data memory allocation failed\n",
     VAR_8->name);
    return -1;
   }
   FUNC_7(VAR_11, (void *)VAR_9->sh_addr, VAR_9->sh_size);

  } else if (!FUNC_10(".l1.bss.B", VAR_12)) {

   VAR_11 = FUNC_1(VAR_9->sh_size);
   VAR_8->arch.bss_b_l1 = VAR_11;
   if (VAR_11 == ((void*)0)) {
    FUNC_9("L1 data memory allocation failed\n",
     VAR_8->name);
    return -1;
   }
   FUNC_8(VAR_11, 0, VAR_9->sh_size);

  } else if (!FUNC_10(".l2.text", VAR_12) ||
             (!FUNC_10(".text", VAR_12) &&
              (VAR_5->e_flags & VAR_1))) {

   VAR_11 = FUNC_5(VAR_9->sh_size);
   VAR_8->arch.text_l2 = VAR_11;
   if (VAR_11 == ((void*)0)) {
    FUNC_9("L2 SRAM allocation failed\n",
     VAR_8->name);
    return -1;
   }
   FUNC_7(VAR_11, (void *)VAR_9->sh_addr, VAR_9->sh_size);

  } else if (!FUNC_10(".l2.data", VAR_12) ||
             (!FUNC_10(".data", VAR_12) &&
              (VAR_5->e_flags & VAR_3))) {

   VAR_11 = FUNC_5(VAR_9->sh_size);
   VAR_8->arch.data_l2 = VAR_11;
   if (VAR_11 == ((void*)0)) {
    FUNC_9("L2 SRAM allocation failed\n",
     VAR_8->name);
    return -1;
   }
   FUNC_7(VAR_11, (void *)VAR_9->sh_addr, VAR_9->sh_size);

  } else if (!FUNC_10(".l2.bss", VAR_12) ||
             (!FUNC_10(".bss", VAR_12) &&
              (VAR_5->e_flags & VAR_3))) {

   VAR_11 = FUNC_6(VAR_9->sh_size);
   VAR_8->arch.bss_l2 = VAR_11;
   if (VAR_11 == ((void*)0)) {
    FUNC_9("L2 SRAM allocation failed\n",
     VAR_8->name);
    return -1;
   }

  } else
   continue;

  VAR_9->sh_flags &= ~VAR_4;
  VAR_9->sh_addr = (unsigned long)VAR_11;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct elf_phdr {scalar_t__ p_type; int p_memsz; scalar_t__ p_vaddr; } ;
struct TYPE_2__ {int e_phnum; scalar_t__ e_phoff; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct file*,void*,size_t) ;

int FUNC_2(struct file *VAR_3, size_t *VAR_4,
         unsigned long VAR_5)
{
 const struct elf_phdr *const VAR_6 =
  (const struct elf_phdr *) (VAR_0 + VAR_1->e_phoff);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1->e_phnum; ++VAR_7) {
  if (VAR_6[VAR_7].p_type == VAR_2) {
   void *VAR_8 = (void *)VAR_6[VAR_7].p_vaddr;
   size_t VAR_9 = FUNC_0(VAR_6[VAR_7].p_memsz);

   *VAR_4 += VAR_9;
   if (*VAR_4 > VAR_5 || !FUNC_1(VAR_3, VAR_8, VAR_9))
    return 0;
   break;
  }
 }
 return 1;
}

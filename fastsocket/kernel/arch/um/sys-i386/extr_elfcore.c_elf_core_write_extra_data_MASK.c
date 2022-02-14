
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct elfhdr {int e_phnum; scalar_t__ e_phoff; } ;
struct elf_phdr {scalar_t__ p_type; size_t p_filesz; scalar_t__ p_vaddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*,void*,size_t) ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct file *VAR_2, size_t *VAR_3,
         unsigned long VAR_4)
{
 if ( VAR_1 ) {
  const struct elfhdr *const VAR_5 =
   (struct elfhdr *) VAR_1;
  const struct elf_phdr *const VAR_6 =
   (const struct elf_phdr *) (VAR_1 + VAR_5->e_phoff);
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_5->e_phnum; ++VAR_7) {
   if (VAR_6[VAR_7].p_type == VAR_0) {
    void *VAR_8 = (void *) VAR_6[VAR_7].p_vaddr;
    size_t VAR_9 = VAR_6[VAR_7].p_filesz;

    *VAR_3 += VAR_9;
    if (*VAR_3 > VAR_4
        || !FUNC_0(VAR_2, VAR_8, VAR_9))
     return 0;
   }
  }
 }
 return 1;
}

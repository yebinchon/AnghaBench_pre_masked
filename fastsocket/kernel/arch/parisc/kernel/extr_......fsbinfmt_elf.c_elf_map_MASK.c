
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct elf_phdr {unsigned long p_filesz; unsigned long p_offset; int p_vaddr; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned long) ;
 TYPE_2__* VAR_0 ;
 unsigned long FUNC_4 (struct file*,unsigned long,unsigned long,int,int,unsigned long) ;
 int FUNC_5 (TYPE_1__*,unsigned long,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static unsigned long FUNC_8(struct file *VAR_1, unsigned long VAR_2,
  struct elf_phdr *VAR_3, int VAR_4, int VAR_5,
  unsigned long VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8 = VAR_3->p_filesz + FUNC_2(VAR_3->p_vaddr);
 unsigned long VAR_9 = VAR_3->p_offset - FUNC_2(VAR_3->p_vaddr);
 VAR_2 = FUNC_3(VAR_2);
 VAR_8 = FUNC_1(VAR_8);



 if (!VAR_8)
  return VAR_2;

 FUNC_6(&VAR_0->mm->mmap_sem);
 if (VAR_6) {
  VAR_6 = FUNC_1(VAR_6);
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_6, VAR_4, VAR_5, VAR_9);
  if (!FUNC_0(VAR_7))
   FUNC_5(VAR_0->mm, VAR_7+VAR_8, VAR_6-VAR_8);
 } else
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_8, VAR_4, VAR_5, VAR_9);

 FUNC_7(&VAR_0->mm->mmap_sem);
 return(VAR_7);
}

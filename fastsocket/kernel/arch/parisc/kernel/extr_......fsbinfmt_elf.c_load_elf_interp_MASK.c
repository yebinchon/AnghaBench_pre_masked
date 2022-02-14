
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
struct elfhdr {scalar_t__ e_type; int e_phentsize; int e_phnum; int e_phoff; } ;
struct elf_phdr {scalar_t__ p_type; int p_flags; unsigned long p_vaddr; unsigned long p_filesz; unsigned long p_memsz; } ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_5__ {int mmap_sem; } ;
struct TYPE_4__ {int mmap; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 unsigned long VAR_18 ;
 TYPE_3__* VAR_19 ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct elfhdr*) ;
 unsigned long FUNC_5 (struct file*,unsigned long,struct elf_phdr*,int,int,unsigned long) ;
 int FUNC_6 (struct file*,int ,char*,int) ;
 int FUNC_7 (struct elf_phdr*) ;
 struct elf_phdr* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (unsigned long) ;
 unsigned long FUNC_10 (struct elf_phdr*,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static unsigned long FUNC_12(struct elfhdr *VAR_20,
  struct file *VAR_21, unsigned long *VAR_22,
  unsigned long VAR_23)
{
 struct elf_phdr *VAR_24;
 struct elf_phdr *VAR_25;
 unsigned long VAR_26 = 0;
 int VAR_27 = 0;
 unsigned long VAR_28 = 0, VAR_29 = 0;
 unsigned long VAR_30 = ~0UL;
 unsigned long VAR_31;
 int VAR_32, VAR_33, VAR_34;


 if (VAR_20->e_type != VAR_6 &&
     VAR_20->e_type != VAR_5)
  goto out;
 if (!FUNC_4(VAR_20))
  goto out;
 if (!VAR_21->f_op || !VAR_21->f_op->mmap)
  goto out;





 if (VAR_20->e_phentsize != sizeof(struct elf_phdr))
  goto out;
 if (VAR_20->e_phnum < 1 ||
  VAR_20->e_phnum > 65536U / sizeof(struct elf_phdr))
  goto out;


 VAR_34 = sizeof(struct elf_phdr) * VAR_20->e_phnum;
 if (VAR_34 > VAR_3)
  goto out;
 VAR_24 = FUNC_8(VAR_34, VAR_7);
 if (!VAR_24)
  goto out;

 VAR_32 = FUNC_6(VAR_21, VAR_20->e_phoff,
        (char *)VAR_24,VAR_34);
 VAR_30 = -VAR_2;
 if (VAR_32 != VAR_34) {
  if (VAR_32 < 0)
   VAR_30 = VAR_32;
  goto out_close;
 }

 VAR_31 = FUNC_10(VAR_24, VAR_20->e_phnum);
 if (!VAR_31) {
  VAR_30 = -VAR_1;
  goto out_close;
 }

 VAR_25 = VAR_24;
 for (VAR_33 = 0; VAR_33 < VAR_20->e_phnum; VAR_33++, VAR_25++) {
  if (VAR_25->p_type == VAR_17) {
   int VAR_35 = VAR_10 | VAR_8;
   int VAR_36 = 0;
   unsigned long VAR_37 = 0;
   unsigned long VAR_38, VAR_39;

   if (VAR_25->p_flags & VAR_11)
        VAR_36 = VAR_15;
   if (VAR_25->p_flags & VAR_12)
    VAR_36 |= VAR_16;
   if (VAR_25->p_flags & VAR_13)
    VAR_36 |= VAR_14;
   VAR_37 = VAR_25->p_vaddr;
   if (VAR_20->e_type == VAR_6 || VAR_27)
    VAR_35 |= VAR_9;
   else if (VAR_23 && VAR_20->e_type == VAR_5)
    VAR_26 = -VAR_37;

   VAR_39 = FUNC_5(VAR_21, VAR_26 + VAR_37,
     VAR_25, VAR_36, VAR_35, VAR_31);
   VAR_31 = 0;
   if (!*VAR_22)
    *VAR_22 = VAR_39;
   VAR_30 = VAR_39;
   if (FUNC_0(VAR_39))
    goto out_close;

   if (!VAR_27 &&
       VAR_20->e_type == VAR_5) {
    VAR_26 = VAR_39 - FUNC_1(VAR_37);
    VAR_27 = 1;
   }






   VAR_38 = VAR_26 + VAR_25->p_vaddr;
   if (FUNC_0(VAR_38) ||
       VAR_25->p_filesz > VAR_25->p_memsz ||
       VAR_25->p_memsz > VAR_18 ||
       VAR_18 - VAR_25->p_memsz < VAR_38) {
    VAR_30 = -VAR_4;
    goto out_close;
   }





   VAR_38 = VAR_26 + VAR_25->p_vaddr + VAR_25->p_filesz;
   if (VAR_38 > VAR_29)
    VAR_29 = VAR_38;





   VAR_38 = VAR_26 + VAR_25->p_memsz + VAR_25->p_vaddr;
   if (VAR_38 > VAR_28)
    VAR_28 = VAR_38;
  }
 }

 if (VAR_28 > VAR_29) {






  if (FUNC_9(VAR_29)) {
   VAR_30 = -VAR_0;
   goto out_close;
  }


  VAR_29 = FUNC_1(VAR_29 + VAR_3 - 1);


  FUNC_3(&VAR_19->mm->mmap_sem);
  VAR_30 = FUNC_2(VAR_29, VAR_28 - VAR_29);
  FUNC_11(&VAR_19->mm->mmap_sem);
  if (FUNC_0(VAR_30))
   goto out_close;
 }

 VAR_30 = VAR_26;

out_close:
 FUNC_7(VAR_24);
out:
 return VAR_30;
}

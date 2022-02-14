
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
struct elfhdr {scalar_t__ e_type; int e_phnum; int e_phoff; int e_ident; } ;
struct elf_phdr {scalar_t__ p_type; int p_vaddr; unsigned long p_filesz; unsigned long p_memsz; scalar_t__ p_offset; } ;
typedef int elf_ex ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_5__ {int mmap_sem; } ;
struct TYPE_4__ {int mmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 TYPE_3__* VAR_15 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct file*,int,scalar_t__,int,int,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct elfhdr*) ;
 int FUNC_6 (struct file*,int ,char*,int) ;
 int FUNC_7 (struct elf_phdr*) ;
 struct elf_phdr* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (unsigned long) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_16)
{
 struct elf_phdr *VAR_17;
 struct elf_phdr *VAR_18;
 unsigned long VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 struct elfhdr VAR_26;

 VAR_23 = -VAR_3;
 VAR_22 = FUNC_6(VAR_16, 0, (char *)&VAR_26, sizeof(VAR_26));
 if (VAR_22 != sizeof(VAR_26))
  goto out;

 if (FUNC_9(VAR_26.e_ident, VAR_1, VAR_14) != 0)
  goto out;


 if (VAR_26.e_type != VAR_5 || VAR_26.e_phnum > 2 ||
     !FUNC_5(&VAR_26) || !VAR_16->f_op || !VAR_16->f_op->mmap)
  goto out;



 VAR_25 = sizeof(struct elf_phdr) * VAR_26.e_phnum;


 VAR_23 = -VAR_4;
 VAR_17 = FUNC_8(VAR_25, VAR_6);
 if (!VAR_17)
  goto out;

 VAR_18 = VAR_17;
 VAR_23 = -VAR_3;
 VAR_22 = FUNC_6(VAR_16, VAR_26.e_phoff, (char *)VAR_18, VAR_25);
 if (VAR_22 != VAR_25)
  goto out_free_ph;

 for (VAR_25 = 0, VAR_24 = 0; VAR_24<VAR_26.e_phnum; VAR_24++)
  if ((VAR_18 + VAR_24)->p_type == VAR_13)
   VAR_25++;
 if (VAR_25 != 1)
  goto out_free_ph;

 while (VAR_18->p_type != VAR_13)
  VAR_18++;


 FUNC_4(&VAR_15->mm->mmap_sem);
 VAR_23 = FUNC_3(VAR_16,
   FUNC_1(VAR_18->p_vaddr),
   (VAR_18->p_filesz +
    FUNC_0(VAR_18->p_vaddr)),
   VAR_11 | VAR_12 | VAR_10,
   VAR_8 | VAR_9 | VAR_7,
   (VAR_18->p_offset -
    FUNC_0(VAR_18->p_vaddr)));
 FUNC_11(&VAR_15->mm->mmap_sem);
 if (VAR_23 != FUNC_1(VAR_18->p_vaddr))
  goto out_free_ph;

 VAR_19 = VAR_18->p_vaddr + VAR_18->p_filesz;
 if (FUNC_10(VAR_19)) {
  VAR_23 = -VAR_0;
  goto out_free_ph;
 }

 VAR_21 = FUNC_1(VAR_18->p_filesz + VAR_18->p_vaddr +
       VAR_2 - 1);
 VAR_20 = VAR_18->p_memsz + VAR_18->p_vaddr;
 if (VAR_20 > VAR_21) {
  FUNC_4(&VAR_15->mm->mmap_sem);
  FUNC_2(VAR_21, VAR_20 - VAR_21);
  FUNC_11(&VAR_15->mm->mmap_sem);
 }
 VAR_23 = 0;

out_free_ph:
 FUNC_7(VAR_17);
out:
 return VAR_23;
}

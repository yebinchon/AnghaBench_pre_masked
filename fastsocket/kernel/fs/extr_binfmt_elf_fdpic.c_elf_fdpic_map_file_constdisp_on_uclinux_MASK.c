
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mm_struct {unsigned long start_code; unsigned long end_code; unsigned long start_data; scalar_t__ end_data; int mmap_sem; } ;
struct file {TYPE_3__* f_op; } ;
struct TYPE_5__ {int e_phnum; } ;
struct elf_fdpic_params {unsigned long load_addr; int flags; unsigned long elfhdr_addr; struct elf32_phdr* phdrs; TYPE_2__ hdr; TYPE_1__* loadmap; } ;
struct elf32_phdr {scalar_t__ p_type; unsigned long p_vaddr; unsigned long p_memsz; scalar_t__ p_offset; unsigned long p_filesz; int p_flags; } ;
struct elf32_fdpic_loadseg {unsigned long addr; unsigned long p_vaddr; unsigned long p_memsz; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {int (* read ) (struct file*,void*,unsigned long,scalar_t__*) ;} ;
struct TYPE_4__ {struct elf32_fdpic_loadseg* segs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_2 (void*,unsigned long) ;
 unsigned long FUNC_3 (int *,unsigned long,unsigned long,int,unsigned long,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct file*,void*,unsigned long,scalar_t__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(
 struct elf_fdpic_params *VAR_9,
 struct file *VAR_10,
 struct mm_struct *VAR_11)
{
 struct elf32_fdpic_loadseg *VAR_12;
 struct elf32_phdr *VAR_13;
 unsigned long VAR_14, VAR_15 = VAR_8, VAR_16 = 0, VAR_17 = 0, VAR_18;
 loff_t VAR_19;
 int VAR_20, VAR_21;

 VAR_14 = VAR_9->load_addr;
 VAR_12 = VAR_9->loadmap->segs;



 VAR_13 = VAR_9->phdrs;
 for (VAR_20 = 0; VAR_20 < VAR_9->hdr.e_phnum; VAR_20++, VAR_13++) {
  if (VAR_9->phdrs[VAR_20].p_type != VAR_7)
   continue;

  if (VAR_15 > VAR_13->p_vaddr)
   VAR_15 = VAR_13->p_vaddr;
  if (VAR_16 < VAR_13->p_vaddr + VAR_13->p_memsz)
   VAR_16 = VAR_13->p_vaddr + VAR_13->p_memsz;
 }


 VAR_18 = VAR_2;
 if (VAR_9->flags & VAR_0)
  VAR_18 |= VAR_1;

 FUNC_4(&VAR_11->mmap_sem);
 VAR_17 = FUNC_3(((void*)0), VAR_14, VAR_16 - VAR_15,
   VAR_5 | VAR_6 | VAR_4, VAR_18, 0);
 FUNC_6(&VAR_11->mmap_sem);
 if (FUNC_0(VAR_17))
  return (int) VAR_17;

 if (VAR_14 != 0)
  VAR_14 += FUNC_1(VAR_16 - VAR_15);


 VAR_13 = VAR_9->phdrs;
 for (VAR_20 = 0; VAR_20 < VAR_9->hdr.e_phnum; VAR_20++, VAR_13++) {
  if (VAR_9->phdrs[VAR_20].p_type != VAR_7)
   continue;

  VAR_19 = VAR_13->p_offset;

  VAR_12->addr = VAR_17 + (VAR_13->p_vaddr - VAR_15);
  VAR_12->p_vaddr = VAR_13->p_vaddr;
  VAR_12->p_memsz = VAR_13->p_memsz;

  VAR_21 = VAR_10->f_op->read(VAR_10, (void *) VAR_12->addr,
           VAR_13->p_filesz, &VAR_19);
  if (VAR_21 < 0)
   return VAR_21;


  if (VAR_13->p_offset == 0)
   VAR_9->elfhdr_addr = VAR_12->addr;


  if (VAR_13->p_filesz < VAR_13->p_memsz) {
   VAR_21 = FUNC_2((void *) (VAR_12->addr + VAR_13->p_filesz),
      VAR_13->p_memsz - VAR_13->p_filesz);
   if (VAR_21)
    return VAR_21;
  }

  if (VAR_11) {
   if (VAR_13->p_flags & VAR_3) {
    if (!VAR_11->start_code) {
     VAR_11->start_code = VAR_12->addr;
     VAR_11->end_code = VAR_12->addr +
      VAR_13->p_memsz;
    }
   } else if (!VAR_11->start_data) {
    VAR_11->start_data = VAR_12->addr;

    VAR_11->end_data = VAR_12->addr + VAR_13->p_memsz;

   }





  }

  VAR_12++;
 }

 return 0;
}

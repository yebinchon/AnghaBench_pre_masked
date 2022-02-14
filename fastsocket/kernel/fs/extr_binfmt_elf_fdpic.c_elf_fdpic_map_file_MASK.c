
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_8__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct elf_phdr {int dummy; } ;
struct TYPE_9__ {int e_phnum; scalar_t__ e_entry; unsigned long e_phoff; } ;
struct elf_fdpic_params {unsigned long load_addr; int flags; scalar_t__ entry_addr; scalar_t__ ph_addr; scalar_t__ dynamic_addr; int elfhdr_addr; TYPE_4__ hdr; struct elf32_phdr* phdrs; struct elf32_fdpic_loadmap* loadmap; } ;
struct elf32_phdr {scalar_t__ p_type; unsigned long p_offset; unsigned long p_filesz; scalar_t__ p_vaddr; int p_memsz; } ;
struct elf32_fdpic_loadseg {scalar_t__ p_vaddr; scalar_t__ p_memsz; scalar_t__ addr; } ;
struct elf32_fdpic_loadmap {unsigned int nsegs; struct elf32_fdpic_loadseg* segs; int version; } ;
struct TYPE_10__ {scalar_t__ d_tag; } ;
struct TYPE_7__ {TYPE_1__* d_inode; } ;
struct TYPE_6__ {int i_ino; } ;
typedef TYPE_5__ Elf32_Dyn ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct elf_fdpic_params*,struct file*,struct mm_struct*) ;
 int FUNC_2 (struct elf_fdpic_params*,struct file*,struct mm_struct*) ;
 int FUNC_3 (char*,...) ;
 struct elf32_fdpic_loadmap* FUNC_4 (size_t,int ) ;
 int FUNC_5 (char*,char const*,int ) ;

__attribute__((used)) static int FUNC_6(struct elf_fdpic_params *VAR_8,
         struct file *VAR_9,
         struct mm_struct *VAR_10,
         const char *VAR_11)
{
 struct elf32_fdpic_loadmap *VAR_12;



 struct elf32_fdpic_loadseg *VAR_13;
 struct elf32_phdr *VAR_14;
 unsigned long VAR_15, VAR_16;
 unsigned VAR_17, VAR_18;
 size_t VAR_19;
 int VAR_20, VAR_21;


 VAR_17 = 0;
 for (VAR_20 = 0; VAR_20 < VAR_8->hdr.e_phnum; VAR_20++)
  if (VAR_8->phdrs[VAR_20].p_type == VAR_7)
   VAR_17++;

 if (VAR_17 == 0)
  return -VAR_2;

 VAR_19 = sizeof(*VAR_12) + VAR_17 * sizeof(*VAR_13);
 VAR_12 = FUNC_4(VAR_19, VAR_4);
 if (!VAR_12)
  return -VAR_3;

 VAR_8->loadmap = VAR_12;

 VAR_12->version = VAR_0;
 VAR_12->nsegs = VAR_17;

 VAR_15 = VAR_8->load_addr;
 VAR_13 = VAR_12->segs;


 switch (VAR_8->flags & VAR_1) {
 case 129:
 case 128:

  VAR_21 = FUNC_2(VAR_8, VAR_9, VAR_10);
  if (VAR_21 < 0)
   return VAR_21;
  break;

 default:
  VAR_21 = FUNC_1(VAR_8, VAR_9, VAR_10);
  if (VAR_21 < 0)
   return VAR_21;
  break;
 }


 if (VAR_8->hdr.e_entry) {
  VAR_13 = VAR_12->segs;
  for (VAR_20 = VAR_12->nsegs; VAR_20 > 0; VAR_20--, VAR_13++) {
   if (VAR_8->hdr.e_entry >= VAR_13->p_vaddr &&
       VAR_8->hdr.e_entry < VAR_13->p_vaddr + VAR_13->p_memsz) {
    VAR_8->entry_addr =
     (VAR_8->hdr.e_entry - VAR_13->p_vaddr) +
     VAR_13->addr;
    break;
   }
  }
 }


 VAR_16 = VAR_8->hdr.e_phoff;
 VAR_16 += VAR_8->hdr.e_phnum * sizeof (struct elf_phdr);
 VAR_14 = VAR_8->phdrs;

 for (VAR_20 = 0; VAR_20 < VAR_8->hdr.e_phnum; VAR_20++, VAR_14++) {
  if (VAR_14->p_type != VAR_7)
   continue;

  if (VAR_14->p_offset > VAR_8->hdr.e_phoff ||
      VAR_14->p_offset + VAR_14->p_filesz < VAR_16)
   continue;

  VAR_13 = VAR_12->segs;
  for (VAR_20 = VAR_12->nsegs; VAR_20 > 0; VAR_20--, VAR_13++) {
   if (VAR_14->p_vaddr >= VAR_13->p_vaddr &&
       VAR_14->p_vaddr + VAR_14->p_filesz <=
       VAR_13->p_vaddr + VAR_13->p_memsz) {
    VAR_8->ph_addr =
     (VAR_14->p_vaddr - VAR_13->p_vaddr) +
     VAR_13->addr +
     VAR_8->hdr.e_phoff - VAR_14->p_offset;
    break;
   }
  }
  break;
 }


 VAR_14 = VAR_8->phdrs;
 for (VAR_20 = 0; VAR_20 < VAR_8->hdr.e_phnum; VAR_20++, VAR_14++) {
  if (VAR_14->p_type != VAR_6)
   continue;

  VAR_13 = VAR_12->segs;
  for (VAR_20 = VAR_12->nsegs; VAR_20 > 0; VAR_20--, VAR_13++) {
   if (VAR_14->p_vaddr >= VAR_13->p_vaddr &&
       VAR_14->p_vaddr + VAR_14->p_memsz <=
       VAR_13->p_vaddr + VAR_13->p_memsz) {
    VAR_8->dynamic_addr =
     (VAR_14->p_vaddr - VAR_13->p_vaddr) +
     VAR_13->addr;




    if (VAR_14->p_memsz == 0 ||
        VAR_14->p_memsz % sizeof(Elf32_Dyn) != 0)
     goto dynamic_error;

    VAR_18 = VAR_14->p_memsz / sizeof(Elf32_Dyn);
    if (((Elf32_Dyn *)
         VAR_8->dynamic_addr)[VAR_18 - 1].d_tag != 0)
     goto dynamic_error;
    break;
   }
  }
  break;
 }
 FUNC_3("Mapped Object [%s]:", VAR_11);
 FUNC_3("- elfhdr   : %lx", VAR_8->elfhdr_addr);
 FUNC_3("- entry    : %lx", VAR_8->entry_addr);
 FUNC_3("- PHDR[]   : %lx", VAR_8->ph_addr);
 FUNC_3("- DYNAMIC[]: %lx", VAR_8->dynamic_addr);
 VAR_13 = VAR_12->segs;
 for (VAR_20 = 0; VAR_20 < VAR_12->nsegs; VAR_20++, VAR_13++)
  FUNC_3("- LOAD[%d] : %08x-%08x [va=%x ms=%x]",
         VAR_20,
         VAR_13->addr, VAR_13->addr + VAR_13->p_memsz - 1,
         VAR_13->p_vaddr, VAR_13->p_memsz);

 return 0;

dynamic_error:
 FUNC_5("ELF FDPIC %s with invalid DYNAMIC section (inode=%lu)\n",
        VAR_11, VAR_9->f_path.dentry->d_inode->i_ino);
 return -VAR_2;
}

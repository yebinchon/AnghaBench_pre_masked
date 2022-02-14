
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct mem_chunk {scalar_t__ size; scalar_t__ type; int addr; } ;
struct TYPE_3__ {scalar_t__ p_filesz; scalar_t__ p_memsz; int p_flags; int p_align; int p_paddr; int p_vaddr; int p_offset; int p_type; } ;
typedef TYPE_1__ Elf64_Phdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mem_chunk* FUNC_0 () ;
 int FUNC_1 (struct mem_chunk*) ;

__attribute__((used)) static int FUNC_2(Elf64_Phdr *VAR_8, u64 VAR_9)
{
 struct mem_chunk *VAR_10, *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_0();
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_11 = &VAR_10[VAR_12];
  if (VAR_11->size == 0)
   break;
  if (VAR_10[VAR_12].type != VAR_1 &&
      VAR_10[VAR_12].type != VAR_0)
   continue;
  else
   VAR_8->p_filesz = VAR_11->size;
  VAR_8->p_type = VAR_7;
  VAR_8->p_offset = VAR_11->addr;
  VAR_8->p_vaddr = VAR_11->addr;
  VAR_8->p_paddr = VAR_11->addr;
  VAR_8->p_memsz = VAR_11->size;
  VAR_8->p_flags = VAR_4 | VAR_5 | VAR_6;
  VAR_8->p_align = VAR_3;
  VAR_8++;
 }
 FUNC_1(VAR_10);
 return VAR_12;
}

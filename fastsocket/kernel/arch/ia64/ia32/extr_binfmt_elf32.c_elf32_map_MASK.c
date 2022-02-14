
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct elf_phdr {unsigned long p_vaddr; scalar_t__ p_offset; scalar_t__ p_filesz; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct file*,unsigned long,scalar_t__,int,int,scalar_t__) ;

__attribute__((used)) static unsigned long
FUNC_1(struct file *VAR_1, unsigned long VAR_2, struct elf_phdr *VAR_3,
  int VAR_4, int VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = (VAR_3->p_vaddr) & ~VAR_0;

 return FUNC_0(VAR_1, (VAR_2 & VAR_0), VAR_3->p_filesz + VAR_7, VAR_4, VAR_5,
       VAR_3->p_offset - VAR_7);
}

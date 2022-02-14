
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct got_entry {scalar_t__ r_addend; int got_offset; struct got_entry* next; } ;
struct TYPE_3__ {int r_info; scalar_t__ r_addend; } ;
typedef void* Elf64_Xword ;
typedef scalar_t__ Elf64_Sxword ;
typedef TYPE_1__ Elf64_Rela ;


 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 struct got_entry* FUNC_2 (int,int ) ;

__attribute__((used)) static inline void
FUNC_3(Elf64_Rela *VAR_2,
        struct got_entry *VAR_3, Elf64_Xword *VAR_4)
{
 unsigned long VAR_5 = FUNC_0 (VAR_2->r_info);
 unsigned long VAR_6 = FUNC_1 (VAR_2->r_info);
 Elf64_Sxword VAR_7 = VAR_2->r_addend;
 struct got_entry *VAR_8;

 if (VAR_6 != VAR_1)
  return;

 for (VAR_8 = VAR_3 + VAR_5; VAR_8 ; VAR_8 = VAR_8->next)
  if (VAR_8->r_addend == VAR_7) {
   if (VAR_8->got_offset == 0) {
    VAR_8->got_offset = *VAR_4;
    *VAR_4 += 8;
   }
   goto found_entry;
  }

 VAR_8 = FUNC_2 (sizeof (*VAR_8), VAR_0);
 VAR_8->next = VAR_3[VAR_5].next;
 VAR_8->r_addend = VAR_7;
 VAR_8->got_offset = *VAR_4;
 *VAR_4 += 8;
 VAR_3[VAR_5].next = VAR_8;

 found_entry:



 VAR_2->r_info |= VAR_8->got_offset << 8;
}

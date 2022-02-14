
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct module {int name; } ;
struct mips_hi16 {scalar_t__ value; unsigned long* addr; struct mips_hi16* next; } ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 int FUNC_0 (struct mips_hi16*) ;
 struct mips_hi16* VAR_1 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct module *VAR_2, u32 *VAR_3, Elf_Addr VAR_4)
{
 unsigned long VAR_5 = *VAR_3;
 Elf_Addr VAR_6, VAR_7;


 VAR_7 = ((VAR_5 & 0xffff) ^ 0x8000) - 0x8000;

 if (VAR_1 != ((void*)0)) {
  struct mips_hi16 *VAR_8;

  VAR_8 = VAR_1;
  while (VAR_8 != ((void*)0)) {
   struct mips_hi16 *VAR_9;
   unsigned long VAR_10;




   if (VAR_4 != VAR_8->value)
    goto out_danger;







   VAR_10 = *VAR_8->addr;
   VAR_6 = ((VAR_10 & 0xffff) << 16) + VAR_7;
   VAR_6 += VAR_4;





   VAR_6 = ((VAR_6 >> 16) + ((VAR_6 & 0x8000) != 0)) & 0xffff;

   VAR_10 = (VAR_10 & ~0xffff) | VAR_6;
   *VAR_8->addr = VAR_10;

   VAR_9 = VAR_8->next;
   FUNC_0(VAR_8);
   VAR_8 = VAR_9;
  }

  VAR_1 = ((void*)0);
 }




 VAR_6 = VAR_4 + VAR_7;
 VAR_5 = (VAR_5 & ~0xffff) | (VAR_6 & 0xffff);
 *VAR_3 = VAR_5;

 return 0;

out_danger:
 FUNC_1("module %s: dangerous R_MIPS_LO16 REL relocation\n", VAR_2->name);

 return -VAR_0;
}

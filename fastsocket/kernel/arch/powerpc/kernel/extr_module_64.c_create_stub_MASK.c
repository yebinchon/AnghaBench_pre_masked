
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int r2; int funcaddr; } ;
struct ppc64_stub_entry {TYPE_1__ opd; int * jump; } ;
struct ppc64_opd_entry {int r2; int funcaddr; } ;
struct module {int name; } ;
typedef int Elf64_Shdr ;
typedef int Elf64_Half ;


 int FUNC_0 (char*,struct ppc64_stub_entry*,long) ;
 int FUNC_1 (long) ;
 int FUNC_2 (long) ;
 unsigned long FUNC_3 (int *,struct module*) ;
 struct ppc64_stub_entry VAR_0 ;
 int FUNC_4 (char*,int ,void*,void*) ;

__attribute__((used)) static inline int FUNC_5(Elf64_Shdr *VAR_1,
         struct ppc64_stub_entry *VAR_2,
         struct ppc64_opd_entry *VAR_3,
         struct module *VAR_4)
{
 Elf64_Half *VAR_5, *VAR_6;
 long VAR_7;

 *VAR_2 = VAR_0;

 VAR_5 = (Elf64_Half *)&VAR_2->jump[2];
 VAR_6 = (Elf64_Half *)&VAR_2->jump[6];


 VAR_7 = (unsigned long)VAR_2 - FUNC_3(VAR_1, VAR_4);
 if (VAR_7 > 0x7FFFFFFF || VAR_7 < -(0x80000000L)) {
  FUNC_4("%s: Address %p of stub out of range of %p.\n",
         VAR_4->name, (void *)VAR_7, (void *)FUNC_3);
  return 0;
 }
 FUNC_0("Stub %p get data from reladdr %li\n", VAR_2, VAR_7);

 *VAR_5 = FUNC_1(VAR_7);
 *VAR_6 = FUNC_2(VAR_7);
 VAR_2->opd.funcaddr = VAR_3->funcaddr;
 VAR_2->opd.r2 = VAR_3->r2;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4c_mmu_entry {unsigned long vaddr; } ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int VAR_1 ;
 int FUNC_3 (struct sun4c_mmu_entry*) ;
 struct sun4c_mmu_entry* FUNC_4 () ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct sun4c_mmu_entry *VAR_3;
 unsigned long VAR_4;

 FUNC_2(VAR_4);
 VAR_2 &= VAR_0;
 VAR_3 = FUNC_4();
 VAR_1--;
 VAR_3->vaddr = VAR_2;
 FUNC_0();
 FUNC_3(VAR_3);
 FUNC_1(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsb {int dummy; } ;
struct mmu_gather {unsigned long tlb_nr; unsigned long* vaddrs; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct mmu_gather *VAR_0, unsigned long VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->tlb_nr; VAR_4++) {
  unsigned long VAR_5 = VAR_0->vaddrs[VAR_4];
  unsigned long VAR_6, VAR_7, VAR_8;

  VAR_5 &= ~0x1UL;

  VAR_8 = FUNC_1(VAR_5, VAR_1, VAR_3);
  VAR_7 = VAR_2 + (VAR_8 * sizeof(struct tsb));
  VAR_6 = (VAR_5 >> 22UL);

  FUNC_0(VAR_7, VAR_6);
 }
}

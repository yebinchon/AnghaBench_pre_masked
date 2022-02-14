
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {unsigned long flags; int lru; } ;
struct TYPE_2__ {int list_lock; int pgtable_list; scalar_t__ has_pgste; scalar_t__ noexec; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 struct page* FUNC_4 (int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct mm_struct *VAR_3, unsigned long *VAR_4)
{
 struct page *VAR_5;
 unsigned long VAR_6;

 VAR_6 = (VAR_3->context.noexec || VAR_3->context.has_pgste) ? 3UL : 1UL;
 VAR_6 <<= (FUNC_1(VAR_4) & (VAR_2 - 1)) / 256 / sizeof(unsigned long);
 VAR_5 = FUNC_4(FUNC_1(VAR_4) >> VAR_1);
 FUNC_6(&VAR_3->context.list_lock);
 VAR_5->flags ^= VAR_6;
 if (VAR_5->flags & VAR_0) {

  FUNC_3(&VAR_5->lru, &VAR_3->context.pgtable_list);
  VAR_5 = ((void*)0);
 } else

  FUNC_2(&VAR_5->lru);
 FUNC_7(&VAR_3->context.list_lock);
 if (VAR_5) {
  FUNC_5(VAR_5);
  FUNC_0(VAR_5);
 }
}

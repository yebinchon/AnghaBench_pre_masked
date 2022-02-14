
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct cpa_data {int pfn; int flags; size_t curpage; unsigned long* vaddr; struct page** pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct cpa_data*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long FUNC_3 () ;
 unsigned long FUNC_4 () ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (struct page*) ;
 unsigned long VAR_9 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct cpa_data *VAR_10)
{
 struct cpa_data VAR_11;
 unsigned long VAR_12 = (unsigned long)FUNC_2(VAR_10->pfn << VAR_3);
 unsigned long VAR_13;
 int VAR_14;

 if (VAR_10->pfn >= VAR_8)
  return 0;
 if (VAR_10->flags & VAR_1) {
  struct page *VAR_15 = VAR_10->pages[VAR_10->curpage];
  if (FUNC_6(FUNC_0(VAR_15)))
   return 0;
  VAR_13 = (unsigned long)FUNC_5(VAR_15);
 } else if (VAR_10->flags & VAR_0)
  VAR_13 = VAR_10->vaddr[VAR_10->curpage];
 else
  VAR_13 = *VAR_10->vaddr;

 if (!(FUNC_7(VAR_13, VAR_2,
      VAR_2 + (VAR_8 << VAR_3)))) {

  VAR_11 = *VAR_10;
  VAR_11.vaddr = &VAR_12;
  VAR_11.flags &= ~(VAR_1 | VAR_0);

  VAR_14 = FUNC_1(&VAR_11, 0);
  if (VAR_14)
   return VAR_14;
 }
 return 0;
}

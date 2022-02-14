
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct page {int flags; } ;
typedef int pte_t ;
struct TYPE_3__ {int n_aliases; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 struct page* FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct vm_area_struct *VAR_4,
      unsigned long VAR_5, pte_t VAR_6)
{
 struct page *VAR_7;
 unsigned long VAR_8 = FUNC_5(VAR_6);

 if (!VAR_3.dcache.n_aliases)
  return;

 VAR_7 = FUNC_3(VAR_8);
 if (FUNC_4(VAR_8)) {
  int VAR_9 = FUNC_6(VAR_2, &VAR_7->flags);
  if (VAR_9) {
   unsigned long VAR_10 = (unsigned long)FUNC_1(VAR_7);

   if (FUNC_2(VAR_10, VAR_5 & VAR_0))
    FUNC_0((void *)VAR_10, VAR_1);
  }
 }
}

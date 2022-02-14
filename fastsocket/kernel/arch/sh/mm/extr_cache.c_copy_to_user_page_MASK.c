
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
struct TYPE_3__ {scalar_t__ n_aliases; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,int ) ;
 void* FUNC_1 (struct page*,unsigned long) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,void const*,unsigned long) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct vm_area_struct *VAR_4, struct page *VAR_5,
         unsigned long VAR_6, void *VAR_7, const void *VAR_8,
         unsigned long VAR_9)
{
 if (VAR_3.dcache.n_aliases && FUNC_4(VAR_5) &&
     !FUNC_7(VAR_1, &VAR_5->flags)) {
  void *VAR_10 = FUNC_1(VAR_5, VAR_6) + (VAR_6 & ~VAR_0);
  FUNC_3(VAR_10, VAR_8, VAR_9);
  FUNC_2(VAR_10);
 } else {
  FUNC_3(VAR_7, VAR_8, VAR_9);
  if (VAR_3.dcache.n_aliases)
   FUNC_6(VAR_1, &VAR_5->flags);
 }

 if (VAR_4->vm_flags & VAR_2)
  FUNC_0(VAR_4, VAR_6, FUNC_5(VAR_5));
}

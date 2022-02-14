
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_fault {int pgoff; struct page* page; } ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; scalar_t__ vm_private_data; } ;
struct page {int dummy; } ;
struct TYPE_3__ {unsigned long bufflen; int k_use_sg; int page_order; int * pages; } ;
struct TYPE_4__ {TYPE_1__ reserve; } ;
typedef TYPE_1__ Sg_scatter_hold ;
typedef TYPE_2__ Sg_fd ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (char*,unsigned long,int) ;

__attribute__((used)) static int
FUNC_4(struct vm_area_struct *VAR_2, struct vm_fault *VAR_3)
{
 Sg_fd *VAR_4;
 unsigned long VAR_5, VAR_6, VAR_7;
 Sg_scatter_hold *VAR_8;
 int VAR_9, VAR_10;

 if ((((void*)0) == VAR_2) || (!(VAR_4 = (Sg_fd *) VAR_2->vm_private_data)))
  return VAR_1;
 VAR_8 = &VAR_4->reserve;
 VAR_5 = VAR_3->pgoff << VAR_0;
 if (VAR_5 >= VAR_8->bufflen)
  return VAR_1;
 FUNC_0(3, FUNC_3("sg_vma_fault: offset=%lu, scatg=%d\n",
       VAR_5, VAR_8->k_use_sg));
 VAR_7 = VAR_2->vm_start;
 VAR_10 = 1 << (VAR_0 + VAR_8->page_order);
 for (VAR_9 = 0; VAR_9 < VAR_8->k_use_sg && VAR_7 < VAR_2->vm_end; VAR_9++) {
  VAR_6 = VAR_2->vm_end - VAR_7;
  VAR_6 = (VAR_6 < VAR_10) ? VAR_6 : VAR_10;
  if (VAR_5 < VAR_6) {
   struct page *VAR_11 = FUNC_2(VAR_8->pages[VAR_9],
           VAR_5 >> VAR_0);
   FUNC_1(VAR_11);
   VAR_3->page = VAR_11;
   return 0;
  }
  VAR_7 += VAR_6;
  VAR_5 -= VAR_6;
 }

 return VAR_1;
}

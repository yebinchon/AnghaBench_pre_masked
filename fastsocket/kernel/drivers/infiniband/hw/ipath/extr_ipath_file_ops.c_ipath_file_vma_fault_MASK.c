
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {int pgoff; struct page* page; } ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_2,
     struct vm_fault *VAR_3)
{
 struct page *VAR_4;

 VAR_4 = FUNC_1((void *)(VAR_3->pgoff << VAR_0));
 if (!VAR_4)
  return VAR_1;
 FUNC_0(VAR_4);
 VAR_3->page = VAR_4;

 return 0;
}

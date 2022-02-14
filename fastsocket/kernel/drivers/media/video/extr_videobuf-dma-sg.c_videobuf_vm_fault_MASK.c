
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {struct page* page; scalar_t__ virtual_address; } ;
struct vm_area_struct {int vm_end; int vm_start; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct page*,unsigned long) ;
 int FUNC_2 (int,char*,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_3, struct vm_fault *VAR_4)
{
 struct page *VAR_5;

 FUNC_2(3, "fault: fault @ %08lx [vma %08lx-%08lx]\n",
  (unsigned long)VAR_4->virtual_address,
  VAR_3->vm_start, VAR_3->vm_end);

 VAR_5 = FUNC_0(VAR_0 | VAR_2);
 if (!VAR_5)
  return VAR_1;
 FUNC_1(VAR_5, (unsigned long)VAR_4->virtual_address);
 VAR_4->page = VAR_5;

 return 0;
}

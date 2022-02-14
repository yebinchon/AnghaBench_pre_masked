
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {struct page* page; } ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;

__attribute__((used)) static int
FUNC_1(struct vm_area_struct *VAR_1, struct vm_fault *VAR_2)
{
 struct page *VAR_3 = VAR_2->page;

 FUNC_0(VAR_3);
 return VAR_0;
}

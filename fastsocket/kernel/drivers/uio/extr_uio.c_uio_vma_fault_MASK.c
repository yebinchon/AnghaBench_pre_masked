
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_fault {int pgoff; struct page* page; } ;
struct vm_area_struct {struct uio_device* vm_private_data; } ;
struct uio_device {TYPE_2__* info; } ;
struct page {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mem; } ;
struct TYPE_3__ {scalar_t__ memtype; scalar_t__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct vm_area_struct*) ;
 struct page* FUNC_2 (scalar_t__) ;
 struct page* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_3, struct vm_fault *VAR_4)
{
 struct uio_device *VAR_5 = VAR_3->vm_private_data;
 struct page *VAR_6;
 unsigned long VAR_7;

 int VAR_8 = FUNC_1(VAR_3);
 if (VAR_8 < 0)
  return VAR_2;





 VAR_7 = (VAR_4->pgoff - VAR_8) << VAR_0;

 if (VAR_5->info->mem[VAR_8].memtype == VAR_1)
  VAR_6 = FUNC_2(VAR_5->info->mem[VAR_8].addr + VAR_7);
 else
  VAR_6 = FUNC_3((void *)VAR_5->info->mem[VAR_8].addr
       + VAR_7);
 FUNC_0(VAR_6);
 VAR_4->page = VAR_6;
 return 0;
}

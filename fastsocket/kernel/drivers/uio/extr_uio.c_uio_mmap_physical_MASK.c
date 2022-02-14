
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; struct uio_device* vm_private_data; } ;
struct uio_device {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* mem; } ;
struct TYPE_3__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_2 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_4)
{
 struct uio_device *VAR_5 = VAR_4->vm_private_data;
 int VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 < 0)
  return -VAR_0;

 VAR_4->vm_flags |= VAR_2 | VAR_3;

 VAR_4->vm_page_prot = FUNC_0(VAR_4->vm_page_prot);

 return FUNC_1(VAR_4,
          VAR_4->vm_start,
          VAR_5->info->mem[VAR_6].addr >> VAR_1,
          VAR_4->vm_end - VAR_4->vm_start,
          VAR_4->vm_page_prot);
}

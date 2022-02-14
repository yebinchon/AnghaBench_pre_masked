
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_page_prot; } ;
struct TYPE_3__ {unsigned long smem_start; } ;
struct TYPE_4__ {TYPE_1__ fix; } ;
struct clcd_fb {TYPE_2__ fb; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;

__attribute__((used)) static int FUNC_1(struct clcd_fb *VAR_1, struct vm_area_struct *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_3 = VAR_2->vm_pgoff + (VAR_1->fb.fix.smem_start >> VAR_0);
 VAR_4 = VAR_2->vm_end - VAR_2->vm_start;

 return FUNC_0(VAR_2, VAR_2->vm_start, VAR_3, VAR_4,
          VAR_2->vm_page_prot);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; scalar_t__ vm_end; } ;
struct TYPE_2__ {scalar_t__ smem_len; } ;
struct fb_info {TYPE_1__ fix; struct bfin_bf54xfb_info* par; } ;
struct bfin_bf54xfb_info {int lq043_mmap; scalar_t__ fb_buffer; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_2, struct vm_area_struct *VAR_3)
{

 struct bfin_bf54xfb_info *VAR_4 = VAR_2->par;

 if (VAR_4->lq043_mmap)
  return -1;

 FUNC_0(&VAR_4->lock);
 VAR_4->lq043_mmap = 1;
 FUNC_1(&VAR_4->lock);

 VAR_3->vm_start = (unsigned long)(VAR_4->fb_buffer);

 VAR_3->vm_end = VAR_3->vm_start + VAR_2->fix.smem_len;







 VAR_3->vm_flags |= VAR_0 | VAR_1;

 return 0;
}

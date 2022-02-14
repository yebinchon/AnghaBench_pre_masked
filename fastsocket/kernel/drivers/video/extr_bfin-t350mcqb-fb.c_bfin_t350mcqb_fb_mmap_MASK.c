
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; scalar_t__ vm_end; } ;
struct TYPE_2__ {scalar_t__ smem_len; } ;
struct fb_info {TYPE_1__ fix; struct bfin_t350mcqbfb_info* par; } ;
struct bfin_t350mcqbfb_info {int lq043_mmap; scalar_t__ fb_buffer; int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_3, struct vm_area_struct *VAR_4)
{
 struct bfin_t350mcqbfb_info *VAR_5 = VAR_3->par;

 if (VAR_5->lq043_mmap)
  return -1;

 FUNC_0(&VAR_5->lock);
 VAR_5->lq043_mmap = 1;
 FUNC_1(&VAR_5->lock);

 VAR_4->vm_start = (unsigned long)(VAR_5->fb_buffer + VAR_0);

 VAR_4->vm_end = VAR_4->vm_start + VAR_3->fix.smem_len;







 VAR_4->vm_flags |= VAR_1 | VAR_2;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int vm_flags; int vm_page_prot; void* vm_private_data; int * vm_ops; } ;
struct omapfb_plane_struct {size_t idx; } ;
struct TYPE_3__ {unsigned long smem_start; unsigned long smem_len; } ;
struct fb_info {TYPE_1__ fix; struct omapfb_plane_struct* par; } ;
struct TYPE_4__ {int * map_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_7,
    struct vm_area_struct *VAR_8)
{
 struct omapfb_plane_struct *VAR_9 = VAR_7->par;
 unsigned long VAR_10;
 unsigned long VAR_11;
 u32 VAR_12;

 if (VAR_8->vm_end - VAR_8->vm_start == 0)
  return 0;
 if (VAR_8->vm_pgoff > (~0UL >> VAR_2))
  return -VAR_1;
 VAR_10 = VAR_8->vm_pgoff << VAR_2;

 VAR_11 = VAR_7->fix.smem_start;
 VAR_12 = VAR_7->fix.smem_len;
 if (VAR_10 >= VAR_12)
  return -VAR_1;
 if ((VAR_8->vm_end - VAR_8->vm_start + VAR_10) > VAR_12)
  return -VAR_1;
 VAR_10 += VAR_11;
 VAR_8->vm_pgoff = VAR_10 >> VAR_2;
 VAR_8->vm_flags |= VAR_3 | VAR_4;
 VAR_8->vm_page_prot = FUNC_2(VAR_8->vm_page_prot);
 VAR_8->vm_ops = &VAR_6;
 VAR_8->vm_private_data = (void *)VAR_9->idx;
 if (FUNC_1(VAR_8, VAR_8->vm_start, VAR_10 >> VAR_2,
        VAR_8->vm_end - VAR_8->vm_start, VAR_8->vm_page_prot))
  return -VAR_0;

 FUNC_0(&VAR_5.map_count[VAR_9->idx]);
 return 0;
}

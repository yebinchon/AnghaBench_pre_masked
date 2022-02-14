
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long u32 ;
struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_flags; int vm_page_prot; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct fb_ops {int (* fb_mmap ) (struct fb_info*,struct vm_area_struct*) ;} ;
struct TYPE_8__ {unsigned long smem_start; unsigned long mmio_start; scalar_t__ mmio_len; scalar_t__ smem_len; } ;
struct TYPE_7__ {scalar_t__ accel_flags; } ;
struct fb_info {int mm_lock; TYPE_4__ fix; TYPE_3__ var; struct fb_ops* fbops; } ;
struct TYPE_5__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct file*,struct vm_area_struct*,unsigned long) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct fb_info** VAR_7 ;
 int FUNC_6 (struct fb_info*,struct vm_area_struct*) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_8, struct vm_area_struct * VAR_9)
{
 int VAR_10 = FUNC_2(VAR_8->f_path.dentry->d_inode);
 struct fb_info *VAR_11 = VAR_7[VAR_10];
 struct fb_ops *VAR_12 = VAR_11->fbops;
 unsigned long VAR_13;
 unsigned long VAR_14;
 u32 VAR_15;

 if (VAR_9->vm_pgoff > (~0UL >> VAR_4))
  return -VAR_1;
 VAR_13 = VAR_9->vm_pgoff << VAR_4;
 if (!VAR_12)
  return -VAR_2;
 FUNC_4(&VAR_11->mm_lock);
 if (VAR_12->fb_mmap) {
  int VAR_16;
  VAR_16 = VAR_12->fb_mmap(VAR_11, VAR_9);
  FUNC_5(&VAR_11->mm_lock);
  return VAR_16;
 }


 VAR_14 = VAR_11->fix.smem_start;
 VAR_15 = FUNC_0((VAR_14 & ~VAR_3) + VAR_11->fix.smem_len);
 if (VAR_13 >= VAR_15) {

  VAR_13 -= VAR_15;
  if (VAR_11->var.accel_flags) {
   FUNC_5(&VAR_11->mm_lock);
   return -VAR_1;
  }
  VAR_14 = VAR_11->fix.mmio_start;
  VAR_15 = FUNC_0((VAR_14 & ~VAR_3) + VAR_11->fix.mmio_len);
 }
 FUNC_5(&VAR_11->mm_lock);
 VAR_14 &= VAR_3;
 if ((VAR_9->vm_end - VAR_9->vm_start + VAR_13) > VAR_15)
  return -VAR_1;
 VAR_13 += VAR_14;
 VAR_9->vm_pgoff = VAR_13 >> VAR_4;

 VAR_9->vm_flags |= VAR_5 | VAR_6;
 FUNC_1(VAR_8, VAR_9, VAR_13);
 if (FUNC_3(VAR_9, VAR_9->vm_start, VAR_13 >> VAR_4,
        VAR_9->vm_end - VAR_9->vm_start, VAR_9->vm_page_prot))
  return -VAR_0;
 return 0;
}

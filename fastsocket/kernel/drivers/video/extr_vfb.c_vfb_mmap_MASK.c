
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; int vm_flags; } ;
struct TYPE_2__ {unsigned long smem_len; scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_6,
      struct vm_area_struct *VAR_7)
{
 unsigned long VAR_8 = VAR_7->vm_start;
 unsigned long VAR_9 = VAR_7->vm_end - VAR_7->vm_start;
 unsigned long VAR_10 = VAR_7->vm_pgoff << VAR_3;
 unsigned long VAR_11, VAR_12;

 if (VAR_10 + VAR_9 > VAR_6->fix.smem_len) {
  return -VAR_1;
 }

 VAR_12 = (unsigned long)VAR_6->fix.smem_start + VAR_10;

 while (VAR_9 > 0) {
  VAR_11 = FUNC_1((void *)VAR_12);
  if (FUNC_0(VAR_7, VAR_8, VAR_11, VAR_4, VAR_2)) {
   return -VAR_0;
  }
  VAR_8 += VAR_4;
  VAR_12 += VAR_4;
  if (VAR_9 > VAR_4)
   VAR_9 -= VAR_4;
  else
   VAR_9 = 0;
 }

 VAR_7->vm_flags |= VAR_5;
 return 0;

}

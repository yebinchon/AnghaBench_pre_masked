
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int vm_page_prot; } ;
struct TYPE_2__ {unsigned long smem_len; scalar_t__ smem_start; } ;
struct fb_info {int device; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_3, struct vm_area_struct *VAR_4)
{
 unsigned long VAR_5, VAR_6;

 VAR_5 = VAR_4->vm_end - VAR_4->vm_start;
 VAR_6 = VAR_4->vm_pgoff << VAR_2;
 if (VAR_6 + VAR_5 > VAR_3->fix.smem_len)
  return -VAR_1;

 VAR_6 += VAR_3->fix.smem_start;
 if (FUNC_1(VAR_4, VAR_4->vm_start, VAR_6 >> VAR_2,
       VAR_5, VAR_4->vm_page_prot))
  return -VAR_0;

 FUNC_0(VAR_3->device, "ps3fb: mmap framebuffer P(%lx)->V(%lx)\n",
  VAR_6, VAR_4->vm_start);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_page_prot; int vm_flags; } ;
struct sa1100fb_info {int map_size; int map_dma; int map_cpu; int dev; } ;
struct TYPE_2__ {unsigned long smem_len; unsigned long mmio_start; scalar_t__ mmio_len; } ;
struct fb_info {TYPE_1__ fix; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct vm_area_struct*,int ,int ,int ) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_4,
    struct vm_area_struct *VAR_5)
{
 struct sa1100fb_info *VAR_6 = (struct sa1100fb_info *)VAR_4;
 unsigned long VAR_7, VAR_8, VAR_9 = VAR_5->vm_pgoff << VAR_2;

 if (VAR_9 < VAR_4->fix.smem_len) {
  VAR_5->vm_pgoff += 1;
  return FUNC_1(VAR_6->dev, VAR_5, VAR_6->map_cpu,
          VAR_6->map_dma, VAR_6->map_size);
 }

 VAR_7 = VAR_4->fix.mmio_start;
 VAR_8 = FUNC_0((VAR_7 & ~VAR_1) + VAR_4->fix.mmio_len);

 if ((VAR_5->vm_end - VAR_5->vm_start + VAR_9) > VAR_8)
  return -VAR_0;

 VAR_9 += VAR_7 & VAR_1;
 VAR_5->vm_pgoff = VAR_9 >> VAR_2;
 VAR_5->vm_flags |= VAR_3;
 VAR_5->vm_page_prot = FUNC_3(VAR_5->vm_page_prot);
 return FUNC_2(VAR_5, VAR_5->vm_start, VAR_9 >> VAR_2,
       VAR_5->vm_end - VAR_5->vm_start,
       VAR_5->vm_page_prot);
}

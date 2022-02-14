
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; } ;
struct TYPE_3__ {unsigned long smem_len; } ;
struct fb_info {TYPE_1__ fix; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int lcd_phys_start; scalar_t__ lcd_virt_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct device*,struct vm_area_struct*,void*,int ,int ) ;
 TYPE_2__ VAR_3 ;

int FUNC_1(struct fb_info *VAR_4, struct vm_area_struct *VAR_5,
        struct device *VAR_6)
{
 unsigned long VAR_7 = VAR_5->vm_pgoff << VAR_2;

 if (VAR_7 < VAR_4->fix.smem_len) {
  VAR_5->vm_pgoff += 1;
  return FUNC_0(VAR_6, VAR_5,
    (void *)VAR_3.lcd_virt_start,
    VAR_3.lcd_phys_start,
    VAR_1);
 }
 return -VAR_0;
}

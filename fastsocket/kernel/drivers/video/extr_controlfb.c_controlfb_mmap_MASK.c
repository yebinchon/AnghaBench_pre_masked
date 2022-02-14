
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_page_prot; } ;
struct TYPE_4__ {unsigned long smem_start; unsigned long mmio_start; scalar_t__ mmio_len; scalar_t__ smem_len; } ;
struct TYPE_3__ {scalar_t__ accel_flags; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_4,
                       struct vm_area_struct *VAR_5)
{
       unsigned long VAR_6, VAR_7;
       u32 VAR_8;

       VAR_6 = VAR_5->vm_pgoff << VAR_3;


       VAR_7 = VAR_4->fix.smem_start;
       VAR_8 = FUNC_0((VAR_7 & ~VAR_2)+VAR_4->fix.smem_len);
       if (VAR_6 >= VAR_8) {

               VAR_6 -= VAR_8;
               if (VAR_4->var.accel_flags)
                       return -VAR_1;
               VAR_7 = VAR_4->fix.mmio_start;
               VAR_8 = FUNC_0((VAR_7 & ~VAR_2)+VAR_4->fix.mmio_len);
        VAR_5->vm_page_prot = FUNC_3(VAR_5->vm_page_prot);
       } else {

        VAR_5->vm_page_prot = FUNC_2(VAR_5->vm_page_prot);
       }
       VAR_7 &= VAR_2;
       if ((VAR_5->vm_end - VAR_5->vm_start + VAR_6) > VAR_8)
         return -VAR_1;
       VAR_6 += VAR_7;
       VAR_5->vm_pgoff = VAR_6 >> VAR_3;
       if (FUNC_1(VAR_5, VAR_5->vm_start, VAR_6 >> VAR_3,
           VAR_5->vm_end - VAR_5->vm_start, VAR_5->vm_page_prot))
               return -VAR_0;

       return 0;
}

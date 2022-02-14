
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_struct {scalar_t__ addr; } ;
struct vm_area_struct {unsigned long vm_start; scalar_t__ vm_end; int * vm_mm; } ;
typedef int pgprot_t ;
struct TYPE_4__ {int vram_phys; void* vram_virt; TYPE_1__* fbdev; scalar_t__ vram_size; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct vm_struct* FUNC_1 (scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,int,scalar_t__,int ) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct vm_struct *VAR_7;
 struct vm_area_struct VAR_8;
 pgprot_t VAR_9;
 unsigned long VAR_10;

 VAR_7 = FUNC_1(VAR_5.vram_size, VAR_3);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_5.fbdev->dev, "can't get kernel vm area\n");
  return -VAR_1;
 }
 VAR_8.vm_mm = &VAR_4;

 VAR_10 = (unsigned long)VAR_7->addr;
 VAR_8.vm_start = VAR_10;
 VAR_8.vm_end = VAR_10 + VAR_5.vram_size;

 VAR_9 = FUNC_3(VAR_6);
 if (FUNC_2(&VAR_8, VAR_10,
      VAR_5.vram_phys >> VAR_2,
      VAR_5.vram_size, VAR_9) < 0) {
  FUNC_0(VAR_5.fbdev->dev, "kernel mmap for FB memory failed\n");
  return -VAR_0;
 }

 VAR_5.vram_virt = (void *)VAR_10;

 return 0;
}

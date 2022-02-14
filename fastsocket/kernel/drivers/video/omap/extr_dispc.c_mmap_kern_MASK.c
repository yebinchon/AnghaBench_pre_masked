
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_struct {scalar_t__ addr; } ;
struct vm_area_struct {unsigned long vm_start; scalar_t__ vm_end; int * vm_mm; } ;
struct omapfb_mem_region {int paddr; void* vaddr; scalar_t__ size; } ;
typedef int pgprot_t ;
struct TYPE_4__ {TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_4 ;
 struct vm_struct* FUNC_1 (scalar_t__,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,int,scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct omapfb_mem_region *VAR_7)
{
 struct vm_struct *VAR_8;
 struct vm_area_struct VAR_9;
 pgprot_t VAR_10;
 unsigned long VAR_11;

 VAR_8 = FUNC_1(VAR_7->size, VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_4.fbdev->dev, "can't get kernel vm area\n");
  return -VAR_1;
 }
 VAR_9.vm_mm = &VAR_5;

 VAR_11 = (unsigned long)VAR_8->addr;

 VAR_10 = FUNC_3(VAR_6);
 VAR_9.vm_start = VAR_11;
 VAR_9.vm_end = VAR_11 + VAR_7->size;
 if (FUNC_2(&VAR_9, VAR_11, VAR_7->paddr >> VAR_2,
      VAR_7->size, VAR_10) < 0) {
  FUNC_0(VAR_4.fbdev->dev, "kernel mmap for FBMEM failed\n");
  return -VAR_0;
 }
 VAR_7->vaddr = (void *)VAR_11;

 return 0;
}

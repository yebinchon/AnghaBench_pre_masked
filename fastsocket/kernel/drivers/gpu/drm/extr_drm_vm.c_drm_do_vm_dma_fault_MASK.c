
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_fault {struct page* page; scalar_t__ virtual_address; } ;
struct vm_area_struct {unsigned long vm_start; TYPE_1__* vm_file; } ;
struct page {int dummy; } ;
struct drm_file {TYPE_2__* minor; } ;
struct drm_device_dma {scalar_t__* pagelist; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_3__ {struct drm_file* private_data; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_3, struct vm_fault *VAR_4)
{
 struct drm_file *VAR_5 = VAR_3->vm_file->private_data;
 struct drm_device *VAR_6 = VAR_5->minor->dev;
 struct drm_device_dma *VAR_7 = VAR_6->dma;
 unsigned long VAR_8;
 unsigned long VAR_9;
 struct page *VAR_10;

 if (!VAR_7)
  return VAR_2;
 if (!VAR_7->pagelist)
  return VAR_2;

 VAR_8 = (unsigned long)VAR_4->virtual_address - VAR_3->vm_start;
 VAR_9 = VAR_8 >> VAR_1;
 VAR_10 = FUNC_2((VAR_7->pagelist[VAR_9] + (VAR_8 & (~VAR_0))));

 FUNC_1(VAR_10);
 VAR_4->page = VAR_10;

 FUNC_0("dma_fault 0x%lx (page %lu)\n", VAR_8, VAR_9);
 return 0;
}

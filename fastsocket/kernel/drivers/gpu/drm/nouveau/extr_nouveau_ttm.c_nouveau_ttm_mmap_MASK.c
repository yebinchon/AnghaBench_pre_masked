
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_pgoff; } ;
struct TYPE_4__ {int bdev; } ;
struct nouveau_drm {TYPE_2__ ttm; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_1__* minor; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*,struct vm_area_struct*) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 int FUNC_2 (struct file*,struct vm_area_struct*,int *) ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct drm_file *VAR_3 = VAR_1->private_data;
 struct nouveau_drm *VAR_4 = FUNC_1(VAR_3->minor->dev);

 if (FUNC_3(VAR_2->vm_pgoff < VAR_0))
  return FUNC_0(VAR_1, VAR_2);

 return FUNC_2(VAR_1, VAR_2, &VAR_4->ttm.bdev);
}

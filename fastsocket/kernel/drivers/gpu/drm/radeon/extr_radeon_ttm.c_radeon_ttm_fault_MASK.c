
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_fault {int dummy; } ;
struct vm_area_struct {scalar_t__ vm_private_data; } ;
struct ttm_buffer_object {int bdev; } ;
struct TYPE_3__ {int mclk_lock; } ;
struct radeon_device {TYPE_1__ pm; } ;
struct TYPE_4__ {int (* fault ) (struct vm_area_struct*,struct vm_fault*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct radeon_device* FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,struct vm_fault*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_2, struct vm_fault *VAR_3)
{
 struct ttm_buffer_object *VAR_4;
 struct radeon_device *VAR_5;
 int VAR_6;

 VAR_4 = (struct ttm_buffer_object *)VAR_2->vm_private_data;
 if (VAR_4 == ((void*)0)) {
  return VAR_0;
 }
 VAR_5 = FUNC_1(VAR_4->bdev);
 FUNC_0(&VAR_5->pm.mclk_lock);
 VAR_6 = VAR_1->fault(VAR_2, VAR_3);
 FUNC_3(&VAR_5->pm.mclk_lock);
 return VAR_6;
}

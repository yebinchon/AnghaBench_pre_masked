
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* crtc_vblank_int; int lock; } ;
struct radeon_device {int num_crtc; TYPE_1__ irq; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct drm_device *VAR_1, int VAR_2)
{
 struct radeon_device *VAR_3 = VAR_1->dev_private;
 unsigned long VAR_4;
 int VAR_5;

 if (VAR_2 < 0 || VAR_2 >= VAR_3->num_crtc) {
  FUNC_0("Invalid crtc %d\n", VAR_2);
  return -VAR_0;
 }

 FUNC_2(&VAR_3->irq.lock, VAR_4);
 VAR_3->irq.crtc_vblank_int[VAR_2] = 1;
 VAR_5 = FUNC_1(VAR_3);
 FUNC_3(&VAR_3->irq.lock, VAR_4);
 return VAR_5;
}

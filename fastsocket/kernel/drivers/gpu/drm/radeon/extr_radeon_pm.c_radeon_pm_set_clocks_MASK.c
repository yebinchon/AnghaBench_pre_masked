
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_ring {int ready; } ;
struct TYPE_6__ {scalar_t__ requested_clock_mode_index; scalar_t__ current_clock_mode_index; scalar_t__ requested_power_state_index; scalar_t__ current_power_state_index; int active_crtcs; int req_vblank; int mclk_lock; int dynpm_planned_action; scalar_t__ active_crtc_count; } ;
struct TYPE_5__ {scalar_t__ installed; } ;
struct radeon_device {int num_crtc; TYPE_3__* ddev; TYPE_2__ pm; int ring_lock; TYPE_1__ irq; struct radeon_ring* ring; } ;
struct TYPE_7__ {int struct_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct radeon_device *VAR_2)
{
 int VAR_3, VAR_4;


 if ((VAR_2->pm.requested_clock_mode_index == VAR_2->pm.current_clock_mode_index) &&
     (VAR_2->pm.requested_power_state_index == VAR_2->pm.current_power_state_index))
  return;

 FUNC_3(&VAR_2->ddev->struct_mutex);
 FUNC_0(&VAR_2->pm.mclk_lock);
 FUNC_3(&VAR_2->ring_lock);


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct radeon_ring *VAR_5 = &VAR_2->ring[VAR_3];
  if (!VAR_5->ready) {
   continue;
  }
  VAR_4 = FUNC_6(VAR_2, VAR_3);
  if (VAR_4) {

   FUNC_4(&VAR_2->ring_lock);
   FUNC_10(&VAR_2->pm.mclk_lock);
   FUNC_4(&VAR_2->ddev->struct_mutex);
   return;
  }
 }

 FUNC_8(VAR_2);

 if (VAR_2->irq.installed) {
  for (VAR_3 = 0; VAR_3 < VAR_2->num_crtc; VAR_3++) {
   if (VAR_2->pm.active_crtcs & (1 << VAR_3)) {
    VAR_2->pm.req_vblank |= (1 << VAR_3);
    FUNC_1(VAR_2->ddev, VAR_3);
   }
  }
 }

 FUNC_7(VAR_2);

 if (VAR_2->irq.installed) {
  for (VAR_3 = 0; VAR_3 < VAR_2->num_crtc; VAR_3++) {
   if (VAR_2->pm.req_vblank & (1 << VAR_3)) {
    VAR_2->pm.req_vblank &= ~(1 << VAR_3);
    FUNC_2(VAR_2->ddev, VAR_3);
   }
  }
 }


 FUNC_9(VAR_2);
 if (VAR_2->pm.active_crtc_count)
  FUNC_5(VAR_2);

 VAR_2->pm.dynpm_planned_action = VAR_0;

 FUNC_4(&VAR_2->ring_lock);
 FUNC_10(&VAR_2->pm.mclk_lock);
 FUNC_4(&VAR_2->ddev->struct_mutex);
}

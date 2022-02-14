
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ gfx_addr; } ;
struct intel_ring_buffer {int id; TYPE_1__ status_page; int mmio_base; struct drm_device* dev; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_i915_private_t ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ) ;

 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;


void FUNC_6(struct intel_ring_buffer *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 drm_i915_private_t *VAR_5 = VAR_3->dev->dev_private;
 u32 VAR_6 = 0;




 if (FUNC_2(VAR_4)) {
  switch (VAR_3->id) {
  case 129:
   VAR_6 = VAR_2;
   break;
  case 130:
   VAR_6 = VAR_0;
   break;
  case 128:
   VAR_6 = VAR_1;
   break;
  }
 } else if (FUNC_1(VAR_3->dev)) {
  VAR_6 = FUNC_5(VAR_3->mmio_base);
 } else {
  VAR_6 = FUNC_4(VAR_3->mmio_base);
 }

 FUNC_0(VAR_6, (u32)VAR_3->status_page.gfx_addr);
 FUNC_3(VAR_6);
}

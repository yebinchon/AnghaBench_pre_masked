
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int (* get_fifo_size ) (struct drm_device*,int ) ;} ;
struct drm_i915_private {TYPE_2__ display; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_3__ {int clock; } ;
struct drm_crtc {TYPE_1__ mode; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int ,int,int ) ;
 int VAR_2 ;
 struct drm_crtc* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 struct drm_crtc *VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 == ((void*)0))
  return;

 VAR_7 = FUNC_3(VAR_5->mode.clock, &VAR_1,
           VAR_4->display.get_fifo_size(VAR_3, 0),
           4, VAR_2);
 VAR_6 = FUNC_1(VAR_0) & ~0xfff;
 VAR_6 |= (3<<8) | VAR_7;

 FUNC_0("Setting FIFO watermarks - A: %d\n", VAR_7);

 FUNC_2(VAR_0, VAR_6);
}

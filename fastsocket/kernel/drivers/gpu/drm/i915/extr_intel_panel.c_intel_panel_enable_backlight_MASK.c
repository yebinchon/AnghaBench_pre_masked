
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_i915_private {scalar_t__ backlight_level; int num_pipe; int backlight_enabled; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 TYPE_1__* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct drm_device*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;

void FUNC_8(struct drm_device *VAR_8,
      enum pipe VAR_9)
{
 struct drm_i915_private *VAR_10 = VAR_8->dev_private;

 if (VAR_10->backlight_level == 0)
  VAR_10->backlight_level = FUNC_7(VAR_8);

 if (FUNC_4(VAR_8)->gen >= 4) {
  uint32_t VAR_11, VAR_12;

  VAR_11 = FUNC_1(VAR_8) ? VAR_0 : VAR_1;


  VAR_12 = FUNC_2(VAR_11);




  if (VAR_12 & VAR_7)
   goto set_level;

  if (VAR_10->num_pipe == 3)
   VAR_12 &= ~VAR_6;
  else
   VAR_12 &= ~VAR_5;

  VAR_12 |= FUNC_0(VAR_9);
  VAR_12 &= ~VAR_7;

  FUNC_3(VAR_11, VAR_12);
  FUNC_5(VAR_11);
  FUNC_3(VAR_11, VAR_12 | VAR_7);

  if (FUNC_1(VAR_8)) {
   VAR_12 = FUNC_2(VAR_2);
   VAR_12 |= VAR_4;
   VAR_12 &= ~VAR_3;
   FUNC_3(VAR_2, VAR_12);
  }
 }

set_level:




 VAR_10->backlight_enabled = 1;
 FUNC_6(VAR_8, VAR_10->backlight_level);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_3__ {int clock; } ;
struct drm_crtc {TYPE_2__* fb; TYPE_1__ mode; } ;
struct TYPE_4__ {int bits_per_pixel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_crtc*) ;
 struct drm_crtc* FUNC_1 (struct drm_device*,int) ;

__attribute__((used)) static bool FUNC_2(struct drm_device *VAR_2,
         int VAR_3,
         int *VAR_4,
         int *VAR_5,
         int *VAR_6,
         int *VAR_7)
{
 struct drm_crtc *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = FUNC_1(VAR_2, VAR_3);
 if (!FUNC_0(VAR_8))
  return 0;

 VAR_9 = VAR_8->mode.clock;
 VAR_10 = VAR_8->fb->bits_per_pixel / 8;

 VAR_11 = (VAR_9 / 1000) * VAR_10;
 *VAR_4 = (VAR_11 > 256) ?
  VAR_1 : VAR_0;
 *VAR_5 = (64 * (*VAR_4) * 4) / ((VAR_9 / 1000) *
           VAR_10);

 VAR_11 = (VAR_9 / 1000) * 4;
 *VAR_6 = (VAR_11 > 256) ?
  VAR_1 : VAR_0;
 *VAR_7 = (64 * (*VAR_6) * 4) / ((VAR_9 / 1000) * 4);

 return 1;
}

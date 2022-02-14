
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ clock; } ;
struct drm_crtc {TYPE_1__ mode; scalar_t__ fb; } ;
struct TYPE_4__ {scalar_t__ active; } ;


 TYPE_2__* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_1(struct drm_crtc *VAR_0)
{



 return FUNC_0(VAR_0)->active && VAR_0->fb && VAR_0->mode.clock;
}

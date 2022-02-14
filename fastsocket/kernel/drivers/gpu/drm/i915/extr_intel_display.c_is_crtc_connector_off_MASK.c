
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {int dummy; } ;
struct drm_connector {scalar_t__ dpms; TYPE_1__* encoder; } ;
struct TYPE_2__ {struct drm_crtc* crtc; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct drm_crtc *VAR_1, struct drm_connector *VAR_2,
        int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_2[VAR_4].encoder &&
      VAR_2[VAR_4].encoder->crtc == VAR_1 &&
      VAR_2[VAR_4].dpms != VAR_0)
   return 1;

 return 0;
}

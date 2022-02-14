
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*,int,int) ;

uint32_t
FUNC_3(struct drm_device *VAR_1, uint32_t VAR_2,
      int VAR_3, bool VAR_4)
{




 if (FUNC_0(VAR_1)->gen >= 4 || (!VAR_4 && FUNC_1(VAR_1)) ||
     VAR_3 == VAR_0)
  return 4096;





 return FUNC_2(VAR_1, VAR_2, VAR_3);
}

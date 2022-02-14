
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_2__ {int gen; } ;


 TYPE_1__* FUNC_0 (struct drm_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_1(struct drm_device *VAR_2)
{
 if (FUNC_0(VAR_2)->gen < 6)
  return 0;

 if (VAR_0 >= 0)
  return VAR_0;







 return 1;
}

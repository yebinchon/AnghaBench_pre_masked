
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_2__ {int gen; } ;


 TYPE_1__* FUNC_0 (struct drm_device*) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_0,
        bool VAR_1)
{
 switch (FUNC_0(VAR_0)->gen) {
 case 2:
  return VAR_1 ? 66 : 48;
 case 3:
 case 4:
  return VAR_1 ? 100 : 96;
 default:
  return VAR_1 ? 100 : 120;
 }
}

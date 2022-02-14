
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_2__ {int gen; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;

__attribute__((used)) static bool
FUNC_4(struct drm_device *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;


 if (VAR_7 == VAR_1)
  return 1;

 if (FUNC_2(VAR_4) ||
     (VAR_7 == VAR_2 && FUNC_0(VAR_4)))
  VAR_8 = 128;
 else
  VAR_8 = 512;


 if (FUNC_1(VAR_4)->gen >= 4) {


  if (VAR_5 / 128 > VAR_3)
   return 0;
 } else {
  if (VAR_5 > 8192)
   return 0;

  if (FUNC_3(VAR_4)) {
   if (VAR_6 > VAR_0 << 20)
    return 0;
  } else {
   if (VAR_6 > VAR_0 << 19)
    return 0;
  }
 }


 if (FUNC_1(VAR_4)->gen >= 4) {
  if (VAR_5 & (VAR_8 - 1))
   return 0;
  return 1;
 }


 if (VAR_5 < VAR_8)
  return 0;

 if (VAR_5 & (VAR_5 - 1))
  return 0;

 return 1;
}

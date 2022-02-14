
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int gen; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;

__attribute__((used)) static u32 FUNC_4(struct drm_device *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_0)) {
  VAR_1 >>= 16;
 } else {
  if (FUNC_1(VAR_0)->gen < 4)
   VAR_1 >>= 17;
  else
   VAR_1 >>= 16;

  if (FUNC_3(VAR_0))
   VAR_1 *= 0xff;
 }

 return VAR_1;
}

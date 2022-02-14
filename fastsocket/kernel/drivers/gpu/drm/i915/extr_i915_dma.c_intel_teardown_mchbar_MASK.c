
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_5__ {scalar_t__ start; } ;
struct TYPE_4__ {TYPE_2__ mch_res; int bridge_dev; scalar_t__ mchbar_need_disable; } ;
typedef TYPE_1__ drm_i915_private_t ;
struct TYPE_6__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(struct drm_device *VAR_4)
{
 drm_i915_private_t *VAR_5 = VAR_4->dev_private;
 int VAR_6 = FUNC_0(VAR_4)->gen >= 4 ? VAR_3 : VAR_2;
 u32 VAR_7;

 if (VAR_5->mchbar_need_disable) {
  if (FUNC_1(VAR_4) || FUNC_2(VAR_4)) {
   FUNC_3(VAR_5->bridge_dev, VAR_1, &VAR_7);
   VAR_7 &= ~VAR_0;
   FUNC_4(VAR_5->bridge_dev, VAR_1, VAR_7);
  } else {
   FUNC_3(VAR_5->bridge_dev, VAR_6, &VAR_7);
   VAR_7 &= ~1;
   FUNC_4(VAR_5->bridge_dev, VAR_6, VAR_7);
  }
 }

 if (VAR_5->mch_res.start)
  FUNC_5(&VAR_5->mch_res);
}

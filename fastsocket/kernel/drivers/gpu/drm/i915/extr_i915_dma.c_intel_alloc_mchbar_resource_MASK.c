
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_9__ {char* name; scalar_t__ start; int flags; } ;
struct TYPE_7__ {TYPE_4__ mch_res; TYPE_2__* bridge_dev; } ;
typedef TYPE_1__ drm_i915_private_t ;
struct TYPE_10__ {int gen; } ;
struct TYPE_8__ {int bus; } ;


 int FUNC_0 (char*,int) ;
 TYPE_6__* FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_4__*,scalar_t__,scalar_t__,int ,int ,int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,int*) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct drm_device *VAR_6)
{
 drm_i915_private_t *VAR_7 = VAR_6->dev_private;
 int VAR_8 = FUNC_1(VAR_6)->gen >= 4 ? VAR_2 : VAR_1;
 u32 VAR_9, VAR_10 = 0;
 u64 VAR_11;
 int VAR_12;

 if (FUNC_1(VAR_6)->gen >= 4)
  FUNC_4(VAR_7->bridge_dev, VAR_8 + 4, &VAR_10);
 FUNC_4(VAR_7->bridge_dev, VAR_8, &VAR_9);
 VAR_11 = ((u64)VAR_10 << 32) | VAR_9;
 VAR_7->mch_res.name = "i915 MCHBAR";
 VAR_7->mch_res.flags = VAR_0;
 VAR_12 = FUNC_3(VAR_7->bridge_dev->bus,
         &VAR_7->mch_res,
         VAR_3, VAR_3,
         VAR_4,
         0, VAR_5,
         VAR_7->bridge_dev);
 if (VAR_12) {
  FUNC_0("failed bus alloc: %d\n", VAR_12);
  VAR_7->mch_res.start = 0;
  return VAR_12;
 }

 if (FUNC_1(VAR_6)->gen >= 4)
  FUNC_5(VAR_7->bridge_dev, VAR_8 + 4,
           FUNC_7(VAR_7->mch_res.start));

 FUNC_5(VAR_7->bridge_dev, VAR_8,
          FUNC_2(VAR_7->mch_res.start));
 return 0;
}

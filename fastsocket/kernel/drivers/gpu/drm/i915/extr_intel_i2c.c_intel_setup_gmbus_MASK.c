
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_8__ {int * algo; TYPE_1__ dev; int name; int class; int owner; } ;
struct intel_gmbus {int reg0; int force_bit; TYPE_3__ adapter; struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {struct intel_gmbus* gmbus; int dev; int gmbus_wait_queue; int gmbus_mutex; scalar_t__ gpio_mmio_base; } ;
struct drm_device {TYPE_2__* pdev; struct drm_i915_private* dev_private; } ;
struct TYPE_9__ {char* name; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_5__* VAR_8 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct intel_gmbus*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int,char*,char*) ;

int FUNC_10(struct drm_device *VAR_9)
{
 struct drm_i915_private *VAR_10 = VAR_9->dev_private;
 int VAR_11, VAR_12;

 if (FUNC_0(VAR_9))
  VAR_10->gpio_mmio_base = VAR_4 - VAR_2;
 else if (FUNC_2(VAR_9))
  VAR_10->gpio_mmio_base = VAR_6;
 else
  VAR_10->gpio_mmio_base = 0;

 FUNC_8(&VAR_10->gmbus_mutex);
 FUNC_5(&VAR_10->gmbus_wait_queue);

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  struct intel_gmbus *VAR_13 = &VAR_10->gmbus[VAR_12];
  u32 VAR_14 = VAR_12 + 1;

  VAR_13->adapter.owner = VAR_5;
  VAR_13->adapter.class = VAR_3;
  FUNC_9(VAR_13->adapter.name,
    sizeof(VAR_13->adapter.name),
    "i915 gmbus %s",
    VAR_8[VAR_12].name);

  VAR_13->adapter.dev.parent = &VAR_9->pdev->dev;
  VAR_13->dev_priv = VAR_10;

  VAR_13->adapter.algo = &VAR_7;


  VAR_13->reg0 = VAR_14 | VAR_1;


  if (FUNC_1(VAR_9))
   VAR_13->force_bit = 1;

  FUNC_6(VAR_13, VAR_14);

  VAR_11 = FUNC_3(&VAR_13->adapter);
  if (VAR_11)
   goto err;
 }

 FUNC_7(VAR_10->dev);

 return 0;

err:
 while (--VAR_12) {
  struct intel_gmbus *VAR_15 = &VAR_10->gmbus[VAR_12];
  FUNC_4(&VAR_15->adapter);
 }
 return VAR_11;
}

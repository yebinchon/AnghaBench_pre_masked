
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_hw_context {int obj; } ;
struct drm_i915_private {TYPE_1__* ring; TYPE_2__* dev; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct TYPE_3__ {struct i915_hw_context* default_context; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct i915_hw_context*) ;
 int FUNC_3 (struct i915_hw_context*) ;
 size_t VAR_1 ;
 struct i915_hw_context* FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (struct i915_hw_context*) ;
 int FUNC_6 (struct i915_hw_context*) ;
 int FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct drm_i915_private *VAR_2)
{
 struct i915_hw_context *VAR_3;
 int VAR_4;

 FUNC_0(!FUNC_9(&VAR_2->dev->struct_mutex));

 VAR_3 = FUNC_4(VAR_2->dev, ((void*)0));
 if (FUNC_2(VAR_3))
  return FUNC_3(VAR_3);







 VAR_2->ring[VAR_1].default_context = VAR_3;
 VAR_4 = FUNC_7(VAR_3->obj, VAR_0, 0, 0);
 if (VAR_4)
  goto err_destroy;

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  goto err_unpin;

 FUNC_1("Default HW context loaded\n");
 return 0;

err_unpin:
 FUNC_8(VAR_3->obj);
err_destroy:
 FUNC_5(VAR_3);
 return VAR_4;
}

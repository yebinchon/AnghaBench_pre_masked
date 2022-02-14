
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_hw_context {int id; struct drm_i915_file_private* file_priv; int * ring; int * obj; } ;
struct drm_i915_private {int * ring; int hw_context_size; } ;
struct drm_i915_file_private {int context_idr; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int gen; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct i915_hw_context* FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (struct drm_device*) ;
 size_t VAR_5 ;
 int FUNC_3 (struct i915_hw_context*) ;
 int * FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct i915_hw_context*,scalar_t__,int*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (struct i915_hw_context*) ;
 struct i915_hw_context* FUNC_9 (int,int ) ;

__attribute__((used)) static struct i915_hw_context *
FUNC_10(struct drm_device *VAR_6,
    struct drm_i915_file_private *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_6->dev_private;
 struct i915_hw_context *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_9(sizeof(struct drm_i915_file_private), VAR_3);
 if (VAR_9 == ((void*)0))
  return FUNC_1(-VAR_2);

 VAR_9->obj = FUNC_4(VAR_6, VAR_8->hw_context_size);
 if (VAR_9->obj == ((void*)0)) {
  FUNC_8(VAR_9);
  FUNC_0("Context object allocated failed\n");
  return FUNC_1(-VAR_2);
 }

 if (FUNC_2(VAR_6)->gen >= 7) {
  VAR_10 = FUNC_5(VAR_9->obj,
            VAR_4);
  if (VAR_10)
   goto err_out;
 }





 VAR_9->ring = &VAR_8->ring[VAR_5];


 if (VAR_7 == ((void*)0))
  return VAR_9;

 VAR_9->file_priv = VAR_7;

again:
 if (FUNC_7(&VAR_7->context_idr, VAR_3) == 0) {
  VAR_10 = -VAR_2;
  FUNC_0("idr allocation failed\n");
  goto err_out;
 }

 VAR_10 = FUNC_6(&VAR_7->context_idr, VAR_9,
    VAR_0 + 1, &VAR_11);
 if (VAR_10 == 0)
  VAR_9->id = VAR_11;

 if (VAR_10 == -VAR_1)
  goto again;
 else if (VAR_10)
  goto err_out;

 return VAR_9;

err_out:
 FUNC_3(VAR_9);
 return FUNC_1(VAR_10);
}

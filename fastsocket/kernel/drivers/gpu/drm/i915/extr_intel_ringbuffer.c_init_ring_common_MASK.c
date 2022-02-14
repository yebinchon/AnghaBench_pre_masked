
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {int size; int head; int tail; int last_retired_head; int space; struct drm_device* dev; int name; int (* write_tail ) (struct intel_ring_buffer*,int ) ;struct drm_i915_gem_object* obj; } ;
struct drm_i915_gem_object {scalar_t__ gtt_offset; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_i915_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int,int,scalar_t__) ;
 int FUNC_1 (char*,int ,int,int,int,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_3 (struct intel_ring_buffer*) ;
 int FUNC_4 (struct intel_ring_buffer*) ;
 scalar_t__ FUNC_5 (struct intel_ring_buffer*) ;
 int FUNC_6 (struct intel_ring_buffer*) ;
 int FUNC_7 (struct intel_ring_buffer*,int) ;
 int FUNC_8 (struct intel_ring_buffer*,int ) ;
 int FUNC_9 (struct intel_ring_buffer*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct drm_device*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct intel_ring_buffer*) ;
 int FUNC_15 (struct intel_ring_buffer*,int ) ;
 scalar_t__ FUNC_16 (int,int) ;

__attribute__((used)) static int FUNC_17(struct intel_ring_buffer *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->dev;
 drm_i915_private_t *VAR_9 = VAR_8->dev_private;
 struct drm_i915_gem_object *VAR_10 = VAR_7->obj;
 int VAR_11 = 0;
 u32 VAR_12;

 if (FUNC_2(VAR_8))
  FUNC_11(VAR_9);


 FUNC_7(VAR_7, 0);
 FUNC_8(VAR_7, 0);
 VAR_7->write_tail(VAR_7, 0);

 VAR_12 = FUNC_4(VAR_7) & VAR_2;


 if (VAR_12 != 0) {
  FUNC_0("%s head not reset to zero "
         "ctl %08x head %08x tail %08x start %08x\n",
         VAR_7->name,
         FUNC_3(VAR_7),
         FUNC_4(VAR_7),
         FUNC_6(VAR_7),
         FUNC_5(VAR_7));

  FUNC_8(VAR_7, 0);

  if (FUNC_4(VAR_7) & VAR_2) {
   FUNC_1("failed to set %s head to zero "
      "ctl %08x head %08x tail %08x start %08x\n",
      VAR_7->name,
      FUNC_3(VAR_7),
      FUNC_4(VAR_7),
      FUNC_6(VAR_7),
      FUNC_5(VAR_7));
  }
 }





 FUNC_9(VAR_7, VAR_10->gtt_offset);
 FUNC_7(VAR_7,
   ((VAR_7->size - VAR_3) & VAR_4)
   | VAR_5);


 if (FUNC_16((FUNC_3(VAR_7) & VAR_5) != 0 &&
       FUNC_5(VAR_7) == VAR_10->gtt_offset &&
       (FUNC_4(VAR_7) & VAR_2) == 0, 50)) {
  FUNC_1("%s initialization failed "
    "ctl %08x head %08x tail %08x start %08x\n",
    VAR_7->name,
    FUNC_3(VAR_7),
    FUNC_4(VAR_7),
    FUNC_6(VAR_7),
    FUNC_5(VAR_7));
  VAR_11 = -VAR_1;
  goto out;
 }

 if (!FUNC_10(VAR_7->dev, VAR_0))
  FUNC_13(VAR_7->dev);
 else {
  VAR_7->head = FUNC_4(VAR_7);
  VAR_7->tail = FUNC_6(VAR_7) & VAR_6;
  VAR_7->space = FUNC_14(VAR_7);
  VAR_7->last_retired_head = -1;
 }

out:
 if (FUNC_2(VAR_8))
  FUNC_12(VAR_9);

 return VAR_11;
}

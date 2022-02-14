
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_ring_buffer {int (* flush ) (struct intel_ring_buffer*,int ,int ) ;int dev; scalar_t__ itlb_before_ctx_switch; } ;
struct i915_hw_context {TYPE_1__* obj; } ;
struct TYPE_2__ {int gtt_offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct intel_ring_buffer*) ;
 int FUNC_3 (struct intel_ring_buffer*,int) ;
 int FUNC_4 (struct intel_ring_buffer*,int) ;
 int FUNC_5 (struct intel_ring_buffer*,int ,int ) ;

__attribute__((used)) static inline int
FUNC_6(struct intel_ring_buffer *VAR_9,
        struct i915_hw_context *VAR_10,
        u32 VAR_11)
{
 int VAR_12;






 if (FUNC_0(VAR_9->dev) && VAR_9->itlb_before_ctx_switch) {
  VAR_12 = VAR_9->flush(VAR_9, VAR_0, 0);
  if (VAR_12)
   return VAR_12;
 }

 VAR_12 = FUNC_3(VAR_9, 6);
 if (VAR_12)
  return VAR_12;

 if (FUNC_1(VAR_9->dev))
  FUNC_4(VAR_9, VAR_3 | VAR_1);
 else
  FUNC_4(VAR_9, VAR_5);

 FUNC_4(VAR_9, VAR_5);
 FUNC_4(VAR_9, VAR_8);
 FUNC_4(VAR_9, VAR_10->obj->gtt_offset |
   VAR_4 |
   VAR_7 |
   VAR_6 |
   VAR_11);

 FUNC_4(VAR_9, VAR_5);

 if (FUNC_1(VAR_9->dev))
  FUNC_4(VAR_9, VAR_3 | VAR_2);
 else
  FUNC_4(VAR_9, VAR_5);

 FUNC_2(VAR_9);

 return VAR_12;
}

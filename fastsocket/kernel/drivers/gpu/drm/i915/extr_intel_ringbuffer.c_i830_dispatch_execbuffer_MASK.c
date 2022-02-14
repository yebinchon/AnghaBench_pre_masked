
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {struct drm_i915_gem_object* private; } ;
struct drm_i915_gem_object {int gtt_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct intel_ring_buffer*) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;
 int FUNC_3 (struct intel_ring_buffer*,int) ;

__attribute__((used)) static int
FUNC_4(struct intel_ring_buffer *VAR_13,
    u32 VAR_14, u32 VAR_15,
    unsigned VAR_16)
{
 int VAR_17;

 if (VAR_16 & VAR_4) {
  VAR_17 = FUNC_2(VAR_13, 4);
  if (VAR_17)
   return VAR_17;

  FUNC_3(VAR_13, VAR_6);
  FUNC_3(VAR_13, VAR_14 | (VAR_16 & VAR_5 ? 0 : VAR_7));
  FUNC_3(VAR_13, VAR_14 + VAR_15 - 8);
  FUNC_3(VAR_13, VAR_9);
  FUNC_1(VAR_13);
 } else {
  struct drm_i915_gem_object *VAR_18 = VAR_13->private;
  u32 VAR_19 = VAR_18->gtt_offset;

  if (VAR_15 > VAR_3)
   return -VAR_2;

  VAR_17 = FUNC_2(VAR_13, 9+3);
  if (VAR_17)
   return VAR_17;



  FUNC_3(VAR_13, VAR_10 |
    VAR_11 |
    VAR_12);
  FUNC_3(VAR_13, VAR_0 | VAR_1 | 4096);
  FUNC_3(VAR_13, 0);
  FUNC_3(VAR_13, (FUNC_0(VAR_15, 4096) << 16) | 1024);
  FUNC_3(VAR_13, VAR_19);
  FUNC_3(VAR_13, 0);
  FUNC_3(VAR_13, 4096);
  FUNC_3(VAR_13, VAR_14);
  FUNC_3(VAR_13, VAR_8);


  FUNC_3(VAR_13, VAR_6);
  FUNC_3(VAR_13, VAR_19 | (VAR_16 & VAR_5 ? 0 : VAR_7));
  FUNC_3(VAR_13, VAR_19 + VAR_15 - 8);
  FUNC_1(VAR_13);
 }

 return 0;
}

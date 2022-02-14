
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {scalar_t__ sprite_scaling_enabled; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (struct drm_device*,int,int *,int,int *,int,int*,int*) ;
 int FUNC_9 (struct drm_device*,int,unsigned int,int,int *,int *,int*,int*,int*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (unsigned int) ;

__attribute__((used)) static void FUNC_11(struct drm_device *VAR_18)
{
 struct drm_i915_private *VAR_19 = VAR_18->dev_private;
 int VAR_20 = FUNC_3() * 100;
 u32 VAR_21;
 int VAR_22, VAR_23, VAR_24;
 unsigned int VAR_25;

 VAR_25 = 0;
 if (FUNC_8(VAR_18, 0,
       &VAR_17, VAR_20,
       &VAR_15, VAR_20,
       &VAR_23, &VAR_24)) {
  VAR_21 = FUNC_1(VAR_0);
  VAR_21 &= ~(VAR_3 | VAR_2);
  FUNC_2(VAR_0, VAR_21 |
      ((VAR_23 << VAR_4) | VAR_24));
  FUNC_0("FIFO watermarks For pipe A -"
         " plane %d, " "cursor: %d\n",
         VAR_23, VAR_24);
  VAR_25 |= 1;
 }

 if (FUNC_8(VAR_18, 1,
       &VAR_17, VAR_20,
       &VAR_15, VAR_20,
       &VAR_23, &VAR_24)) {
  VAR_21 = FUNC_1(VAR_1);
  VAR_21 &= ~(VAR_3 | VAR_2);
  FUNC_2(VAR_1, VAR_21 |
      ((VAR_23 << VAR_4) | VAR_24));
  FUNC_0("FIFO watermarks For pipe B -"
         " plane %d, cursor: %d\n",
         VAR_23, VAR_24);
  VAR_25 |= 2;
 }
 FUNC_2(VAR_13, 0);
 FUNC_2(VAR_11, 0);
 FUNC_2(VAR_6, 0);

 if (!FUNC_10(VAR_25) ||
     VAR_19->sprite_scaling_enabled)
  return;
 VAR_25 = FUNC_7(VAR_25) - 1;


 if (!FUNC_9(VAR_18, 1, VAR_25,
       FUNC_4() * 500,
       &VAR_16,
       &VAR_14,
       &VAR_22, &VAR_23, &VAR_24))
  return;

 FUNC_2(VAR_6,
     VAR_8 |
     (FUNC_4() << VAR_7) |
     (VAR_22 << VAR_5) |
     (VAR_23 << VAR_9) |
     VAR_24);


 if (!FUNC_9(VAR_18, 2, VAR_25,
       FUNC_5() * 500,
       &VAR_16,
       &VAR_14,
       &VAR_22, &VAR_23, &VAR_24))
  return;

 FUNC_2(VAR_11,
     VAR_10 |
     (FUNC_5() << VAR_7) |
     (VAR_22 << VAR_5) |
     (VAR_23 << VAR_9) |
     VAR_24);


 if (!FUNC_9(VAR_18, 3, VAR_25,
       FUNC_6() * 500,
       &VAR_16,
       &VAR_14,
       &VAR_22, &VAR_23, &VAR_24))
  return;

 FUNC_2(VAR_13,
     VAR_12 |
     (FUNC_6() << VAR_7) |
     (VAR_22 << VAR_5) |
     (VAR_23 << VAR_9) |
     VAR_24);
}

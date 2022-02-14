
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
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
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_26)
{
 struct drm_i915_private *VAR_27 = VAR_26->dev_private;
 uint32_t VAR_28 = VAR_14;


 VAR_28 |= VAR_8 |
     VAR_9 |
     VAR_10;

 FUNC_1(VAR_17,
     VAR_16 |
     VAR_19);
 FUNC_1(VAR_18,
     VAR_20);
 FUNC_1(VAR_5,
     (FUNC_0(VAR_5) |
      VAR_7 | VAR_15));
 VAR_28 |= VAR_6;
 FUNC_1(VAR_2,
     (FUNC_0(VAR_2) |
      VAR_3));
 FUNC_1(VAR_23, 0);
 FUNC_1(VAR_22, 0);
 FUNC_1(VAR_21, 0);
 if (FUNC_2(VAR_26)) {
  FUNC_1(VAR_4,
      FUNC_0(VAR_4) |
      VAR_13);
  FUNC_1(VAR_5,
      FUNC_0(VAR_5) |
      VAR_7);
 }

 FUNC_1(VAR_11, VAR_28);

 FUNC_1(VAR_5,
     FUNC_0(VAR_5) |
     VAR_12);
 FUNC_1(VAR_24,
     VAR_25 << 16 |
     VAR_25);


 FUNC_1(VAR_0,
     FUNC_3(VAR_1));

 FUNC_4(VAR_26);
}

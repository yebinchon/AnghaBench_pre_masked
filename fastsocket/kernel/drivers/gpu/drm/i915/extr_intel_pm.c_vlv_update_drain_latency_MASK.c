
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


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
 int FUNC_0 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct drm_device*,int,int*,int*,int*,int*) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_13)
{
 struct drm_i915_private *VAR_14 = VAR_13->dev_private;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24;



 if (FUNC_1(VAR_13, 0, &VAR_23, &VAR_16,
          &VAR_24, &VAR_20)) {
  VAR_19 = (VAR_24 == VAR_10) ?
   VAR_1 : VAR_0;
  VAR_15 = (VAR_23 == VAR_10) ?
   VAR_7 : VAR_6;

  FUNC_0(VAR_11, VAR_19 |
    (VAR_20 << VAR_2) |
    VAR_15 | VAR_16);
 }


 if (FUNC_1(VAR_13, 1, &VAR_23, &VAR_18,
          &VAR_24, &VAR_22)) {
  VAR_21 = (VAR_24 == VAR_10) ?
   VAR_4 : VAR_3;
  VAR_17 = (VAR_23 == VAR_10) ?
   VAR_9 : VAR_8;

  FUNC_0(VAR_12, VAR_21 |
    (VAR_22 << VAR_5) |
    VAR_17 | VAR_18);
 }
}

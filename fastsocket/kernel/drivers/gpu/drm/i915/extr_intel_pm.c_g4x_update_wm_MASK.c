
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int,int,int,int,int,int) ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (struct drm_device*,scalar_t__,int const,int *,int *,int*,int*) ;
 scalar_t__ FUNC_5 (struct drm_device*,int,int *,int ,int *,int ,int*,int*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_16)
{
 static const int VAR_17 = 12000;
 struct drm_i915_private *VAR_18 = VAR_16->dev_private;
 int VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24;
 unsigned int VAR_25 = 0;

 if (FUNC_5(VAR_16, 0,
       &VAR_14, VAR_15,
       &VAR_13, VAR_15,
       &VAR_19, &VAR_21))
  VAR_25 |= 1;

 if (FUNC_5(VAR_16, 1,
       &VAR_14, VAR_15,
       &VAR_13, VAR_15,
       &VAR_20, &VAR_22))
  VAR_25 |= 2;

 if (FUNC_6(VAR_25) &&
     FUNC_4(VAR_16, FUNC_3(VAR_25) - 1,
        VAR_17,
        &VAR_14,
        &VAR_13,
        &VAR_23, &VAR_24)) {
  FUNC_2(VAR_11, VAR_12);
 } else {
  FUNC_2(VAR_11,
      FUNC_1(VAR_11) & ~VAR_12);
  VAR_23 = VAR_24 = 0;
 }

 FUNC_0("Setting FIFO watermarks - A: plane=%d, cursor=%d, B: plane=%d, cursor=%d, SR: plane=%d, cursor=%d\n",
        VAR_19, VAR_21,
        VAR_20, VAR_22,
        VAR_23, VAR_24);

 FUNC_2(VAR_0,
     (VAR_23 << VAR_10) |
     (VAR_22 << VAR_5) |
     (VAR_20 << VAR_9) |
     VAR_19);
 FUNC_2(VAR_1,
     (FUNC_1(VAR_1) & ~VAR_3) |
     (VAR_21 << VAR_4));

 FUNC_2(VAR_2,
     (FUNC_1(VAR_2) & ~(VAR_8 | VAR_6)) |
     (VAR_24 << VAR_7));
}

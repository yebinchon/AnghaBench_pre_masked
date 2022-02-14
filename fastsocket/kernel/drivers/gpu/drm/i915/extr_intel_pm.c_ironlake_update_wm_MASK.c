
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
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
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (struct drm_device*,int,int *,int ,int *,int ,int*,int*) ;
 int FUNC_6 (struct drm_device*,int,unsigned int,int,int *,int *,int*,int*,int*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (unsigned int) ;

__attribute__((used)) static void FUNC_8(struct drm_device *VAR_17)
{
 struct drm_i915_private *VAR_18 = VAR_17->dev_private;
 int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22;

 VAR_22 = 0;
 if (FUNC_5(VAR_17, 0,
       &VAR_16,
       VAR_1,
       &VAR_14,
       VAR_0,
       &VAR_20, &VAR_21)) {
  FUNC_1(VAR_2,
      (VAR_20 << VAR_4) | VAR_21);
  FUNC_0("FIFO watermarks For pipe A -"
         " plane %d, " "cursor: %d\n",
         VAR_20, VAR_21);
  VAR_22 |= 1;
 }

 if (FUNC_5(VAR_17, 1,
       &VAR_16,
       VAR_1,
       &VAR_14,
       VAR_0,
       &VAR_20, &VAR_21)) {
  FUNC_1(VAR_3,
      (VAR_20 << VAR_4) | VAR_21);
  FUNC_0("FIFO watermarks For pipe B -"
         " plane %d, cursor: %d\n",
         VAR_20, VAR_21);
  VAR_22 |= 2;
 }





 FUNC_1(VAR_12, 0);
 FUNC_1(VAR_11, 0);
 FUNC_1(VAR_6, 0);

 if (!FUNC_7(VAR_22))
  return;
 VAR_22 = FUNC_4(VAR_22) - 1;


 if (!FUNC_6(VAR_17, 1, VAR_22,
       FUNC_2() * 500,
       &VAR_15,
       &VAR_13,
       &VAR_19, &VAR_20, &VAR_21))
  return;

 FUNC_1(VAR_6,
     VAR_8 |
     (FUNC_2() << VAR_7) |
     (VAR_19 << VAR_5) |
     (VAR_20 << VAR_9) |
     VAR_21);


 if (!FUNC_6(VAR_17, 2, VAR_22,
       FUNC_3() * 500,
       &VAR_15,
       &VAR_13,
       &VAR_19, &VAR_20, &VAR_21))
  return;

 FUNC_1(VAR_11,
     VAR_10 |
     (FUNC_3() << VAR_7) |
     (VAR_19 << VAR_5) |
     (VAR_20 << VAR_9) |
     VAR_21);





}

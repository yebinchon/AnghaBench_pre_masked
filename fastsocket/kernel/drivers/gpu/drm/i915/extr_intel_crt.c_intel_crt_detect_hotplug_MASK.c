
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct drm_connector*) ;
 scalar_t__ FUNC_9 (int,int) ;

__attribute__((used)) static bool FUNC_10(struct drm_connector *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 struct drm_i915_private *VAR_8 = VAR_7->dev_private;
 u32 VAR_9, VAR_10, VAR_11;
 bool VAR_12 = 0;
 int VAR_13, VAR_14 = 0;

 if (FUNC_1(VAR_7))
  return FUNC_7(VAR_6);

 if (FUNC_6(VAR_7))
  return FUNC_8(VAR_6);






 if (FUNC_4(VAR_7) && !FUNC_5(VAR_7))
  VAR_14 = 2;
 else
  VAR_14 = 1;
 VAR_9 = VAR_10 = FUNC_2(VAR_4);
 VAR_9 |= VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_14 ; VAR_13++) {

  FUNC_3(VAR_4, VAR_9);

  if (FUNC_9((FUNC_2(VAR_4) &
         VAR_0) == 0,
        1000))
   FUNC_0("timed out waiting for FORCE_DETECT to go off");
 }

 VAR_11 = FUNC_2(VAR_5);
 if ((VAR_11 & VAR_2) != VAR_3)
  VAR_12 = 1;


 FUNC_3(VAR_5, VAR_1);


 FUNC_3(VAR_4, VAR_10);

 return VAR_12;
}

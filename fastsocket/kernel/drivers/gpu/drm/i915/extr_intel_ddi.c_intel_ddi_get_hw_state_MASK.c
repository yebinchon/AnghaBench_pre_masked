
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct intel_encoder*) ;

bool FUNC_6(struct intel_encoder *VAR_10,
       enum pipe *VAR_11)
{
 struct drm_device *VAR_12 = VAR_10->base.dev;
 struct drm_i915_private *VAR_13 = VAR_12->dev_private;
 enum port VAR_14 = FUNC_5(VAR_10);
 u32 VAR_15;
 int VAR_16;

 VAR_15 = FUNC_2(FUNC_0(VAR_14));

 if (!(VAR_15 & VAR_0))
  return 0;

 if (VAR_14 == VAR_4) {
  VAR_15 = FUNC_2(FUNC_3(VAR_7));

  switch (VAR_15 & VAR_8) {
  case 131:
  case 130:
   *VAR_11 = VAR_1;
   break;
  case 129:
   *VAR_11 = VAR_2;
   break;
  case 128:
   *VAR_11 = VAR_3;
   break;
  }

  return 1;
 } else {
  for (VAR_16 = VAR_5; VAR_16 <= VAR_6; VAR_16++) {
   VAR_15 = FUNC_2(FUNC_3(VAR_16));

   if ((VAR_15 & VAR_9)
       == FUNC_4(VAR_14)) {
    *VAR_11 = VAR_16;
    return 1;
   }
  }
 }

 FUNC_1("No pipe for ddi port %i found\n", VAR_14);

 return 1;
}

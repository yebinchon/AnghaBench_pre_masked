
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (struct drm_i915_private*,int) ;
 unsigned long VAR_3 ;
 int FUNC_7 (int) ;
 unsigned long FUNC_8 (int) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_10 (int,int) ;

void FUNC_11(struct drm_device *VAR_4, int VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_4->dev_private;
 enum transcoder VAR_7 = FUNC_6(VAR_6,
              VAR_5);

 if (FUNC_1(VAR_4)->gen >= 4) {
  int VAR_8 = FUNC_3(VAR_7);


  if (FUNC_10((FUNC_0(VAR_8) & VAR_2) == 0,
        100))
   FUNC_5(1, "pipe_off wait timed out\n");
 } else {
  u32 VAR_9, VAR_10;
  int VAR_11 = FUNC_4(VAR_5);
  unsigned long VAR_12 = VAR_3 + FUNC_8(100);

  if (FUNC_2(VAR_4))
   VAR_10 = VAR_0;
  else
   VAR_10 = VAR_1;


  do {
   VAR_9 = FUNC_0(VAR_11) & VAR_10;
   FUNC_7(5);
  } while (((FUNC_0(VAR_11) & VAR_10) != VAR_9) &&
    FUNC_9(VAR_12, VAR_3));
  if (FUNC_9(VAR_3, VAR_12))
   FUNC_5(1, "pipe_off wait timed out\n");
 }
}

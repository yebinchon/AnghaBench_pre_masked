
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int * dev_private; } ;
typedef int drm_i915_private_t ;
struct TYPE_2__ {int size; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct drm_device * VAR_1, int *VAR_2, int VAR_3)
{
 drm_i915_private_t *VAR_4 = VAR_1->dev_private;
 int VAR_5, VAR_6;

 if ((VAR_3+1) * sizeof(int) >= FUNC_2(VAR_4)->size - 8)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3;) {
  int VAR_7 = FUNC_4(VAR_2[VAR_5]);
  if (VAR_7 == 0 || VAR_5 + VAR_7 > VAR_3)
   return -VAR_0;
  VAR_5 += VAR_7;
 }

 VAR_6 = FUNC_1((VAR_3+1)&~1);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_3(VAR_2[VAR_5]);
 if (VAR_3 & 1)
  FUNC_3(0);

 FUNC_0();

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_delay; int min_delay; int hw_lock; } ;
struct drm_i915_private {TYPE_1__ rps; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_i915_private*,int ,unsigned int) ;
 unsigned int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 int VAR_5 = 15;
 int VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9 = 180;

 FUNC_1(!FUNC_3(&VAR_4->rps.hw_lock));

 VAR_8 = FUNC_2(0);




 if (!VAR_8)
  VAR_8 = VAR_2;


 VAR_8 /= 1000;






 for (VAR_6 = VAR_4->rps.max_delay; VAR_6 >= VAR_4->rps.min_delay;
      VAR_6--) {
  int VAR_10 = VAR_4->rps.max_delay - VAR_6;





  if (VAR_6 < VAR_5)
   VAR_7 = 800;
  else
   VAR_7 = VAR_8 - ((VAR_10 * VAR_9) / 2);
  VAR_7 = FUNC_0(VAR_7, 100);
  VAR_7 <<= VAR_0;

  FUNC_4(VAR_4,
     VAR_1,
     VAR_7 | VAR_6);
 }
}

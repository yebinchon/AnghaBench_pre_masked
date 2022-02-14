
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_6__ {int irq_lock; TYPE_1__* info; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_7__ {int gen; } ;
struct TYPE_5__ {int gen; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (struct drm_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (struct drm_device*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_5, int VAR_6)
{
 drm_i915_private_t *VAR_7 = (drm_i915_private_t *) VAR_5->dev_private;
 unsigned long VAR_8;

 if (!FUNC_4(VAR_5, VAR_6))
  return -VAR_0;

 FUNC_5(&VAR_7->irq_lock, VAR_8);
 if (FUNC_1(VAR_5)->gen >= 4)
  FUNC_3(VAR_7, VAR_6,
         VAR_3);
 else
  FUNC_3(VAR_7, VAR_6,
         VAR_4);


 if (VAR_7->info->gen == 3)
  FUNC_0(VAR_1, FUNC_2(VAR_2));
 FUNC_6(&VAR_7->irq_lock, VAR_8);

 return 0;
}

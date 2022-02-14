
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {int irq_received; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_7)
{
 drm_i915_private_t *VAR_8 = (drm_i915_private_t *) VAR_7->dev_private;

 FUNC_2(&VAR_8->irq_received, 0);

 FUNC_0(VAR_4, 0xeffe);



 FUNC_0(VAR_1, 0xffffffff);
 FUNC_0(VAR_0, 0x0);
 FUNC_1(VAR_0);


 FUNC_0(VAR_3, 0xffffffff);
 FUNC_0(VAR_2, 0x0);
 FUNC_1(VAR_2);


 FUNC_0(VAR_6, 0xffffffff);
 FUNC_0(VAR_5, 0x0);
 FUNC_1(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct drm_i915_private {TYPE_1__* gmbus; } ;
struct TYPE_2__ {struct i2c_adapter adapter; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int) ;

struct i2c_adapter *FUNC_2(struct drm_i915_private *VAR_0,
         unsigned VAR_1)
{
 FUNC_0(!FUNC_1(VAR_1));

 return (FUNC_1(VAR_1)) ?
  &VAR_0->gmbus[VAR_1 - 1].adapter : ((void*)0);
}

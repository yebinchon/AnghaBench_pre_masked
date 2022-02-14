
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1, int VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->dev_private;
 uint32_t VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 VAR_5 = VAR_4 & 0x7f;
 VAR_5 >>= 1;

 FUNC_0("FIFO size - (0x%08x) %s: %d\n", VAR_4,
        VAR_2 ? "B" : "A", VAR_5);

 return VAR_5;
}

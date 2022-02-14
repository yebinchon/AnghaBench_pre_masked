
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_0);
 if ((VAR_5 & VAR_1) != VAR_2) {
  FUNC_0("Wrong MCH_SSKPD value: 0x%08x\n", VAR_5);
  FUNC_0("This can cause pipe underruns and display issues.\n");
  FUNC_0("Please upgrade your BIOS to fix this.\n");
 }
}

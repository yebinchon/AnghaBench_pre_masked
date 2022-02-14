
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {int dummy; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct creg {int clk; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct nouveau_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_4(struct drm_device *VAR_0, int VAR_1, struct creg *VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_1(VAR_0);
 struct nouveau_drm *VAR_4 = FUNC_2(VAR_0);

 if (!VAR_2->clk) {
  FUNC_0(VAR_4, "no clock for %02x\n", VAR_1);
  return;
 }

 FUNC_3(VAR_3, 0x004120 + (VAR_1 * 4), 0x003f3141, 0x00000101 | VAR_2->clk);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_drm {int dummy; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct creg {int clk; int pll; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct nouveau_device*,int const,int,int) ;
 int FUNC_4 (struct nouveau_device*,int const,int,int) ;
 int FUNC_5 (struct nouveau_device*,int const,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct drm_device *VAR_0, int VAR_1, u32 VAR_2, struct creg *VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_1(VAR_0);
 struct nouveau_drm *VAR_5 = FUNC_2(VAR_0);
 const u32 VAR_6 = 0x004120 + (VAR_1 * 4);
 const u32 VAR_7 = 0x004160 + (VAR_1 * 4);
 const u32 VAR_8 = VAR_2 + 0;
 const u32 VAR_9 = VAR_2 + 4;

 if (!VAR_3->clk && !VAR_3->pll) {
  FUNC_0(VAR_5, "no clock for %02x\n", VAR_1);
  return;
 }

 if (VAR_3->pll) {
  FUNC_3(VAR_4, VAR_6, 0x00000101, 0x00000101);
  FUNC_5(VAR_4, VAR_9, VAR_3->pll);
  FUNC_3(VAR_4, VAR_8, 0x00000015, 0x00000015);
  FUNC_3(VAR_4, VAR_8, 0x00000010, 0x00000000);
  FUNC_4(VAR_4, VAR_8, 0x00020000, 0x00020000);
  FUNC_3(VAR_4, VAR_8, 0x00000010, 0x00000010);
  FUNC_3(VAR_4, VAR_8, 0x00000008, 0x00000000);
  FUNC_3(VAR_4, VAR_7, 0x00000100, 0x00000000);
  FUNC_3(VAR_4, VAR_7, 0x00000001, 0x00000000);
 } else {
  FUNC_3(VAR_4, VAR_7, 0x003f3141, 0x00000101 | VAR_3->clk);
  FUNC_3(VAR_4, VAR_8, 0x00000018, 0x00000018);
  FUNC_6(20);
  FUNC_3(VAR_4, VAR_8, 0x00000001, 0x00000000);
  FUNC_3(VAR_4, VAR_6, 0x00000100, 0x00000000);
  FUNC_3(VAR_4, VAR_6, 0x00000001, 0x00000000);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_pm_clock {int ssel; int ddiv; int mdiv; int coef; int dsrc; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_device*,int,int,int) ;
 int FUNC_2 (struct nouveau_device*,int) ;
 int FUNC_3 (struct nouveau_device*,int,int,int) ;
 int FUNC_4 (struct nouveau_device*,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct drm_device *VAR_0, int VAR_1, struct nvc0_pm_clock *VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_0(VAR_0);


 if (VAR_1 < 7 && !VAR_2->ssel) {
  FUNC_1(VAR_3, 0x1371d0 + (VAR_1 * 0x04), 0x80003f3f, VAR_2->ddiv);
  FUNC_4(VAR_3, 0x137160 + (VAR_1 * 0x04), VAR_2->dsrc);
 }


 FUNC_1(VAR_3, 0x137100, (1 << VAR_1), 0x00000000);
 FUNC_3(VAR_3, 0x137100, (1 << VAR_1), 0x00000000);


 if (VAR_1 < 7) {

  u32 VAR_4 = 0x137000 + (VAR_1 * 0x20);
  u32 VAR_5 = FUNC_2(VAR_3, VAR_4 + 0x00);
  if (VAR_5 & 0x00000001) {
   FUNC_1(VAR_3, VAR_4 + 0x00, 0x00000004, 0x00000000);
   FUNC_1(VAR_3, VAR_4 + 0x00, 0x00000001, 0x00000000);
  }

  if (VAR_2->ssel) {
   FUNC_4(VAR_3, VAR_4 + 0x04, VAR_2->coef);
   FUNC_1(VAR_3, VAR_4 + 0x00, 0x00000001, 0x00000001);
   FUNC_3(VAR_3, VAR_4 + 0x00, 0x00020000, 0x00020000);
   FUNC_1(VAR_3, VAR_4 + 0x00, 0x00020004, 0x00000004);
  }
 }


 FUNC_1(VAR_3, 0x137100, (1 << VAR_1), VAR_2->ssel);
 FUNC_3(VAR_3, 0x137100, (1 << VAR_1), VAR_2->ssel);
 FUNC_1(VAR_3, 0x137250 + (VAR_1 * 0x04), 0x00003f3f, VAR_2->mdiv);
}

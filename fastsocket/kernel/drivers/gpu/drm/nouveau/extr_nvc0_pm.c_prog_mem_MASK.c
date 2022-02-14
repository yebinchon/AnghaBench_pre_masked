
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvc0_pm_state {int perflvl; } ;
struct nouveau_mem_exec_func {struct nvc0_pm_state* priv; int timing_set; int clock_set; int mrs; int mrg; int wait; int refresh_self; int refresh_auto; int refresh; int precharge; struct drm_device* dev; } ;
struct nouveau_device {int chipset; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nouveau_mem_exec_func*,int ) ;
 int FUNC_2 (struct nouveau_device*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct drm_device *VAR_9, struct nvc0_pm_state *VAR_10)
{
 struct nouveau_device *VAR_11 = FUNC_0(VAR_9);
 struct nouveau_mem_exec_func VAR_12 = {
  .dev = VAR_9,
  .precharge = VAR_3,
  .refresh = VAR_4,
  .refresh_auto = VAR_5,
  .refresh_self = VAR_6,
  .wait = VAR_8,
  .mrg = VAR_1,
  .mrs = VAR_2,
  .clock_set = VAR_0,
  .timing_set = VAR_7,
  .priv = VAR_10
 };

 if (VAR_11->chipset < 0xd0)
  FUNC_2(VAR_11, 0x611200, 0x00003300);
 else
  FUNC_2(VAR_11, 0x62c000, 0x03030000);

 FUNC_1(&VAR_12, VAR_10->perflvl);

 if (VAR_11->chipset < 0xd0)
  FUNC_2(VAR_11, 0x611200, 0x00003330);
 else
  FUNC_2(VAR_11, 0x62c000, 0x03030300);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nva3_pm_state {int* ramcfg; struct nouveau_pm_level* perflvl; } ;
struct TYPE_2__ {int* reg; } ;
struct nouveau_pm_level {TYPE_1__ timing; } ;
struct nouveau_mem_exec_func {struct nva3_pm_state* priv; int dev; } ;
struct nouveau_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_device*,int,int,int) ;
 int FUNC_2 (struct nouveau_device*,int) ;
 int FUNC_3 (struct nouveau_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_mem_exec_func *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_0(VAR_0->dev);
 struct nva3_pm_state *VAR_2 = VAR_0->priv;
 struct nouveau_pm_level *VAR_3 = VAR_2->perflvl;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 9; VAR_4++)
  FUNC_3(VAR_1, 0x100220 + (VAR_4 * 4), VAR_3->timing.reg[VAR_4]);

 if (VAR_2->ramcfg) {
  u32 VAR_5 = (VAR_2->ramcfg[2] & 0x08) ? 0x00000000 : 0x00001000;
  FUNC_1(VAR_1, 0x100200, 0x00001000, VAR_5);
 }

 if (VAR_2->ramcfg) {
  u32 VAR_6 = FUNC_2(VAR_1, 0x100714) & ~0xf0000010;
  u32 VAR_7 = FUNC_2(VAR_1, 0x100718) & ~0x00000100;
  u32 VAR_8 = FUNC_2(VAR_1, 0x10071c) & ~0x00000100;
  if ( (VAR_2->ramcfg[2] & 0x20))
   VAR_6 |= 0xf0000000;
  if (!(VAR_2->ramcfg[2] & 0x04))
   VAR_6 |= 0x00000010;
  FUNC_3(VAR_1, 0x100714, VAR_6);

  if (VAR_2->ramcfg[2] & 0x01)
   VAR_8 |= 0x00000100;
  FUNC_3(VAR_1, 0x10071c, VAR_8);

  if (VAR_2->ramcfg[2] & 0x02)
   VAR_7 |= 0x00000100;
  FUNC_3(VAR_1, 0x100718, VAR_7);

  if (VAR_2->ramcfg[2] & 0x10)
   FUNC_3(VAR_1, 0x111100, 0x48000000);
 }
}
